/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 16, 2016 at 1:28:32 PM Central European Standard Time
* Operating System: Version 9.3.2 (Build 13F69)
* Image Source: /var/containers/Bundle/Application/DF2FE387-EFC2-4765-9E85-C2CDC49533B4/rb_12_01_16:02:52.app/Super Mario Run
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol OS_dispatch_source, ADJLogger;
@class NSObject, NSString;

@interface ADJTimerCycle : NSObject {

	BOOL _suspended;
	NSObject*<OS_dispatch_source> _source;
	id<ADJLogger> _logger;
	NSString* _name;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_source> source;              //@synthesize source=_source - In the implementation block
@property (assign,nonatomic) BOOL suspended;                                    //@synthesize suspended=_suspended - In the implementation block
@property (assign,nonatomic,__weak) id<ADJLogger> logger;                       //@synthesize logger=_logger - In the implementation block
@property (nonatomic,copy) NSString * name;                                     //@synthesize name=_name - In the implementation block
+(id)timerWithBlock:(/*^block*/id)arg1 queue:(id)arg2 startTime:(double)arg3 intervalTime:(double)arg4 name:(id)arg5 ;
-(id)initBlock:(/*^block*/id)arg1 queue:(id)arg2 startTime:(double)arg3 intervalTime:(double)arg4 name:(id)arg5 ;
-(BOOL)suspended;
-(void)cancel;
-(void)dealloc;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(void)setSource:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)source;
-(void)suspend;
-(void)resume;
-(void)setSuspended:(BOOL)arg1 ;
-(id<ADJLogger>)logger;
-(void)setLogger:(id<ADJLogger>)arg1 ;
@end

