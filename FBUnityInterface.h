/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 16, 2016 at 1:28:32 PM Central European Standard Time
* Operating System: Version 9.3.2 (Build 13F69)
* Image Source: /var/containers/Bundle/Application/DF2FE387-EFC2-4765-9E85-C2CDC49533B4/rb_12_01_16:02:52.app/Super Mario Run
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Super Mario Run/AppDelegateListener.h>

@class NSString;

@interface FBUnityInterface : NSObject <AppDelegateListener> {

	BOOL _useFrictionlessRequests;
	int _shareDialogMode;
	NSString* _openURLString;

}

@property (nonatomic,copy) NSString * openURLString;                    //@synthesize openURLString=_openURLString - In the implementation block
@property (assign,nonatomic) BOOL useFrictionlessRequests;              //@synthesize useFrictionlessRequests=_useFrictionlessRequests - In the implementation block
@property (assign,nonatomic) int shareDialogMode;                       //@synthesize shareDialogMode=_shareDialogMode - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
+(void)initialize;
-(void)didFinishLaunching:(id)arg1 ;
-(void)onOpenURL:(id)arg1 ;
-(void)setShareDialogMode:(int)arg1 ;
-(void)setOpenURLString:(NSString *)arg1 ;
-(void)setUseFrictionlessRequests:(BOOL)arg1 ;
-(id)getAccessTokenUserData;
-(void)startLogin:(int)arg1 scope:(const char*)arg2 isPublishPermLogin:(BOOL)arg3 ;
-(BOOL)tryCompleteLoginWithRequestId:(int)arg1 ;
-(void)logOut;
-(BOOL)useFrictionlessRequests;
-(unsigned long long)getDialogMode;
-(void)shareContentWithRequestId:(int)arg1 shareContent:(id)arg2 dialogMode:(unsigned long long)arg3 ;
-(int)shareDialogMode;
-(void)configureAppId:(const char*)arg1 frictionlessRequests:(BOOL)arg2 urlSuffix:(const char*)arg3 ;
-(void)logInWithPublishPermissions:(int)arg1 scope:(const char*)arg2 ;
-(void)logInWithReadPermissions:(int)arg1 scope:(const char*)arg2 ;
-(void)appRequestWithRequestId:(int)arg1 message:(const char*)arg2 actionType:(const char*)arg3 objectId:(const char*)arg4 to:(const char**)arg5 toLength:(int)arg6 filters:(const char*)arg7 data:(const char*)arg8 title:(const char*)arg9 ;
-(void)appInviteWithRequestId:(int)arg1 appLinkUrl:(const char*)arg2 previewImageUrl:(const char*)arg3 ;
-(void)shareLinkWithRequestId:(int)arg1 contentURL:(const char*)arg2 contentTitle:(const char*)arg3 contentDescription:(const char*)arg4 photoURL:(const char*)arg5 ;
-(void)shareFeedWithRequestId:(int)arg1 toId:(const char*)arg2 link:(const char*)arg3 linkName:(const char*)arg4 linkCaption:(const char*)arg5 linkDescription:(const char*)arg6 picture:(const char*)arg7 mediaSource:(const char*)arg8 ;
-(void)showJoinAppGroupDialogWithRequestId:(int)arg1 groupId:(const char*)arg2 ;
-(void)showCreateAppGroupDialogWithRequestId:(int)arg1 groupName:(const char*)arg2 groupDescription:(const char*)arg3 groupPrivacy:(const char*)arg4 ;
-(NSString *)openURLString;
-(id)init;
-(void)didBecomeActive:(id)arg1 ;
@end

