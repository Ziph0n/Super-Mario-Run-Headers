/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 16, 2016 at 1:28:32 PM Central European Standard Time
* Operating System: Version 9.3.2 (Build 13F69)
* Image Source: /var/containers/Bundle/Application/DF2FE387-EFC2-4765-9E85-C2CDC49533B4/rb_12_01_16:02:52.app/Super Mario Run
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSProxy.h>

@interface FIRAAppDelegateProxy : NSProxy
+(BOOL)isAppDelegateProxyEnabled;
+(void)fulfillRequiredMethodsForAppDelegateClass:(Class)arg1 ;
+(void)addInstanceMethodWithDestinationSelector:(SEL)arg1 withImplementationFromSourceSelector:(SEL)arg2 fromClass:(Class)arg3 toClass:(Class)arg4 ;
+(void)createSubclassWithObject:(id)arg1 ;
+(void)addInstanceMethodWithSelector:(SEL)arg1 fromClass:(Class)arg2 toClass:(Class)arg3 ;
+(/*function pointer*/void*)implementationOfMethodSelector:(SEL)arg1 fromClass:(Class)arg2 ;
+(void)proxyOriginalDelegate:(id)arg1 ;
+(void)load;
-(BOOL)defaultApplication:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4 ;
-(BOOL)defaultApplication:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(/*^block*/id)arg3 ;
-(void)defaultApplication:(id)arg1 handleEventsForBackgroundURLSession:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)fakeDescription;
-(BOOL)application:(id)arg1 openURL:(id)arg2 sourceApplication:(id)arg3 annotation:(id)arg4 ;
-(BOOL)application:(id)arg1 openURL:(id)arg2 options:(id)arg3 ;
-(void)application:(id)arg1 handleEventsForBackgroundURLSession:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)application:(id)arg1 continueUserActivity:(id)arg2 restorationHandler:(/*^block*/id)arg3 ;
@end
