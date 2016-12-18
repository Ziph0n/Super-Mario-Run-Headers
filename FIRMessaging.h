/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 16, 2016 at 1:28:33 PM Central European Standard Time
* Operating System: Version 9.3.2 (Build 13F69)
* Image Source: /var/containers/Bundle/Application/DF2FE387-EFC2-4765-9E85-C2CDC49533B4/rb_12_01_16:02:52.app/Super Mario Run
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Super Mario Run/FIRMessagingClientDelegate.h>

@class NSString, NSData, FIRMessagingClient, GIPReachability, FIRMessagingDataMessageManager, FIRMessagingPubSub, FIRMessagingRmqManager, FIRMessagingReceiver, FIRMessagingSyncMessageManager, NSMutableArray, NSMutableSet;

@interface FIRMessaging : NSObject <FIRMessagingClientDelegate> {

	BOOL _isClientSetup;
	NSString* _fcmSenderID;
	NSData* _apnsTokenData;
	NSString* _apnsToken;
	NSString* _defaultFcmToken;
	FIRMessagingClient* _client;
	GIPReachability* _reachability;
	FIRMessagingDataMessageManager* _dataMessageManager;
	FIRMessagingPubSub* _pubsub;
	FIRMessagingRmqManager* _rmq2Manager;
	FIRMessagingReceiver* _receiver;
	FIRMessagingSyncMessageManager* _syncMessageManager;
	NSMutableArray* _debugEvents;
	NSMutableSet* _loggedMessageIDs;

}

