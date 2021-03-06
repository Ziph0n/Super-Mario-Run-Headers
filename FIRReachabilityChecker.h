/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 16, 2016 at 1:28:33 PM Central European Standard Time
* Operating System: Version 9.3.2 (Build 13F69)
* Image Source: /var/containers/Bundle/Application/DF2FE387-EFC2-4765-9E85-C2CDC49533B4/rb_12_01_16:02:52.app/Super Mario Run
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FIRReachabilityDelegate, FIRNetworkLoggerDelegate;
#import <Super Mario Run/Super Mario Run-Structs.h>
@class NSString;

@interface FIRReachabilityChecker : NSObject {

	int reachabilityStatus_;
	const FIRReachabilityApi* reachabilityApi_;
	SCNetworkReachabilityRef reachability_;
	NSString* host_;
	id<FIRReachabilityDelegate> reachabilityDelegate_;
	id<FIRNetworkLoggerDelegate> loggerDelegate_;

}

@property (assign,nonatomic) const FIRReachabilityApi* reachabilityApi; 
@property (assign,nonatomic) int reachabilityStatus; 
@property (nonatomic,copy) NSString * host; 
@property (assign,nonatomic) SCNetworkReachabilityRef reachability; 
@property (assign,nonatomic,__weak) id<FIRReachabilityDelegate> reachabilityDelegate; 
@property (assign,nonatomic,__weak) id<FIRNetworkLoggerDelegate> loggerDelegate; 
@property (nonatomic,readonly) BOOL isActive; 
-(void)setLoggerDelegate:(id<FIRNetworkLoggerDelegate>)arg1 ;
-(void)setReachabilityDelegate:(id<FIRReachabilityDelegate>)arg1 ;
-(id)initWithReachabilityDelegate:(id)arg1 loggerDelegate:(id)arg2 withHost:(id)arg3 ;
-(id<FIRReachabilityDelegate>)reachabilityDelegate;
-(id<FIRNetworkLoggerDelegate>)loggerDelegate;
-(int)statusForFlags:(unsigned)arg1 ;
-(const FIRReachabilityApi*)reachabilityApi;
-(void)setReachabilityApi:(const FIRReachabilityApi*)arg1 ;
-(void)reachabilityFlagsChanged:(unsigned)arg1 ;
-(void)dealloc;
-(BOOL)isActive;
-(void)stop;
-(BOOL)start;
-(NSString *)host;
-(void)setHost:(NSString *)arg1 ;
-(void)setReachabilityStatus:(int)arg1 ;
-(int)reachabilityStatus;
-(SCNetworkReachabilityRef)reachability;
-(void)setReachability:(SCNetworkReachabilityRef)arg1 ;
@end

