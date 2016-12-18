/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 16, 2016 at 1:28:32 PM Central European Standard Time
* Operating System: Version 9.3.2 (Build 13F69)
* Image Source: /var/containers/Bundle/Application/DF2FE387-EFC2-4765-9E85-C2CDC49533B4/rb_12_01_16:02:52.app/Super Mario Run
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface NPFProfanityWord : NSObject {

	int _dictionaryType;
	int _checkStatus;
	NSString* _language;
	NSString* _text;

}

@property (assign,nonatomic) int checkStatus;                 //@synthesize checkStatus=_checkStatus - In the implementation block
@property (nonatomic,copy) NSString * language;               //@synthesize language=_language - In the implementation block
@property (nonatomic,copy) NSString * text;                   //@synthesize text=_text - In the implementation block
@property (assign,nonatomic) int dictionaryType;              //@synthesize dictionaryType=_dictionaryType - In the implementation block
+(void)checkProfanityWord:(id)arg1 withCallback:(/*^block*/id)arg2 ;
-(int)dictionaryType;
-(void)setCheckStatus:(int)arg1 ;
-(void)setDictionaryType:(int)arg1 ;
-(int)checkStatus;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(NSString *)language;
-(void)setLanguage:(NSString *)arg1 ;
@end

