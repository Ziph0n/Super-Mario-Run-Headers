/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 16, 2016 at 1:28:33 PM Central European Standard Time
* Operating System: Version 9.3.2 (Build 13F69)
* Image Source: /var/containers/Bundle/Application/DF2FE387-EFC2-4765-9E85-C2CDC49533B4/rb_12_01_16:02:52.app/Super Mario Run
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Super Mario Run/FBSDKWebDialogDelegate.h>
#import <Super Mario Run/FBSDKSharingDialog.h>

@protocol FBSDKSharingDelegate, FBSDKSharingContent;
@class FBSDKWebDialog, UIViewController, NSString;

@interface FBSDKShareDialog : NSObject <FBSDKWebDialogDelegate, FBSDKSharingDialog> {

	FBSDKWebDialog* _webDialog;
	BOOL _shouldFailOnDataError;
	id<FBSDKSharingDelegate> _delegate;
	id<FBSDKSharingContent> _shareContent;
	UIViewController* _fromViewController;
	unsigned long long _mode;

}

@property (assign,nonatomic,__weak) UIViewController * fromViewController;              //@synthesize fromViewController=_fromViewController - In the implementation block
@property (assign,nonatomic) unsigned long long mode;                                   //@synthesize mode=_mode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<FBSDKSharingDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) id<FBSDKSharingContent> shareContent;                        //@synthesize shareContent=_shareContent - In the implementation block
@property (assign,nonatomic) BOOL shouldFailOnDataError;                                //@synthesize shouldFailOnDataError=_shouldFailOnDataError - In the implementation block
+(id)showFromViewController:(id)arg1 withContent:(id)arg2 delegate:(id)arg3 ;
+(void)initialize;
-(void)setShareContent:(id<FBSDKSharingContent>)arg1 ;
-(id<FBSDKSharingContent>)shareContent;
-(BOOL)canShow;
-(BOOL)_canShowNative;
-(BOOL)_canShowShareSheet;
-(BOOL)_validateWithError:(id*)arg1 ;
-(BOOL)_showAutomatic:(id*)arg1 ;
-(BOOL)_showBrowser:(id*)arg1 ;
-(BOOL)_showFeedBrowser:(id*)arg1 ;
-(BOOL)_showFeedWeb:(id*)arg1 ;
-(BOOL)_showNativeWithCanShowError:(id*)arg1 validationError:(id*)arg2 ;
-(BOOL)_showShareSheetWithCanShowError:(id*)arg1 validationError:(id*)arg2 ;
-(BOOL)_showWeb:(id*)arg1 ;
-(void)_invokeDelegateDidFailWithError:(id)arg1 ;
-(void)_logDialogShow;
-(BOOL)_validateFullyCompatibleWithError:(id*)arg1 ;
-(void)_cleanUpWebDialog;
-(void)_invokeDelegateDidCancel;
-(void)_handleWebResponseParameters:(id)arg1 error:(id)arg2 ;
-(BOOL)_isDefaultToShareSheet;
-(BOOL)_useNativeDialog;
-(BOOL)_canUseFBShareSheet;
-(BOOL)_supportsShareSheetMinimumVersion:(id)arg1 ;
-(void)_invokeDelegateDidCompleteWithResults:(id)arg1 ;
-(BOOL)_validateShareContentForBrowser:(id*)arg1 ;
-(BOOL)_useSafariViewController;
-(BOOL)_validateShareContentForFeed:(id*)arg1 ;
-(BOOL)_validateShareContentForNative:(id*)arg1 ;
-(void)_loadNativeMethodName:(id*)arg1 methodVersion:(id*)arg2 ;
-(BOOL)_validateShareContentForShareSheet:(id*)arg1 ;
-(id)_contentImages;
-(id)_contentURLs;
-(id)_contentVideoURLs;
-(id)_calculateInitialText;
-(BOOL)_canUseQuoteInShareSheet;
-(BOOL)_canUseMMPInShareSheet;
-(BOOL)_isOpenGraphURLShare:(id)arg1 ;
-(BOOL)_canAttributeThroughShareSheet;
-(id)_calculatePreJSONInitialTextWithHashtag:(id)arg1 ;
-(BOOL)shouldFailOnDataError;
-(void)setShouldFailOnDataError:(BOOL)arg1 ;
-(void)webDialog:(id)arg1 didCompleteWithResults:(id)arg2 ;
-(void)webDialog:(id)arg1 didFailWithError:(id)arg2 ;
-(void)webDialogDidCancel:(id)arg1 ;
-(BOOL)show;
-(void)setDelegate:(id<FBSDKSharingDelegate>)arg1 ;
-(void)dealloc;
-(id<FBSDKSharingDelegate>)delegate;
-(UIViewController *)fromViewController;
-(void)setMode:(unsigned long long)arg1 ;
-(unsigned long long)mode;
-(BOOL)validateWithError:(id*)arg1 ;
-(void)setFromViewController:(UIViewController *)arg1 ;
-(BOOL)_validateVideoURL:(id)arg1 error:(id*)arg2 ;
@end
