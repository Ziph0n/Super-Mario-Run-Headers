/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 16, 2016 at 1:28:32 PM Central European Standard Time
* Operating System: Version 9.3.2 (Build 13F69)
* Image Source: /var/containers/Bundle/Application/DF2FE387-EFC2-4765-9E85-C2CDC49533B4/rb_12_01_16:02:52.app/Super Mario Run
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMapTable, DisplayConnection;

@interface DisplayManager : NSObject {

	NSMapTable* _displayConnection;
	DisplayConnection* _mainDisplay;
	unsigned long long displayCount;

}

@property (nonatomic,readonly) DisplayConnection * mainDisplay;              //@synthesize mainDisplay=_mainDisplay - In the implementation block
@property (nonatomic,readonly) unsigned long long displayCount; 
+(id)Instance;
+(void)Initialize;
-(void)endFrameRendering;
-(void)registerScreen:(id)arg1 ;
-(void)enumerateDisplaysWithBlock:(/*^block*/id)arg1 ;
-(void)updateDisplayListInUnity;
-(unsigned long long)displayCount;
-(BOOL)displayAvailable:(id)arg1 ;
-(void)startFrameRendering;
-(id)init;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(DisplayConnection *)mainDisplay;
-(id)display:(id)arg1 ;
-(void)present;
-(void)screenDidConnect:(id)arg1 ;
-(void)screenDidDisconnect:(id)arg1 ;
@end