@property (nonatomic,copy) NSString * fcmSenderID;                                               //@synthesize fcmSenderID=_fcmSenderID - In the implementation block
@property (nonatomic,retain) NSData * apnsTokenData;                                             //@synthesize apnsTokenData=_apnsTokenData - In the implementation block
@property (nonatomic,retain) NSString * apnsToken;                                               //@synthesize apnsToken=_apnsToken - In the implementation block
@property (nonatomic,retain) NSString * defaultFcmToken;                                         //@synthesize defaultFcmToken=_defaultFcmToken - In the implementation block
@property (assign,nonatomic) BOOL isClientSetup;                                                 //@synthesize isClientSetup=_isClientSetup - In the implementation block
@property (nonatomic,retain) FIRMessagingClient * client;                                        //@synthesize client=_client - In the implementation block
@property (nonatomic,retain) GIPReachability * reachability;                                     //@synthesize reachability=_reachability - In the implementation block
@property (nonatomic,retain) FIRMessagingDataMessageManager * dataMessageManager;                //@synthesize dataMessageManager=_dataMessageManager - In the implementation block
@property (nonatomic,retain) FIRMessagingPubSub * pubsub;                                        //@synthesize pubsub=_pubsub - In the implementation block
@property (nonatomic,retain) FIRMessagingRmqManager * rmq2Manager;                               //@synthesize rmq2Manager=_rmq2Manager - In the implementation block
@property (nonatomic,retain) FIRMessagingReceiver * receiver;                                    //@synthesize receiver=_receiver - In the implementation block
@property (nonatomic,retain) FIRMessagingSyncMessageManager * syncMessageManager;                //@synthesize syncMessageManager=_syncMessageManager - In the implementation block
@property (nonatomic,readonly) NSMutableArray * debugEvents;                                     //@synthesize debugEvents=_debugEvents - In the implementation block
@property (nonatomic,retain) NSMutableSet * loggedMessageIDs;                                    //@synthesize loggedMessageIDs=_loggedMessageIDs - In the implementation block
@property (assign,nonatomic,__weak) id<FIRMessagingDelegate> remoteMessageDelegate; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)didReceiveConfigureSDKNotification:(id)arg1 ;
+(void)load;
+(BOOL)hasApplicationSupportSubDirectory:(id)arg1 ;
+(BOOL)createApplicationSupportSubDirectory:(id)arg1 ;
+(id)pathForApplicationSupportSubDirectory:(id)arg1 ;
+(BOOL)isAPNSSyncMessage:(id)arg1 ;
+(id)normalizeTopic:(id)arg1 ;
+(id)createFIRMessagingMessageWithMessage:(id)arg1 to:(id)arg2 withID:(id)arg3 timeToLive:(long long)arg4 delay:(int)arg5 ;
+(id)messaging;
+(void)dumpEvents:(int)arg1 ;
+(id)appManagerLocales;
+(id)appManagerlocalesMap;
+(void)addDebugEvent:(id)arg1 ;
+(void)dumpAllEvents;
+(id)FIRMessagingSDKVersion;
+(id)FIRMessagingSDKCurrentLocale;
+(id)currentLocale;
-(void)exitApp:(id)arg1 withError:(id)arg2 ;
-(void)configureMessaging:(id)arg1 ;
-(void)startWithConfig:(id)arg1 ;
-(NSString *)fcmSenderID;
-(void)setupLogger:(char)arg1 ;
-(void)setupNotificationListeners;
-(NSData *)apnsTokenData;
-(void)setApnsTokenData:(NSData *)arg1 ;
-(void)setApnsToken:(NSString *)arg1 ;
-(void)setFcmSenderID:(NSString *)arg1 ;
-(void)saveLibraryVersion;
-(id)initWithDebugEvents:(int)arg1 ;
-(void)setupReceiverWithConfig:(id)arg1 ;
-(void)setupApplicationSupportSubDirectory;
-(void)setupRmqManager;
-(void)setupClient;
-(void)setupSyncMessageManager;
-(void)setupDataMessageManager;
-(void)setupTopics;
-(void)setIsClientSetup:(BOOL)arg1 ;
-(void)networkStatusChanged;
-(void)didReceiveDefaultFCMToken:(id)arg1 ;
-(void)didReceiveAPNSToken:(id)arg1 ;
-(FIRMessagingRmqManager *)rmq2Manager;
-(FIRMessagingSyncMessageManager *)syncMessageManager;
-(void)setDataMessageManager:(FIRMessagingDataMessageManager *)arg1 ;
-(FIRMessagingDataMessageManager *)dataMessageManager;
-(void)setRmq2Manager:(FIRMessagingRmqManager *)arg1 ;
-(void)setPubsub:(FIRMessagingPubSub *)arg1 ;
-(void)setSyncMessageManager:(FIRMessagingSyncMessageManager *)arg1 ;
-(NSMutableSet *)loggedMessageIDs;
-(void)logAnalyticsForMessage:(id)arg1 ;
-(BOOL)handleContextManagerMessage:(id)arg1 ;
-(NSString *)defaultFcmToken;
-(FIRMessagingPubSub *)pubsub;
-(NSMutableArray *)debugEvents;
-(void)setDefaultFcmToken:(NSString *)arg1 ;
-(void)setAPNSToken:(id)arg1 error:(id)arg2 ;
-(void)setRemoteMessageDelegate:(id<FIRMessagingDelegate>)arg1 ;
-(id<FIRMessagingDelegate>)remoteMessageDelegate;
-(id)appDidReceiveMessage:(id)arg1 ;
-(void)subscribeToTopic:(id)arg1 ;
-(void)unsubscribeFromTopic:(id)arg1 ;
-(void)sendMessage:(id)arg1 to:(id)arg2 withMessageID:(id)arg3 timeToLive:(long long)arg4 ;
-(BOOL)isClientSetup;
-(void)setLoggedMessageIDs:(NSMutableSet *)arg1 ;
-(void)dealloc;
-(void)disconnect;
-(NSString *)apnsToken;
-(void)setClient:(FIRMessagingClient *)arg1 ;
-(char)networkType;
-(void)setReceiver:(FIRMessagingReceiver *)arg1 ;
-(FIRMessagingReceiver *)receiver;
-(void)connectWithCompletion:(/*^block*/id)arg1 ;
-(GIPReachability *)reachability;
-(void)setReachability:(GIPReachability *)arg1 ;
-(void)teardown;
-(FIRMessagingClient *)client;
-(BOOL)isNetworkAvailable;
@end
