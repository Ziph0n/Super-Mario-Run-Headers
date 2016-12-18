/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 16, 2016 at 1:28:32 PM Central European Standard Time
* Operating System: Version 9.3.2 (Build 13F69)
* Image Source: /var/containers/Bundle/Application/DF2FE387-EFC2-4765-9E85-C2CDC49533B4/rb_12_01_16:02:52.app/Super Mario Run
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Super Mario Run/Super Mario Run-Structs.h>
@class NSString;

@interface NPFCredentials : NSObject {

	NSString* _deviceAccount;
	NSString* _devicePassword;
	NSString* _sessionToken;
	NSString* _idToken;
	NSString* _userId;
	NSString* _nuuEvent;

}

@property (nonatomic,retain) NSString * deviceAccount;               //@synthesize deviceAccount=_deviceAccount - In the implementation block
@property (nonatomic,retain) NSString * devicePassword;              //@synthesize devicePassword=_devicePassword - In the implementation block
@property (nonatomic,retain) NSString * userId;                      //@synthesize userId=_userId - In the implementation block
@property (nonatomic,retain) NSString * nuuEvent;                    //@synthesize nuuEvent=_nuuEvent - In the implementation block
@property (nonatomic,retain) NSString * sessionToken;                //@synthesize sessionToken=_sessionToken - In the implementation block
@property (nonatomic,retain) NSString * idToken;                     //@synthesize idToken=_idToken - In the implementation block
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)sharedManager;
-(void)saveDeviceAccount:(id)arg1 withPassword:(id)arg2 ;
-(NSString *)idToken;
-(void)setIdToken:(NSString *)arg1 ;
-(void)setDeviceAccount:(NSString *)arg1 ;
-(void)setDevicePassword:(NSString *)arg1 ;
-(void)saveSessionToken:(id)arg1 ;
-(void)saveIdToken:(id)arg1 ;
-(NSString *)devicePassword;
-(NSString *)deviceAccount;
-(void)setNuuEvent:(NSString *)arg1 ;
-(NSString *)nuuEvent;
-(NSString *)sessionToken;
-(void)setSessionToken:(NSString *)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setUserId:(NSString *)arg1 ;
-(NSString *)userId;
@end

