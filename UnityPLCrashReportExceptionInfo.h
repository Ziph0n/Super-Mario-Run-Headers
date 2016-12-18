/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 16, 2016 at 1:28:32 PM Central European Standard Time
* Operating System: Version 9.3.2 (Build 13F69)
* Image Source: /var/containers/Bundle/Application/DF2FE387-EFC2-4765-9E85-C2CDC49533B4/rb_12_01_16:02:52.app/Super Mario Run
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSArray;

@interface UnityPLCrashReportExceptionInfo : NSObject {

	NSString* _name;
	NSString* _reason;
	NSArray* _stackFrames;

}

@property (nonatomic,readonly) NSString * exceptionName;                //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) NSString * exceptionReason;              //@synthesize reason=_reason - In the implementation block
@property (nonatomic,readonly) NSArray * stackFrames;                   //@synthesize stackFrames=_stackFrames - In the implementation block
-(id)initWithExceptionName:(id)arg1 reason:(id)arg2 ;
-(id)initWithExceptionName:(id)arg1 reason:(id)arg2 stackFrames:(id)arg3 ;
-(NSString *)exceptionName;
-(NSString *)exceptionReason;
-(NSArray *)stackFrames;
-(void)dealloc;
@end

