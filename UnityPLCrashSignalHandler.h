/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 16, 2016 at 1:28:32 PM Central European Standard Time
* Operating System: Version 9.3.2 (Build 13F69)
* Image Source: /var/containers/Bundle/Application/DF2FE387-EFC2-4765-9E85-C2CDC49533B4/rb_12_01_16:02:52.app/Super Mario Run
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Super Mario Run/Super Mario Run-Structs.h>
@interface UnityPLCrashSignalHandler : NSObject {

	darwin_sigaltstack* _sigstk;

}
+(void)resetHandlers;
+(void)initialize;
+(id)sharedHandler;
-(BOOL)registerHandlerWithSignal:(int)arg1 error:(id*)arg2 ;
-(BOOL)registerHandlerForSignal:(int)arg1 callback:(/*function pointer*/void*)arg2 context:(void*)arg3 error:(id*)arg4 ;
-(id)init;
@end

