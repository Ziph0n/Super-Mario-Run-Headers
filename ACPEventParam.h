/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 16, 2016 at 1:28:32 PM Central European Standard Time
* Operating System: Version 9.3.2 (Build 13F69)
* Image Source: /var/containers/Bundle/Application/DF2FE387-EFC2-4765-9E85-C2CDC49533B4/rb_12_01_16:02:52.app/Super Mario Run
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Super Mario Run/GSDK_PBGeneratedMessage.h>

@class NSString;

@interface ACPEventParam : GSDK_PBGeneratedMessage

@property (assign,nonatomic) BOOL hasName; 
@property (nonatomic,retain) NSString * name; 
@property (assign,nonatomic) BOOL hasStringValue; 
@property (nonatomic,retain) NSString * stringValue; 
@property (assign,nonatomic) BOOL hasIntValue; 
@property (assign,nonatomic) long long intValue; 
@property (assign,nonatomic) BOOL hasFloatValue; 
@property (assign,nonatomic) float floatValue; 
@property (assign,nonatomic) BOOL hasDoubleValue; 
@property (assign,nonatomic) double doubleValue; 
+(id)descriptor;
-(long long)intValue;
-(BOOL)hasIntValue;
-(NSString *)stringValue;
-(BOOL)hasStringValue;
-(NSString *)name;
-(id)setIntValue:(long long)arg1 ;
-(id)setStringValue:(NSString *)arg1 ;
-(id)setName:(NSString *)arg1 ;
@end

