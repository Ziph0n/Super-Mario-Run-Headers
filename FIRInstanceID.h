/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 16, 2016 at 1:28:32 PM Central European Standard Time
* Operating System: Version 9.3.2 (Build 13F69)
* Image Source: /var/containers/Bundle/Application/DF2FE387-EFC2-4765-9E85-C2CDC49533B4/rb_12_01_16:02:52.app/Super Mario Run
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSData, FIRInstanceIDConfig, FIRInstanceIDTokenManager, FIRInstanceIDKeyPairStore;

@interface FIRInstanceID : NSObject {

	BOOL _isFetchingDefaultToken;
	BOOL _isDefaultTokenFetchScheduled;
	NSString* _fcmSenderID;
	NSString* _fcmAppID;
	NSData* _apnsTokenData;
	NSString* _apnsToken;
	NSString* _defaultFCMToken;
	FIRInstanceIDConfig* _config;
	FIRInstanceIDTokenManager* _tokenManager;
	FIRInstanceIDKeyPairStore* _keyPairStore;
	long long _retryCountForDefaultToken;
	long long _retryCountForCheckinRefresh;

}

@property (nonatomic,copy) NSString * fcmSenderID;                                  //@synthesize fcmSenderID=_fcmSenderID - In the implementation block
@property (nonatomic,copy) NSString * fcmAppID;                                     //@synthesize fcmAppID=_fcmAppID - In the implementation block
@property (nonatomic,retain) NSData * apnsTokenData;                                //@synthesize apnsTokenData=_apnsTokenData - In the implementation block
@property (nonatomic,copy) NSString * apnsToken;                                    //@synthesize apnsToken=_apnsToken - In the implementation block
@property (nonatomic,copy) NSString * defaultFCMToken;                              //@synthesize defaultFCMToken=_defaultFCMToken - In the implementation block
@property (nonatomic,retain) FIRInstanceIDConfig * config;                          //@synthesize config=_config - In the implementation block
@property (nonatomic,retain) FIRInstanceIDTokenManager * tokenManager;              //@synthesize tokenManager=_tokenManager - In the implementation block
@property (nonatomic,retain) FIRInstanceIDKeyPairStore * keyPairStore;              //@synthesize keyPairStore=_keyPairStore - In the implementation block
@property (assign) BOOL isFetchingDefaultToken;                                     //@synthesize isFetchingDefaultToken=_isFetchingDefaultToken - In the implementation block
@property (assign) BOOL isDefaultTokenFetchScheduled;                               //@synthesize isDefaultTokenFetchScheduled=_isDefaultTokenFetchScheduled - In the implementation block
@property (assign,nonatomic) long long retryCountForDefaultToken;                   //@synthesize retryCountForDefaultToken=_retryCountForDefaultToken - In the implementation block
@property (assign,nonatomic) long long retryCountForCheckinRefresh;                 //@synthesize retryCountForCheckinRefresh=_retryCountForCheckinRefresh - In the implementation block
+(void)notifyTokenRefresh;
+(void)notifyIdentityLost;
+(void)didReceiveConfigureSDKNotification:(id)arg1 ;
+(id)configureErrorWithReason:(id)arg1 ;
+(void)exitApp:(id)arg1 withError:(id)arg2 ;
+(void)sendLogsForApp:(id)arg1 withError:(id)arg2 ;
+(void)load;
+(id)replaceAPNSDataWithString:(id)arg1 ;
+(long long)maxRetryCountForDefaultToken;
+(long long)maxRetryIntervalForDefaultTokenInSeconds;
+(long long)minIntervalForDefaultTokenRetry;
+(id)instanceID;
-(void)scheduleCheckinRefreshWaitWithHandler:(/*^block*/id)arg1 ;
-(BOOL)shouldWaitForCheckinRefresh;
-(double)waitIntervalForCheckinRefresh;
-(id)appInstanceID:(id*)arg1 ;
-(void)fetchCheckinInfoWithHandler:(/*^block*/id)arg1 ;
-(id)cachedCheckinPreferences;
-(void)handleTokenRefreshWithDelayInSeconds:(int)arg1 ;
-(void)invokeTokenRefreshCallbackWithDelayInSeconds:(int)arg1 ;
-(void)handleCommandResetWithDelayInSeconds:(int)arg1 ;
-(void)handleCommandResetFullWithDelayInSeconds:(int)arg1 ;
-(void)handleRefreshMessage:(id)arg1 withSubType:(id)arg2 ;
-(void)setAutoFetchedAPNSToken:(id)arg1 error:(id)arg2 ;
-(void)configureInstanceIDWithOptions:(id)arg1 app:(id)arg2 ;
-(void)setAPNSToken:(id)arg1 type:(long long)arg2 ;
-(void)startWithConfig:(id)arg1 ;
-(FIRInstanceIDTokenManager *)tokenManager;
-(NSString *)fcmSenderID;
-(BOOL)isSandboxApp;
-(void)fetchDefaultToken;
-(FIRInstanceIDKeyPairStore *)keyPairStore;
-(void)asyncInvokeGetTokenHandler:(/*^block*/id)arg1 withToken:(id)arg2 error:(id)arg3 ;
-(id)addInternalOptions:(id)arg1 ;
-(void)asyncLoadKeyPairWithHandler:(/*^block*/id)arg1 ;
-(void)asyncInvokeDeleteTokenHandler:(/*^block*/id)arg1 withError:(id)arg2 ;
-(void)asyncInvokeGetIDHandler:(/*^block*/id)arg1 withIdentity:(id)arg2 error:(id)arg3 ;
-(void)asyncInvokeDeleteIDHandler:(/*^block*/id)arg1 withError:(id)arg2 ;
-(void)setupLogger:(char)arg1 ;
-(void)setupTokenManagerWithConfig:(id)arg1 ;
-(void)setupKeyPairManager;
-(void)setupNotificationListeners;
-(void)setTokenManager:(FIRInstanceIDTokenManager *)arg1 ;
-(void)setKeyPairStore:(FIRInstanceIDKeyPairStore *)arg1 ;
-(void)didReceiveGCMMessage:(id)arg1 ;
-(NSString *)fcmAppID;
-(long long)retryCountForDefaultToken;
-(BOOL)isFetchingDefaultToken;
-(void)setDefaultFCMToken:(NSString *)arg1 ;
-(void)defaultTokenWithHandler:(/*^block*/id)arg1 ;
-(BOOL)isDefaultTokenFetchScheduled;
-(NSData *)apnsTokenData;
-(void)setIsFetchingDefaultToken:(BOOL)arg1 ;
-(void)setRetryCountForDefaultToken:(long long)arg1 ;
-(long long)retryIntervalToFetchDefaultToken;
-(void)setIsDefaultTokenFetchScheduled:(BOOL)arg1 ;
-(void)tokenWithAuthorizedEntity:(id)arg1 scope:(id)arg2 options:(id)arg3 handler:(/*^block*/id)arg4 ;
-(BOOL)hasValidCheckinInfo;
-(void)didAutoFetch:(BOOL)arg1 APNSToken:(id)arg2 type:(long long)arg3 ;
-(void)setApnsTokenData:(NSData *)arg1 ;
-(void)setApnsToken:(NSString *)arg1 ;
-(void)setNormalizedAPNSToken:(id)arg1 forType:(long long)arg2 ;
-(NSString *)defaultFCMToken;
-(BOOL)isProductionApp;
-(void)logAPNSConfigurationError:(id)arg1 ;
-(void)deleteTokenWithAuthorizedEntity:(id)arg1 scope:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)getIDWithHandler:(/*^block*/id)arg1 ;
-(void)deleteIDWithHandler:(/*^block*/id)arg1 ;
-(void)didCompleteConfigure;
-(void)setFcmSenderID:(NSString *)arg1 ;
-(void)setFcmAppID:(NSString *)arg1 ;
-(long long)retryCountForCheckinRefresh;
-(void)setRetryCountForCheckinRefresh:(long long)arg1 ;
-(void)dealloc;
-(FIRInstanceIDConfig *)config;
-(void)setConfig:(FIRInstanceIDConfig *)arg1 ;
-(id)token;
-(void)stopAllRequests;
-(NSString *)apnsToken;
-(id)initWithConfig:(id)arg1 ;
@end
