/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 16, 2016 at 1:28:32 PM Central European Standard Time
* Operating System: Version 9.3.2 (Build 13F69)
* Image Source: /var/containers/Bundle/Application/DF2FE387-EFC2-4765-9E85-C2CDC49533B4/rb_12_01_16:02:52.app/Super Mario Run
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSNumber, NSDictionary;

@interface NPFMission : NSObject {

	BOOL _completed;
	NSString* _missionId;
	NSString* _missionKey;
	NSString* _title;
	NSString* _detail;
	long long _pointAmount;
	NSNumber* _timesCompleted;
	long long _totalSteps;
	NSNumber* _currentSteps;
	NSDictionary* _availableGifts;

}

@property (nonatomic,copy) NSString * missionId;                       //@synthesize missionId=_missionId - In the implementation block
@property (nonatomic,copy) NSString * missionKey;                      //@synthesize missionKey=_missionKey - In the implementation block
@property (nonatomic,copy) NSString * title;                           //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * detail;                          //@synthesize detail=_detail - In the implementation block
@property (assign,nonatomic) long long pointAmount;                    //@synthesize pointAmount=_pointAmount - In the implementation block
@property (assign,nonatomic) BOOL completed;                           //@synthesize completed=_completed - In the implementation block
@property (nonatomic,copy) NSNumber * timesCompleted;                  //@synthesize timesCompleted=_timesCompleted - In the implementation block
@property (assign,nonatomic) long long totalSteps;                     //@synthesize totalSteps=_totalSteps - In the implementation block
@property (nonatomic,copy) NSNumber * currentSteps;                    //@synthesize currentSteps=_currentSteps - In the implementation block
@property (nonatomic,copy) NSDictionary * availableGifts;              //@synthesize availableGifts=_availableGifts - In the implementation block
+(void)getAll:(id)arg1 withCallback:(/*^block*/id)arg2 ;
+(void)getMissionStatus:(id)arg1 withCallback:(/*^block*/id)arg2 ;
+(void)getMissions:(id)arg1 withCallback:(/*^block*/id)arg2 ;
-(void)setMissionId:(NSString *)arg1 ;
-(void)setMissionKey:(NSString *)arg1 ;
-(void)setPointAmount:(long long)arg1 ;
-(void)setTotalSteps:(long long)arg1 ;
-(void)setTimesCompleted:(NSNumber *)arg1 ;
-(void)setCurrentSteps:(NSNumber *)arg1 ;
-(void)setAvailableGifts:(NSDictionary *)arg1 ;
-(NSDictionary *)availableGifts;
-(void)receiveAvailableGifts:(/*^block*/id)arg1 ;
-(NSString *)missionId;
-(NSString *)missionKey;
-(long long)pointAmount;
-(NSNumber *)timesCompleted;
-(long long)totalSteps;
-(NSNumber *)currentSteps;
-(BOOL)completed;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setCompleted:(BOOL)arg1 ;
-(void)setDetail:(NSString *)arg1 ;
-(NSString *)detail;
@end

