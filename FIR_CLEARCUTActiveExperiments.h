/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 16, 2016 at 1:28:33 PM Central European Standard Time
* Operating System: Version 9.3.2 (Build 13F69)
* Image Source: /var/containers/Bundle/Application/DF2FE387-EFC2-4765-9E85-C2CDC49533B4/rb_12_01_16:02:52.app/Super Mario Run
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Super Mario Run/GSDK_PBGeneratedMessage.h>

@class GSDK_PBMutableArray;

@interface FIR_CLEARCUTActiveExperiments : GSDK_PBGeneratedMessage

@property (assign,nonatomic) BOOL hasClientAlteringExperimentArray; 
@property (nonatomic,retain) GSDK_PBMutableArray * clientAlteringExperimentArray; 
@property (assign,nonatomic) BOOL hasOtherExperimentArray; 
@property (nonatomic,retain) GSDK_PBMutableArray * otherExperimentArray; 
@property (assign,nonatomic) BOOL hasGwsExperimentArray; 
@property (nonatomic,retain) GSDK_PBMutableArray * gwsExperimentArray; 
@property (assign,nonatomic) BOOL hasPlayExperimentArray; 
@property (nonatomic,retain) GSDK_PBMutableArray * playExperimentArray; 
@property (assign,nonatomic) BOOL hasUnsupportedPlayExperimentArray; 
@property (nonatomic,retain) GSDK_PBMutableArray * unsupportedPlayExperimentArray; 
+(id)descriptor;
@end

