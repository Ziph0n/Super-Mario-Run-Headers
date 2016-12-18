/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 16, 2016 at 1:28:32 PM Central European Standard Time
* Operating System: Version 9.3.2 (Build 13F69)
* Image Source: /var/containers/Bundle/Application/DF2FE387-EFC2-4765-9E85-C2CDC49533B4/rb_12_01_16:02:52.app/Super Mario Run
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FIRADailyCounts : NSObject {

	int _day;
	int _conversionsCount;
	int _allEventsCount;
	int _publicEventsCount;
	int _errorEventsCount;
	int _realtimeCount;

}

@property (nonatomic,readonly) int day;                            //@synthesize day=_day - In the implementation block
@property (nonatomic,readonly) int conversionsCount;               //@synthesize conversionsCount=_conversionsCount - In the implementation block
@property (nonatomic,readonly) int allEventsCount;                 //@synthesize allEventsCount=_allEventsCount - In the implementation block
@property (nonatomic,readonly) int publicEventsCount;              //@synthesize publicEventsCount=_publicEventsCount - In the implementation block
@property (nonatomic,readonly) int errorEventsCount;               //@synthesize errorEventsCount=_errorEventsCount - In the implementation block
@property (nonatomic,readonly) int realtimeCount;                  //@synthesize realtimeCount=_realtimeCount - In the implementation block
-(void)incrementCountsForCurrentDay:(int)arg1 isPublicEvent:(BOOL)arg2 isConversion:(BOOL)arg3 ;
-(void)incrementErrorEventsCountForCurrentDay:(int)arg1 ;
-(void)incrementRealtimeCountsForCurrentDay:(int)arg1 ;
-(void)decrementAllEventsCount;
-(id)initWithDay:(int)arg1 conversionsCount:(int)arg2 allEventsCount:(int)arg3 publicEventsCount:(int)arg4 errorEventsCount:(int)arg5 realtimeCount:(int)arg6 ;
-(int)conversionsCount;
-(int)allEventsCount;
-(int)publicEventsCount;
-(int)errorEventsCount;
-(int)realtimeCount;
-(int)day;
@end

