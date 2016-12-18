/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 16, 2016 at 1:28:32 PM Central European Standard Time
* Operating System: Version 9.3.2 (Build 13F69)
* Image Source: /var/containers/Bundle/Application/DF2FE387-EFC2-4765-9E85-C2CDC49533B4/rb_12_01_16:02:52.app/Super Mario Run
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/NSCoding.h>

@class NSString, NSMutableDictionary, NSDictionary;

@interface ADJActivityPackage : NSObject <NSCoding> {

	int _activityKind;
	NSString* _path;
	NSString* _clientSdk;
	NSMutableDictionary* _parameters;
	long long _retries;
	NSDictionary* _callbackParameters;
	NSDictionary* _partnerParameters;
	NSString* _suffix;

}

@property (nonatomic,copy) NSString * path;                                  //@synthesize path=_path - In the implementation block
@property (nonatomic,copy) NSString * clientSdk;                             //@synthesize clientSdk=_clientSdk - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * parameters;               //@synthesize parameters=_parameters - In the implementation block
@property (assign,nonatomic) long long retries;                              //@synthesize retries=_retries - In the implementation block
@property (nonatomic,retain) NSDictionary * callbackParameters;              //@synthesize callbackParameters=_callbackParameters - In the implementation block
@property (nonatomic,retain) NSDictionary * partnerParameters;               //@synthesize partnerParameters=_partnerParameters - In the implementation block
@property (assign,nonatomic) int activityKind;                               //@synthesize activityKind=_activityKind - In the implementation block
@property (nonatomic,copy) NSString * suffix;                                //@synthesize suffix=_suffix - In the implementation block
-(NSDictionary *)callbackParameters;
-(NSDictionary *)partnerParameters;
-(void)setCallbackParameters:(NSDictionary *)arg1 ;
-(void)setPartnerParameters:(NSDictionary *)arg1 ;
-(id)successMessage;
-(long long)getRetries;
-(long long)increaseRetries;
-(void)setClientSdk:(NSString *)arg1 ;
-(NSString *)clientSdk;
-(id)extendedString;
-(int)activityKind;
-(void)setActivityKind:(int)arg1 ;
-(long long)retries;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSString *)path;
-(void)setPath:(NSString *)arg1 ;
-(NSMutableDictionary *)parameters;
-(void)setParameters:(NSMutableDictionary *)arg1 ;
-(void)setRetries:(long long)arg1 ;
-(void)setSuffix:(NSString *)arg1 ;
-(NSString *)suffix;
-(id)failureMessage;
@end
