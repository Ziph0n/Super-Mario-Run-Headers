/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 16, 2016 at 1:28:32 PM Central European Standard Time
* Operating System: Version 9.3.2 (Build 13F69)
* Image Source: /var/containers/Bundle/Application/DF2FE387-EFC2-4765-9E85-C2CDC49533B4/rb_12_01_16:02:52.app/Super Mario Run
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface UnityPLCrashReportSymbolInfo : NSObject {

	NSString* _symbolName;
	unsigned long long _startAddress;
	unsigned long long _endAddress;

}

@property (nonatomic,readonly) NSString * symbolName;                        //@synthesize symbolName=_symbolName - In the implementation block
@property (nonatomic,readonly) unsigned long long startAddress;              //@synthesize startAddress=_startAddress - In the implementation block
@property (nonatomic,readonly) unsigned long long endAddress;                //@synthesize endAddress=_endAddress - In the implementation block
-(id)initWithSymbolName:(id)arg1 startAddress:(unsigned long long)arg2 endAddress:(unsigned long long)arg3 ;
-(void)dealloc;
-(unsigned long long)startAddress;
-(unsigned long long)endAddress;
-(NSString *)symbolName;
@end

