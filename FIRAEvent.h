/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 16, 2016 at 1:28:32 PM Central European Standard Time
* Operating System: Version 9.3.2 (Build 13F69)
* Image Source: /var/containers/Bundle/Application/DF2FE387-EFC2-4765-9E85-C2CDC49533B4/rb_12_01_16:02:52.app/Super Mario Run
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, NSString, NSDictionary, ACPEvent;

@interface FIRAEvent : NSObject {

	NSMutableDictionary* _parameters;
	NSString* _origin;
	NSString* _name;
	double _timestamp;
	double _previousTimestamp;

}

@property (nonatomic,readonly) NSString * origin;                      //@synthesize origin=_origin - In the implementation block
@property (nonatomic,readonly) NSString * name;                        //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) double timestamp;                       //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) double previousTimestamp;               //@synthesize previousTimestamp=_previousTimestamp - In the implementation block
@property (nonatomic,readonly) NSDictionary * parameters;              //@synthesize parameters=_parameters - In the implementation block
@property (assign,nonatomic) BOOL isConversion; 
@property (assign,nonatomic) BOOL isRealtime; 
@property (assign,nonatomic) BOOL isDebug; 
@property (nonatomic,readonly) ACPEvent * protoEvent; 
+(id)normalizedParametersForParameters:(id)arg1 isPublicEvent:(BOOL)arg2 ;
-(id)initWithOrigin:(id)arg1 isPublic:(BOOL)arg2 name:(id)arg3 timestamp:(double)arg4 previousTimestamp:(double)arg5 parameters:(id)arg6 ;
-(id)copyWithPreviousTimestamp:(double)arg1 ;
-(id)copyWithParameters:(id)arg1 ;
-(BOOL)isConversion;
-(void)setIsConversion:(BOOL)arg1 ;
-(BOOL)isRealtime;
-(void)setIsRealtime:(BOOL)arg1 ;
-(BOOL)isDebug;
-(void)setIsDebug:(BOOL)arg1 ;
-(ACPEvent *)protoEvent;
-(double)previousTimestamp;
-(double)timestamp;
-(NSString *)name;
-(NSString *)origin;
-(NSDictionary *)parameters;
@end
