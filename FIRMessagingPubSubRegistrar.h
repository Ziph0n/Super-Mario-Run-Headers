/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 16, 2016 at 1:28:33 PM Central European Standard Time
* Operating System: Version 9.3.2 (Build 13F69)
* Image Source: /var/containers/Bundle/Application/DF2FE387-EFC2-4765-9E85-C2CDC49533B4/rb_12_01_16:02:52.app/Super Mario Run
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FIRMessagingCheckinService, NSMutableDictionary;

@interface FIRMessagingPubSubRegistrar : NSObject {

	FIRMessagingCheckinService* _checkinService;
	NSMutableDictionary* _pubsubClientsMap;

}

@property (nonatomic,retain) FIRMessagingCheckinService * checkinService;              //@synthesize checkinService=_checkinService - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * pubsubClientsMap;                   //@synthesize pubsubClientsMap=_pubsubClientsMap - In the implementation block
-(FIRMessagingCheckinService *)checkinService;
-(void)setCheckinService:(FIRMessagingCheckinService *)arg1 ;
-(NSMutableDictionary *)pubsubClientsMap;
-(id)createPubsubClientWithTopic:(id)arg1 token:(id)arg2 options:(id)arg3 ;
-(void)addNewPubsubRegistrationClient:(id)arg1 ;
-(id)initWithCheckinService:(id)arg1 ;
-(void)stopAllSubscriptionRequests;
-(void)updateSubscriptionToTopic:(id)arg1 withToken:(id)arg2 options:(id)arg3 shouldDelete:(BOOL)arg4 handler:(/*^block*/id)arg5 ;
-(void)setPubsubClientsMap:(NSMutableDictionary *)arg1 ;
-(id)init;
@end
