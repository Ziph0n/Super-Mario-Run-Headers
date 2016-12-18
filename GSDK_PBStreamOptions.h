/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 16, 2016 at 1:28:33 PM Central European Standard Time
* Operating System: Version 9.3.2 (Build 13F69)
* Image Source: /var/containers/Bundle/Application/DF2FE387-EFC2-4765-9E85-C2CDC49533B4/rb_12_01_16:02:52.app/Super Mario Run
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Super Mario Run/GSDK_PBGeneratedMessage.h>

@class NSString, GSDK_PBMutableArray;

@interface GSDK_PBStreamOptions : GSDK_PBGeneratedMessage

@property (assign,nonatomic) BOOL hasClientInitialTokens; 
@property (assign,nonatomic) long long clientInitialTokens; 
@property (assign,nonatomic) BOOL hasServerInitialTokens; 
@property (assign,nonatomic) long long serverInitialTokens; 
@property (assign,nonatomic) BOOL hasTokenUnit; 
@property (assign,nonatomic) int tokenUnit; 
@property (assign,nonatomic) BOOL hasSecurityLevel; 
@property (assign,nonatomic) int securityLevel; 
@property (assign,nonatomic) BOOL hasSecurityLabel; 
@property (nonatomic,retain) NSString * securityLabel; 
@property (assign,nonatomic) BOOL hasClientLogging; 
@property (assign,nonatomic) int clientLogging; 
@property (assign,nonatomic) BOOL hasServerLogging; 
@property (assign,nonatomic) int serverLogging; 
@property (assign,nonatomic) BOOL hasDeadline; 
@property (assign,nonatomic) double deadline; 
@property (assign,nonatomic) BOOL hasFailFast; 
@property (assign,nonatomic) BOOL failFast; 
@property (assign,nonatomic) BOOL hasEndUserCredsRequested; 
@property (assign,nonatomic) BOOL endUserCredsRequested; 
@property (assign,nonatomic) BOOL hasLogLevel; 
@property (assign,nonatomic) int logLevel; 
@property (assign,nonatomic) BOOL hasDeprecated; 
@property (assign,nonatomic) BOOL deprecated; 
@property (assign,nonatomic) BOOL hasUninterpretedOptionArray; 
@property (nonatomic,retain) GSDK_PBMutableArray * uninterpretedOptionArray; 
+(id)descriptor;
@end

