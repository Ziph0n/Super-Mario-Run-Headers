/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 16, 2016 at 1:28:32 PM Central European Standard Time
* Operating System: Version 9.3.2 (Build 13F69)
* Image Source: /var/containers/Bundle/Application/DF2FE387-EFC2-4765-9E85-C2CDC49533B4/rb_12_01_16:02:52.app/Super Mario Run
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Super Mario Run/FIRInstanceIDLogFilter.h>

@class NSString;

@interface FIRInstanceIDLogLevelFilter : NSObject <FIRInstanceIDLogFilter> {

	char _level;

}

@property (assign,nonatomic) char level;                            //@synthesize level=_level - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)filterAllowsMessage:(id)arg1 level:(char)arg2 ;
-(void)setLevel:(char)arg1 ;
-(char)level;
-(id)initWithLevel:(char)arg1 ;
@end

