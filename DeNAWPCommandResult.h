/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 16, 2016 at 1:28:33 PM Central European Standard Time
* Operating System: Version 9.3.2 (Build 13F69)
* Image Source: /var/containers/Bundle/Application/DF2FE387-EFC2-4765-9E85-C2CDC49533B4/rb_12_01_16:02:52.app/Super Mario Run
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface DeNAWPCommandResult : NSObject {

	int retCode;
	NSString* retValue;

}

@property (assign) int retCode; 
@property (nonatomic,copy) NSString * retValue; 
-(void)setRetValue:(NSString *)arg1 ;
-(void)setRetCode:(int)arg1 ;
-(int)retCode;
-(NSString *)retValue;
-(void)dealloc;
-(id)init;
-(id)initWithInt:(int)arg1 ;
@end
