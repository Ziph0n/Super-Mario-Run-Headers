/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 16, 2016 at 1:28:32 PM Central European Standard Time
* Operating System: Version 9.3.2 (Build 13F69)
* Image Source: /var/containers/Bundle/Application/DF2FE387-EFC2-4765-9E85-C2CDC49533B4/rb_12_01_16:02:52.app/Super Mario Run
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface NPFViolationType : NSObject {

	NSString* _violationTypeId;
	NSString* _violationTypeName;
	NSString* _violationTypeDescription;
	NSString* _language;

}

@property (nonatomic,copy) NSString * violationTypeId;                       //@synthesize violationTypeId=_violationTypeId - In the implementation block
@property (nonatomic,copy) NSString * violationTypeName;                     //@synthesize violationTypeName=_violationTypeName - In the implementation block
@property (nonatomic,copy) NSString * violationTypeDescription;              //@synthesize violationTypeDescription=_violationTypeDescription - In the implementation block
@property (nonatomic,copy) NSString * language;                              //@synthesize language=_language - In the implementation block
+(void)getAsList:(id)arg1 withCallback:(/*^block*/id)arg2 ;
-(void)setViolationTypeId:(NSString *)arg1 ;
-(void)setViolationTypeName:(NSString *)arg1 ;
-(void)setViolationTypeDescription:(NSString *)arg1 ;
-(NSString *)violationTypeId;
-(NSString *)violationTypeName;
-(NSString *)violationTypeDescription;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
@end
