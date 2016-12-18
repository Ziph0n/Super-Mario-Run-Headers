/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 16, 2016 at 1:28:33 PM Central European Standard Time
* Operating System: Version 9.3.2 (Build 13F69)
* Image Source: /var/containers/Bundle/Application/DF2FE387-EFC2-4765-9E85-C2CDC49533B4/rb_12_01_16:02:52.app/Super Mario Run
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FIRMessagingPersistentSyncMessage : NSObject {

	BOOL _apnsReceived;
	BOOL _mcsReceived;
	NSString* _rmqID;
	long long _expirationTime;

}

@property (nonatomic,retain) NSString * rmqID;                      //@synthesize rmqID=_rmqID - In the implementation block
@property (assign,nonatomic) long long expirationTime;              //@synthesize expirationTime=_expirationTime - In the implementation block
@property (assign,nonatomic) BOOL apnsReceived;                     //@synthesize apnsReceived=_apnsReceived - In the implementation block
@property (assign,nonatomic) BOOL mcsReceived;                      //@synthesize mcsReceived=_mcsReceived - In the implementation block
-(NSString *)rmqID;
-(BOOL)mcsReceived;
-(BOOL)apnsReceived;
-(id)initWithRMQID:(id)arg1 expirationTime:(long long)arg2 ;
-(void)setRmqID:(NSString *)arg1 ;
-(void)setApnsReceived:(BOOL)arg1 ;
-(void)setMcsReceived:(BOOL)arg1 ;
-(id)init;
-(id)description;
-(id)debugDescription;
-(long long)expirationTime;
-(void)setExpirationTime:(long long)arg1 ;
@end

