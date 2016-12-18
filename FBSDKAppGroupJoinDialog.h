/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 16, 2016 at 1:28:33 PM Central European Standard Time
* Operating System: Version 9.3.2 (Build 13F69)
* Image Source: /var/containers/Bundle/Application/DF2FE387-EFC2-4765-9E85-C2CDC49533B4/rb_12_01_16:02:52.app/Super Mario Run
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Super Mario Run/FBSDKWebDialogDelegate.h>

@protocol FBSDKAppGroupJoinDialogDelegate;
@class FBSDKWebDialog, NSString;

@interface FBSDKAppGroupJoinDialog : NSObject <FBSDKWebDialogDelegate> {

	FBSDKWebDialog* _webDialog;
	id<FBSDKAppGroupJoinDialogDelegate> _delegate;
	NSString* _groupID;

}

@property (assign,nonatomic,__weak) id<FBSDKAppGroupJoinDialogDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * groupID;                                                 //@synthesize groupID=_groupID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)showWithGroupID:(id)arg1 delegate:(id)arg2 ;
-(BOOL)canShow;
-(void)_handleCompletionWithDialogResults:(id)arg1 error:(id)arg2 ;
-(void)webDialog:(id)arg1 didCompleteWithResults:(id)arg2 ;
-(void)webDialog:(id)arg1 didFailWithError:(id)arg2 ;
-(void)webDialogDidCancel:(id)arg1 ;
-(BOOL)show;
-(void)setDelegate:(id<FBSDKAppGroupJoinDialogDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<FBSDKAppGroupJoinDialogDelegate>)delegate;
-(BOOL)validateWithError:(id*)arg1 ;
-(NSString *)groupID;
-(void)setGroupID:(NSString *)arg1 ;
@end

