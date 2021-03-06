/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 16, 2016 at 1:28:32 PM Central European Standard Time
* Operating System: Version 9.3.2 (Build 13F69)
* Image Source: /var/containers/Bundle/Application/DF2FE387-EFC2-4765-9E85-C2CDC49533B4/rb_12_01_16:02:52.app/Super Mario Run
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Super Mario Run/Super Mario Run-Structs.h>
@class NSString, NPFNintendoAccount;

@interface NPFBaaSUser : NSObject {

	BOOL _personalAnalytics;
	BOOL _personalNotification;
	int _gender;
	NSString* _userId;
	NSString* _idToken;
	NSString* _accessToken;
	NSString* _deviceAccount;
	NSString* _devicePassword;
	NSString* _nickname;
	NSString* _country;
	long long _birthdayYear;
	long long _birthdayMonth;
	long long _birthdayDay;
	NPFNintendoAccount* _nintendoAccount;
	long long _createdAt;
	long long _expiresTime;

}

@property (nonatomic,retain) NSString * userId;                                 //@synthesize userId=_userId - In the implementation block
@property (nonatomic,retain) NSString * idToken;                                //@synthesize idToken=_idToken - In the implementation block
@property (nonatomic,retain) NSString * accessToken;                            //@synthesize accessToken=_accessToken - In the implementation block
@property (nonatomic,retain) NSString * deviceAccount;                          //@synthesize deviceAccount=_deviceAccount - In the implementation block
@property (nonatomic,retain) NSString * devicePassword;                         //@synthesize devicePassword=_devicePassword - In the implementation block
@property (nonatomic,retain) NPFNintendoAccount * nintendoAccount;              //@synthesize nintendoAccount=_nintendoAccount - In the implementation block
@property (assign,nonatomic) long long createdAt;                               //@synthesize createdAt=_createdAt - In the implementation block
@property (assign,nonatomic) long long expiresTime;                             //@synthesize expiresTime=_expiresTime - In the implementation block
@property (nonatomic,retain) NSString * nickname;                               //@synthesize nickname=_nickname - In the implementation block
@property (nonatomic,retain) NSString * country;                                //@synthesize country=_country - In the implementation block
@property (assign,nonatomic) int gender;                                        //@synthesize gender=_gender - In the implementation block
@property (assign,nonatomic) long long birthdayYear;                            //@synthesize birthdayYear=_birthdayYear - In the implementation block
@property (assign,nonatomic) long long birthdayMonth;                           //@synthesize birthdayMonth=_birthdayMonth - In the implementation block
@property (assign,nonatomic) long long birthdayDay;                             //@synthesize birthdayDay=_birthdayDay - In the implementation block
@property (assign,nonatomic) BOOL personalAnalytics;                            //@synthesize personalAnalytics=_personalAnalytics - In the implementation block
@property (assign,nonatomic) BOOL personalNotification;                         //@synthesize personalNotification=_personalNotification - In the implementation block
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)sharedManager;
-(NSString *)idToken;
-(NPFNintendoAccount *)nintendoAccount;
-(void)setIdToken:(NSString *)arg1 ;
-(void)setDeviceAccount:(NSString *)arg1 ;
-(void)setDevicePassword:(NSString *)arg1 ;
-(void)setBirthdayYear:(long long)arg1 ;
-(void)setBirthdayMonth:(long long)arg1 ;
-(void)setBirthdayDay:(long long)arg1 ;
-(void)setNintendoAccount:(NPFNintendoAccount *)arg1 ;
-(void)setPersonalAnalytics:(BOOL)arg1 ;
-(void)setPersonalNotification:(BOOL)arg1 ;
-(void)updateUserObject:(id)arg1 withNintendoAccount:(id)arg2 ;
-(long long)birthdayYear;
-(long long)birthdayMonth;
-(long long)birthdayDay;
-(BOOL)personalAnalytics;
-(BOOL)personalNotification;
-(NSString *)devicePassword;
-(void)linkNintendoAccount:(id)arg1 andCallback:(/*^block*/id)arg2 ;
-(void)switchByNintendoAccount:(id)arg1 withProfileSource:(id)arg2 andCallback:(/*^block*/id)arg3 ;
-(NSString *)deviceAccount;
-(long long)expiresTime;
-(void)setExpiresTime:(long long)arg1 ;
-(id)init;
-(void)reset;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)save:(/*^block*/id)arg1 ;
-(void)setCountry:(NSString *)arg1 ;
-(NSString *)country;
-(int)gender;
-(void)setGender:(int)arg1 ;
-(void)setAccessToken:(NSString *)arg1 ;
-(long long)createdAt;
-(NSString *)nickname;
-(void)setNickname:(NSString *)arg1 ;
-(void)setUserId:(NSString *)arg1 ;
-(NSString *)userId;
-(void)setCreatedAt:(long long)arg1 ;
-(NSString *)accessToken;
@end

