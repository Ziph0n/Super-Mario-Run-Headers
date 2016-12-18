/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 16, 2016 at 1:28:32 PM Central European Standard Time
* Operating System: Version 9.3.2 (Build 13F69)
* Image Source: /var/containers/Bundle/Application/DF2FE387-EFC2-4765-9E85-C2CDC49533B4/rb_12_01_16:02:52.app/Super Mario Run
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Super Mario Run/ADJPackageHandler.h>

@protocol ADJPackageHandler
@required
-(void)teardown:(BOOL)arg1;
-(void)addPackage:(id)arg1;
-(void)sendFirstPackage;
-(void)pauseSending;
-(void)resumeSending;
-(void)updatePackages:(id)arg1;
-(id)initWithActivityHandler:(id)arg1 startsSending:(BOOL)arg2;
-(void)closeFirstPackage:(id)arg1 activityPackage:(id)arg2;
-(void)sendNextPackage:(id)arg1;

@end


@protocol OS_dispatch_queue, OS_dispatch_semaphore, ADJRequestHandler, ADJActivityHandler, ADJLogger;
@class NSObject, NSMutableArray, ADJBackoffStrategy;

@interface ADJPackageHandler : NSObject <ADJPackageHandler> {

	BOOL _paused;
	NSObject*<OS_dispatch_queue> _internalQueue;
	NSObject*<OS_dispatch_semaphore> _sendingSemaphore;
	id<ADJRequestHandler> _requestHandler;
	NSMutableArray* _packageQueue;
	ADJBackoffStrategy* _backoffStrategy;
	id<ADJActivityHandler> _activityHandler;
	id<ADJLogger> _logger;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> internalQueue;                     //@synthesize internalQueue=_internalQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_semaphore> sendingSemaphore;              //@synthesize sendingSemaphore=_sendingSemaphore - In the implementation block
@property (nonatomic,retain) id<ADJRequestHandler> requestHandler;                           //@synthesize requestHandler=_requestHandler - In the implementation block
@property (nonatomic,retain) NSMutableArray * packageQueue;                                  //@synthesize packageQueue=_packageQueue - In the implementation block
@property (nonatomic,retain) ADJBackoffStrategy * backoffStrategy;                           //@synthesize backoffStrategy=_backoffStrategy - In the implementation block
@property (assign,nonatomic) BOOL paused;                                                    //@synthesize paused=_paused - In the implementation block
@property (assign,nonatomic,__weak) id<ADJActivityHandler> activityHandler;                  //@synthesize activityHandler=_activityHandler - In the implementation block
@property (assign,nonatomic,__weak) id<ADJLogger> logger;                                    //@synthesize logger=_logger - In the implementation block
+(id)handlerWithActivityHandler:(id)arg1 startsSending:(BOOL)arg2 ;
-(void)teardown:(BOOL)arg1 ;
-(void)addPackage:(id)arg1 ;
-(void)sendFirstPackage;
-(void)pauseSending;
-(void)resumeSending;
-(void)updatePackages:(id)arg1 ;
-(id)initWithActivityHandler:(id)arg1 startsSending:(BOOL)arg2 ;
-(void)setBackoffStrategy:(ADJBackoffStrategy *)arg1 ;
-(void)initI:(id)arg1 activityHandler:(id)arg2 startsSending:(BOOL)arg3 ;
-(void)addI:(id)arg1 package:(id)arg2 ;
-(void)sendFirstI:(id)arg1 ;
-(void)sendNextI:(id)arg1 ;
-(NSObject*<OS_dispatch_semaphore>)sendingSemaphore;
-(ADJBackoffStrategy *)backoffStrategy;
-(void)updatePackagesI:(id)arg1 sessionParameters:(id)arg2 ;
-(void)teardownPackageQueueS:(BOOL)arg1 ;
-(void)setSendingSemaphore:(NSObject*<OS_dispatch_semaphore>)arg1 ;
-(void)readPackageQueueI:(id)arg1 ;
-(NSMutableArray *)packageQueue;
-(void)writePackageQueueS:(id)arg1 ;
-(id)packageQueueFilename;
-(void)setPackageQueue:(NSMutableArray *)arg1 ;
-(void)closeFirstPackage:(id)arg1 activityPackage:(id)arg2 ;
-(void)sendNextPackage:(id)arg1 ;
-(void)dealloc;
-(void)setPaused:(BOOL)arg1 ;
-(BOOL)paused;
-(void)setActivityHandler:(id<ADJActivityHandler>)arg1 ;
-(id<ADJActivityHandler>)activityHandler;
-(id<ADJLogger>)logger;
-(void)setLogger:(id<ADJLogger>)arg1 ;
-(void)setRequestHandler:(id<ADJRequestHandler>)arg1 ;
-(id<ADJRequestHandler>)requestHandler;
-(NSObject*<OS_dispatch_queue>)internalQueue;
-(void)setInternalQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end
