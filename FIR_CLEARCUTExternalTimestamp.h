/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 16, 2016 at 1:28:33 PM Central European Standard Time
* Operating System: Version 9.3.2 (Build 13F69)
* Image Source: /var/containers/Bundle/Application/DF2FE387-EFC2-4765-9E85-C2CDC49533B4/rb_12_01_16:02:52.app/Super Mario Run
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Super Mario Run/GSDK_PBGeneratedMessage.h>

@class NSString;

@interface FIR_CLEARCUTExternalTimestamp : GSDK_PBGeneratedMessage

@property (assign,nonatomic) BOOL hasTimeMs; 
@property (assign,nonatomic) long long timeMs; 
@property (assign,nonatomic) BOOL hasUptimeMs; 
@property (assign,nonatomic) long long uptimeMs; 
@property (assign,nonatomic) BOOL hasSource; 
@property (nonatomic,retain) NSString * source; 
+(id)descriptor;
@end

