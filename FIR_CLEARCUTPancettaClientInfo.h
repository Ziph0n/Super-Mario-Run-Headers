/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 16, 2016 at 1:28:33 PM Central European Standard Time
* Operating System: Version 9.3.2 (Build 13F69)
* Image Source: /var/containers/Bundle/Application/DF2FE387-EFC2-4765-9E85-C2CDC49533B4/rb_12_01_16:02:52.app/Super Mario Run
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Super Mario Run/GSDK_PBGeneratedMessage.h>

@class NSString;

@interface FIR_CLEARCUTPancettaClientInfo : GSDK_PBGeneratedMessage

@property (assign,nonatomic) BOOL hasDeviceId; 
@property (nonatomic,retain) NSString * deviceId; 
@property (assign,nonatomic) BOOL hasOs; 
@property (assign,nonatomic) int os; 
@property (assign,nonatomic) BOOL hasAppId; 
@property (nonatomic,retain) NSString * appId; 
@property (assign,nonatomic) BOOL hasAppVersion; 
@property (nonatomic,retain) NSString * appVersion; 
@property (assign,nonatomic) BOOL hasMccMnc; 
@property (nonatomic,retain) NSString * mccMnc; 
+(id)descriptor;
@end
