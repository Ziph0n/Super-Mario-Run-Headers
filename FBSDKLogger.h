/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 16, 2016 at 1:28:33 PM Central European Standard Time
* Operating System: Version 9.3.2 (Build 13F69)
* Image Source: /var/containers/Bundle/Application/DF2FE387-EFC2-4765-9E85-C2CDC49533B4/rb_12_01_16:02:52.app/Super Mario Run
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableString;

@interface FBSDKLogger : NSObject {

	BOOL _isActive;
	unsigned long long _loggerSerialNumber;
	NSString* _loggingBehavior;
	NSMutableString* _internalContents;

}

@property (nonatomic,readonly) NSMutableString * internalContents;                 //@synthesize internalContents=_internalContents - In the implementation block
@property (nonatomic,copy) NSString * contents; 
@property (nonatomic,readonly) unsigned long long loggerSerialNumber;              //@synthesize loggerSerialNumber=_loggerSerialNumber - In the implementation block
@property (nonatomic,copy,readonly) NSString * loggingBehavior;                    //@synthesize loggingBehavior=_loggingBehavior - In the implementation block
@property (nonatomic,readonly) BOOL isActive;                                      //@synthesize isActive=_isActive - In the implementation block
+(void)singleShotLogEntry:(id)arg1 formatString:(id)arg2 ;
+(void)singleShotLogEntry:(id)arg1 logEntry:(id)arg2 ;
+(void)singleShotLogEntry:(id)arg1 timestampTag:(id)arg2 formatString:(id)arg3 ;
+(void)registerCurrentTime:(id)arg1 withTag:(id)arg2 ;
+(unsigned long long)generateSerialNumber;
+(void)registerStringToReplace:(id)arg1 replaceWith:(id)arg2 ;
-(NSMutableString *)internalContents;
-(NSString *)loggingBehavior;
-(id)initWithLoggingBehavior:(id)arg1 ;
-(unsigned long long)loggerSerialNumber;
-(void)emitToNSLog;
-(void)appendKey:(id)arg1 value:(id)arg2 ;
-(BOOL)isActive;
-(void)appendString:(id)arg1 ;
-(void)appendFormat:(id)arg1 ;
-(NSString *)contents;
-(void)setContents:(NSString *)arg1 ;
@end
