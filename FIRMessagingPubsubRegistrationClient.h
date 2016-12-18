/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 16, 2016 at 1:28:33 PM Central European Standard Time
* Operating System: Version 9.3.2 (Build 13F69)
* Image Source: /var/containers/Bundle/Application/DF2FE387-EFC2-4765-9E85-C2CDC49533B4/rb_12_01_16:02:52.app/Super Mario Run
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary, FIRMessagingCheckinService, NSURLSession, NSURLSessionDataTask;

@interface FIRMessagingPubsubRegistrationClient : NSObject {

	NSString* _token;
	NSString* _topic;
	NSDictionary* _options;
	FIRMessagingCheckinService* _checkin;
	NSURLSession* _session;
	NSURLSessionDataTask* _task;

}

@property (nonatomic,retain) FIRMessagingCheckinService * checkin;              //@synthesize checkin=_checkin - In the implementation block
@property (nonatomic,retain) NSString * token;                                  //@synthesize token=_token - In the implementation block
@property (nonatomic,retain) NSString * topic;                                  //@synthesize topic=_topic - In the implementation block
@property (nonatomic,retain) NSDictionary * options;                            //@synthesize options=_options - In the implementation block
@property (nonatomic,retain) NSURLSession * session;                            //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) NSURLSessionDataTask * task;                       //@synthesize task=_task - In the implementation block
+(id)newSession;
+(id)pubsubRegistrationKeyWithToken:(id)arg1 topic:(id)arg2 options:(id)arg3 ;
-(void)cancelAnyOngoingOperation;
-(BOOL)isSubscriptionInProgress;
-(void)updateSubscriptionWithCompletion:(/*^block*/id)arg1 shouldDelete:(BOOL)arg2 ;
-(id)initWithCheckinService:(id)arg1 token:(id)arg2 topic:(id)arg3 options:(id)arg4 ;
-(void)setCheckin:(FIRMessagingCheckinService *)arg1 ;
-(void)dealloc;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSURLSessionDataTask *)task;
-(void)setOptions:(NSDictionary *)arg1 ;
-(NSDictionary *)options;
-(NSString *)token;
-(void)setToken:(NSString *)arg1 ;
-(void)setTask:(NSURLSessionDataTask *)arg1 ;
-(void)setTopic:(NSString *)arg1 ;
-(NSString *)topic;
-(NSURLSession *)session;
-(void)setSession:(NSURLSession *)arg1 ;
-(FIRMessagingCheckinService *)checkin;
@end

