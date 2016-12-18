/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 16, 2016 at 1:28:33 PM Central European Standard Time
* Operating System: Version 9.3.2 (Build 13F69)
* Image Source: /var/containers/Bundle/Application/DF2FE387-EFC2-4765-9E85-C2CDC49533B4/rb_12_01_16:02:52.app/Super Mario Run
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBSDKAppInviteDialogDelegate;
@class UIViewController, FBSDKAppInviteContent;

@interface FBSDKAppInviteDialog : NSObject {

	UIViewController* _fromViewController;
	id<FBSDKAppInviteDialogDelegate> _delegate;
	FBSDKAppInviteContent* _content;

}

@property (assign,nonatomic,__weak) UIViewController * fromViewController;                  //@synthesize fromViewController=_fromViewController - In the implementation block
@property (assign,nonatomic,__weak) id<FBSDKAppInviteDialogDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) FBSDKAppInviteContent * content;                                 //@synthesize content=_content - In the implementation block
+(id)showFromViewController:(id)arg1 withContent:(id)arg2 delegate:(id)arg3 ;
+(id)showWithContent:(id)arg1 delegate:(id)arg2 ;
+(void)initialize;
-(BOOL)canShow;
-(BOOL)_canShowNative;
-(void)_invokeDelegateDidFailWithError:(id)arg1 ;
-(void)_logDialogShow;
-(void)_invokeDelegateDidCompleteWithResults:(id)arg1 ;
-(void)_handleCompletionWithDialogResults:(id)arg1 error:(id)arg2 ;
-(BOOL)show;
-(void)setDelegate:(id<FBSDKAppInviteDialogDelegate>)arg1 ;
-(id<FBSDKAppInviteDialogDelegate>)delegate;
-(UIViewController *)fromViewController;
-(FBSDKAppInviteContent *)content;
-(BOOL)validateWithError:(id*)arg1 ;
-(void)setFromViewController:(UIViewController *)arg1 ;
-(void)setContent:(FBSDKAppInviteContent *)arg1 ;
@end
