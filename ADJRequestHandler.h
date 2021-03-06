/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 16, 2016 at 1:28:32 PM Central European Standard Time
* Operating System: Version 9.3.2 (Build 13F69)
* Image Source: /var/containers/Bundle/Application/DF2FE387-EFC2-4765-9E85-C2CDC49533B4/rb_12_01_16:02:52.app/Super Mario Run
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Super Mario Run/ADJRequestHandler.h>

@protocol ADJRequestHandler
@required
-(id)initWithPackageHandler:(id)arg1;
-(void)sendPackage:(id)arg1 queueSize:(unsigned long long)arg2;
-(void)teardown;

@end


@protocol OS_dispatch_queue, ADJPackageHandler, ADJLogger;
@class NSObject, NSURL;

@interface ADJRequestHandler : NSObject <ADJRequestHandler> {

	NSObject*<OS_dispatch_queue> _internalQueue;
	id<ADJPackageHandler> _packageHandler;
	id<ADJLogger> _logger;
	NSURL* _baseUrl;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> internalQueue;               //@synthesize internalQueue=_internalQueue - In the implementation block
@property (assign,nonatomic,__weak) id<ADJPackageHandler> packageHandler;              //@synthesize packageHandler=_packageHandler - In the implementation block
@property (assign,nonatomic,__weak) id<ADJLogger> logger;                              //@synthesize logger=_logger - In the implementation block
@property (nonatomic,retain) NSURL * baseUrl;                                          //@synthesize baseUrl=_baseUrl - In the implementation block
+(id)handlerWithPackageHandler:(id)arg1 ;
-(id<ADJPackageHandler>)packageHandler;
-(void)setPackageHandler:(id<ADJPackageHandler>)arg1 ;
-(id)initWithPackageHandler:(id)arg1 ;
-(void)setBaseUrl:(NSURL *)arg1 ;
-(void)sendI:(id)arg1 activityPackage:(id)arg2 queueSize:(unsigned long long)arg3 ;
-(void)sendPackage:(id)arg1 queueSize:(unsigned long long)arg2 ;
-(NSURL *)baseUrl;
-(id<ADJLogger>)logger;
-(void)setLogger:(id<ADJLogger>)arg1 ;
-(NSObject*<OS_dispatch_queue>)internalQueue;
-(void)teardown;
-(void)setInternalQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

