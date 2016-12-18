/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 16, 2016 at 1:28:32 PM Central European Standard Time
* Operating System: Version 9.3.2 (Build 13F69)
* Image Source: /var/containers/Bundle/Application/DF2FE387-EFC2-4765-9E85-C2CDC49533B4/rb_12_01_16:02:52.app/Super Mario Run
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FIRADatabase;

@interface FIRAAudience : NSObject {

	FIRADatabase* _database;

}
+(BOOL)isFilterResult:(id)arg1 trueForFilterID:(int)arg2 ;
+(id)updatedFilterResultWithFilterID:(int)arg1 audienceID:(int)arg2 currentFilterResult:(id)arg3 newEvaluationResult:(id)arg4 ;
+(BOOL)isValidACPAudience:(id)arg1 usedAudienceIDs:(id)arg2 error:(id*)arg3 ;
-(BOOL)maybeDeleteStaleFilterResults:(id)arg1 ;
-(BOOL)evaluateFiltersForUserProperty:(id)arg1 ;
-(BOOL)evaluateFiltersForEvent:(id)arg1 eventAggregates:(id)arg2 ;
-(BOOL)updateACPAudiences:(id)arg1 ;
-(BOOL)resultsForBundling:(id*)arg1 ;
-(id)initWithDatabase:(id)arg1 ;
@end

