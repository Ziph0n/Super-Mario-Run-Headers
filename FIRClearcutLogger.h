/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 16, 2016 at 1:28:33 PM Central European Standard Time
* Operating System: Version 9.3.2 (Build 13F69)
* Image Source: /var/containers/Bundle/Application/DF2FE387-EFC2-4765-9E85-C2CDC49533B4/rb_12_01_16:02:52.app/Super Mario Run
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Super Mario Run/FIRNetworkReachabilityDelegate.h>

@protocol OS_dispatch_queue, FIRClearcutLoggerDelegate;
@class NSObject, NSString, NSURL, NSMutableDictionary, FIRNetwork, NSMutableArray;

@interface FIRClearcutLogger : NSObject <FIRNetworkReachabilityDelegate> {

	NSObject*<OS_dispatch_queue> _queue;
	BOOL _sendScheduled;
	int _uploadRetriesRemaining;
	NSString* _applicationBuild;
	unsigned long long _maxRequestNumBytes;
	NSString* _installIdentifier;
	NSURL* _serverURL;
	NSString* _zwiebackCookie;
	long long _fetcherCookieStorageMethod;
	id<FIRClearcutLoggerDelegate> _delegate;
	NSString* _logDirectory;
	NSMutableDictionary* _accounts;
	long long _sendDelayMillis;
	FIRNetwork* _network;
	NSMutableArray* _pendingRequests;
	unsigned long long _backgroundTaskId;

}

@property (nonatomic,copy) NSString * logDirectory;                                      //@synthesize logDirectory=_logDirectory - In the implementation block
@property (nonatomic,copy,readonly) NSMutableDictionary * accounts;                      //@synthesize accounts=_accounts - In the implementation block
@property (assign,nonatomic) long long sendDelayMillis;                                  //@synthesize sendDelayMillis=_sendDelayMillis - In the implementation block
@property (assign,nonatomic) int uploadRetriesRemaining;                                 //@synthesize uploadRetriesRemaining=_uploadRetriesRemaining - In the implementation block
@property (assign,nonatomic) BOOL sendScheduled;                                         //@synthesize sendScheduled=_sendScheduled - In the implementation block
@property (nonatomic,retain) FIRNetwork * network;                                       //@synthesize network=_network - In the implementation block
@property (nonatomic,copy,readonly) NSMutableArray * pendingRequests;                    //@synthesize pendingRequests=_pendingRequests - In the implementation block
@property (assign,nonatomic) unsigned long long backgroundTaskId;                        //@synthesize backgroundTaskId=_backgroundTaskId - In the implementation block
@property (copy) NSString * applicationBuild;                                            //@synthesize applicationBuild=_applicationBuild - In the implementation block
@property (assign) unsigned long long maxRequestNumBytes;                                //@synthesize maxRequestNumBytes=_maxRequestNumBytes - In the implementation block
@property (copy) NSString * installIdentifier;                                           //@synthesize installIdentifier=_installIdentifier - In the implementation block
@property (copy) NSURL * serverURL;                                                      //@synthesize serverURL=_serverURL - In the implementation block
@property (copy) NSString * zwiebackCookie;                                              //@synthesize zwiebackCookie=_zwiebackCookie - In the implementation block
@property (assign,nonatomic) long long fetcherCookieStorageMethod;                       //@synthesize fetcherCookieStorageMethod=_fetcherCookieStorageMethod - In the implementation block
@property (assign,nonatomic,__weak) id<FIRClearcutLoggerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)sharedInstance;
-(void)reachabilityDidChange;
-(void)flushWriters;
-(void)scheduleNextSend;
-(void)sendLogsWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)accountDataForAccount:(id)arg1 ;
-(unsigned long long)maxRequestNumBytes;
-(NSString *)applicationBuild;
-(void)setApplicationBuild:(NSString *)arg1 ;
-(NSString *)installIdentifier;
-(NSString *)zwiebackCookie;
-(void)setZwiebackCookie:(NSString *)arg1 ;
-(unsigned long long)backgroundTaskId;
-(void)setBackgroundTaskId:(unsigned long long)arg1 ;
-(void)updatePendingRequests;
-(void)sendNextPendingRequestWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)sendScheduled;
-(void)setSendScheduled:(BOOL)arg1 ;
-(long long)sendDelayMillis;
-(int)uploadRetriesRemaining;
-(id)nextPendingRequest;
-(id)logRequestFromPath:(id)arg1 logSource:(int)arg2 ;
-(void)setUploadRetriesRemaining:(int)arg1 ;
-(void)logEvent:(id)arg1 logSource:(int)arg2 account:(id)arg3 ;
-(void)setMaxRequestNumBytes:(unsigned long long)arg1 ;
-(void)setInstallIdentifier:(NSString *)arg1 ;
-(long long)fetcherCookieStorageMethod;
-(void)setFetcherCookieStorageMethod:(long long)arg1 ;
-(void)setLogDirectory:(NSString *)arg1 ;
-(void)setSendDelayMillis:(long long)arg1 ;
-(void)flushWithCompletionHandler:(/*^block*/id)arg1 ;
-(NSURL *)serverURL;
-(void)setDelegate:(id<FIRClearcutLoggerDelegate>)arg1 ;
-(void)dealloc;
-(id)init;
-(id<FIRClearcutLoggerDelegate>)delegate;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(NSString *)logDirectory;
-(NSMutableDictionary *)accounts;
-(void)setServerURL:(NSURL *)arg1 ;
-(FIRNetwork *)network;
-(void)setNetwork:(FIRNetwork *)arg1 ;
-(NSMutableArray *)pendingRequests;
@end

