/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 16, 2016 at 1:28:32 PM Central European Standard Time
* Operating System: Version 9.3.2 (Build 13F69)
* Image Source: /var/containers/Bundle/Application/DF2FE387-EFC2-4765-9E85-C2CDC49533B4/rb_12_01_16:02:52.app/Super Mario Run
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSDictionary, NSNumber;

@interface NPFReward : NSObject {

	BOOL _limited;
	NSString* _rewardId;
	NSString* _title;
	NSString* _detail;
	NSString* _imageURL;
	NSString* _linkURL;
	NSDictionary* _variations;
	long long _pointAmount;
	NSNumber* _endsAt;
	NSNumber* _totalTimesExchanged;
	NSNumber* _currentPeriodEndsAt;
	NSNumber* _currentPeriodTimesExchanged;
	NSNumber* _currentPeriodMaxExchanged;

}

@property (nonatomic,copy) NSString * rewardId;                                 //@synthesize rewardId=_rewardId - In the implementation block
@property (nonatomic,copy) NSString * title;                                    //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSString * detail;                                   //@synthesize detail=_detail - In the implementation block
@property (nonatomic,copy) NSString * imageURL;                                 //@synthesize imageURL=_imageURL - In the implementation block
@property (nonatomic,copy) NSString * linkURL;                                  //@synthesize linkURL=_linkURL - In the implementation block
@property (nonatomic,copy) NSDictionary * variations;                           //@synthesize variations=_variations - In the implementation block
@property (assign,nonatomic) long long pointAmount;                             //@synthesize pointAmount=_pointAmount - In the implementation block
@property (nonatomic,copy) NSNumber * endsAt;                                   //@synthesize endsAt=_endsAt - In the implementation block
@property (nonatomic,copy) NSNumber * totalTimesExchanged;                      //@synthesize totalTimesExchanged=_totalTimesExchanged - In the implementation block
@property (nonatomic,copy) NSNumber * currentPeriodEndsAt;                      //@synthesize currentPeriodEndsAt=_currentPeriodEndsAt - In the implementation block
@property (nonatomic,copy) NSNumber * currentPeriodTimesExchanged;              //@synthesize currentPeriodTimesExchanged=_currentPeriodTimesExchanged - In the implementation block
@property (nonatomic,copy) NSNumber * currentPeriodMaxExchanged;                //@synthesize currentPeriodMaxExchanged=_currentPeriodMaxExchanged - In the implementation block
@property (assign,nonatomic) BOOL limited;                                      //@synthesize limited=_limited - In the implementation block
+(void)getRewardStatus:(id)arg1 withCallback:(/*^block*/id)arg2 ;
+(void)getReward:(id)arg1 withCallback:(/*^block*/id)arg2 ;
+(void)getAll:(id)arg1 withCallback:(/*^block*/id)arg2 ;
-(void)setRewardId:(NSString *)arg1 ;
-(void)setEndsAt:(NSNumber *)arg1 ;
-(void)setTotalTimesExchanged:(NSNumber *)arg1 ;
-(void)setCurrentPeriodEndsAt:(NSNumber *)arg1 ;
-(void)setCurrentPeriodTimesExchanged:(NSNumber *)arg1 ;
-(void)setCurrentPeriodMaxExchanged:(NSNumber *)arg1 ;
-(void)setPointAmount:(long long)arg1 ;
-(long long)pointAmount;
-(void)exchangePoint:(id)arg1 withCallback:(/*^block*/id)arg2 ;
-(NSNumber *)currentPeriodEndsAt;
-(NSNumber *)currentPeriodMaxExchanged;
-(NSNumber *)currentPeriodTimesExchanged;
-(NSNumber *)endsAt;
-(NSString *)rewardId;
-(NSNumber *)totalTimesExchanged;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)setDetail:(NSString *)arg1 ;
-(NSDictionary *)variations;
-(void)setVariations:(NSDictionary *)arg1 ;
-(void)setLimited:(BOOL)arg1 ;
-(BOOL)limited;
-(NSString *)linkURL;
-(void)setLinkURL:(NSString *)arg1 ;
-(void)setImageURL:(NSString *)arg1 ;
-(NSString *)imageURL;
-(NSString *)detail;
@end
