/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 16, 2016 at 1:28:32 PM Central European Standard Time
* Operating System: Version 9.3.2 (Build 13F69)
* Image Source: /var/containers/Bundle/Application/DF2FE387-EFC2-4765-9E85-C2CDC49533B4/rb_12_01_16:02:52.app/Super Mario Run
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface UnityPLCrashMachExceptionPort : NSObject {

	unsigned _mask;
	unsigned _port;
	int _behavior;
	int _flavor;

}

@property (nonatomic,readonly) unsigned server_port;              //@synthesize port=_port - In the implementation block
@property (nonatomic,readonly) unsigned mask;                     //@synthesize mask=_mask - In the implementation block
@property (nonatomic,readonly) int behavior;                      //@synthesize behavior=_behavior - In the implementation block
@property (nonatomic,readonly) int flavor;                        //@synthesize flavor=_flavor - In the implementation block
+(id)exceptionPortsForTask:(unsigned)arg1 mask:(unsigned)arg2 error:(id*)arg3 ;
+(id)exceptionPortsForThread:(unsigned)arg1 mask:(unsigned)arg2 error:(id*)arg3 ;
-(id)initWithServerPort:(unsigned)arg1 mask:(unsigned)arg2 behavior:(int)arg3 flavor:(int)arg4 ;
-(BOOL)registerForTask:(unsigned)arg1 previousPortSet:(id*)arg2 error:(id*)arg3 ;
-(BOOL)registerForThread:(unsigned)arg1 previousPortSet:(id*)arg2 error:(id*)arg3 ;
-(unsigned)server_port;
-(void)dealloc;
-(unsigned)mask;
-(int)behavior;
-(int)flavor;
@end
