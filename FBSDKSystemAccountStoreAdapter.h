/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 16, 2016 at 1:28:33 PM Central European Standard Time
* Operating System: Version 9.3.2 (Build 13F69)
* Image Source: /var/containers/Bundle/Application/DF2FE387-EFC2-4765-9E85-C2CDC49533B4/rb_12_01_16:02:52.app/Super Mario Run
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class ACAccountStore, ACAccountType;

@interface FBSDKSystemAccountStoreAdapter : NSObject {

	ACAccountStore* _accountStore;
	ACAccountType* _accountType;
	BOOL _forceBlockingRenew;

}

@property (nonatomic,retain,readonly) ACAccountStore * accountStore; 
@property (assign,nonatomic) BOOL forceBlockingRenew;                             //@synthesize forceBlockingRenew=_forceBlockingRenew - In the implementation block
@property (nonatomic,readonly) ACAccountType * accountType; 
+(id)sharedInstance;
+(void)initialize;
+(void)setSharedInstance:(id)arg1 ;
-(id)accessTokenString;
-(void)setForceBlockingRenew:(BOOL)arg1 ;
-(void)renewSystemAuthorization:(/*^block*/id)arg1 ;
-(BOOL)forceBlockingRenew;
-(void)requestAccessToFacebookAccountStore:(id)arg1 defaultAudience:(id)arg2 isReauthorize:(BOOL)arg3 appID:(id)arg4 handler:(/*^block*/id)arg5 ;
-(void)requestAccessToFacebookAccountStore:(id)arg1 retrying:(BOOL)arg2 handler:(/*^block*/id)arg3 ;
-(id)init;
-(ACAccountStore *)accountStore;
-(ACAccountType *)accountType;
@end

