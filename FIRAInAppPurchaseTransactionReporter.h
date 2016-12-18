/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 16, 2016 at 1:28:32 PM Central European Standard Time
* Operating System: Version 9.3.2 (Build 13F69)
* Image Source: /var/containers/Bundle/Application/DF2FE387-EFC2-4765-9E85-C2CDC49533B4/rb_12_01_16:02:52.app/Super Mario Run
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Super Mario Run/SKPaymentTransactionObserver.h>

@class NSString;

@interface FIRAInAppPurchaseTransactionReporter : NSObject <SKPaymentTransactionObserver> {

	BOOL _reportingEnabled;
	BOOL _reportingWasDisabled;

}

@property (nonatomic,readonly) BOOL reportingWasDisabled;              //@synthesize reportingWasDisabled=_reportingWasDisabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)deviceIDData;
+(id)matchOWithData:(id)arg1 atIndex:(int)arg2 ;
+(id)matchBWithData:(id)arg1 atIndex:(int)arg2 ;
+(id)matchHWithData:(id)arg1 atIndex:(int)arg2 ;
+(id)matchIWithData:(id)arg1 atIndex:(int)arg2 ;
+(id)matchByteSequence:(id)arg1 withData:(id)arg2 atIndex:(int)arg3 ;
+(BOOL)parseData:(id)arg1 ;
+(id)sharedInstance;
-(void)disableReporting;
-(void)reportTransactionsFromArray:(id)arg1 ;
-(void)enableReporting;
-(BOOL)reportingWasDisabled;
-(void)dealloc;
-(void)paymentQueue:(id)arg1 updatedTransactions:(id)arg2 ;
@end
