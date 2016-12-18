/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 16, 2016 at 1:28:32 PM Central European Standard Time
* Operating System: Version 9.3.2 (Build 13F69)
* Image Source: /var/containers/Bundle/Application/DF2FE387-EFC2-4765-9E85-C2CDC49533B4/rb_12_01_16:02:52.app/Super Mario Run
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIAlertViewDelegate.h>

@class NSString, NSDecimalNumber, SKProduct;

@interface NPFVirtualCurrencyBundle : NSObject <UIAlertViewDelegate> {

	NSString* _sku;
	NSString* _title;
	NSDecimalNumber* _price;
	NSString* _priceCode;
	NSString* _displayPrice;
	NSString* _detail;
	NSDecimalNumber* _usdPrice;
	NSString* _virtualCurrencyName;
	long long _amount;
	long long _extraAmount;
	SKProduct* _skProduct;
	/*^block*/id _callback;

}

@property (nonatomic,copy) NSString * sku;                              //@synthesize sku=_sku - In the implementation block
@property (nonatomic,copy) NSString * title;                            //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * price;                     //@synthesize price=_price - In the implementation block
@property (nonatomic,copy) NSString * priceCode;                        //@synthesize priceCode=_priceCode - In the implementation block
@property (nonatomic,copy) NSString * displayPrice;                     //@synthesize displayPrice=_displayPrice - In the implementation block
@property (nonatomic,copy) NSString * detail;                           //@synthesize detail=_detail - In the implementation block
@property (nonatomic,copy) NSDecimalNumber * usdPrice;                  //@synthesize usdPrice=_usdPrice - In the implementation block
@property (nonatomic,copy) NSString * virtualCurrencyName;              //@synthesize virtualCurrencyName=_virtualCurrencyName - In the implementation block
@property (assign,nonatomic) long long amount;                          //@synthesize amount=_amount - In the implementation block
@property (assign,nonatomic) long long extraAmount;                     //@synthesize extraAmount=_extraAmount - In the implementation block
@property (nonatomic,retain) SKProduct * skProduct;                     //@synthesize skProduct=_skProduct - In the implementation block
@property (nonatomic,copy) id callback;                                 //@synthesize callback=_callback - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)getDigest:(id)arg1 andPriceCode:(id)arg2 andPrice:(id)arg3 ;
+(void)sendReceipt:(id)arg1 withOrders:(id)arg2 andCallback:(/*^block*/id)arg3 ;
+(id)makeSHA256Hash:(id)arg1 ;
+(void)getAll:(/*^block*/id)arg1 ;
+(id)getAllCachedProductInfo;
+(void)recoverPurchased:(/*^block*/id)arg1 ;
+(void)checkUnprocessedPurchase:(/*^block*/id)arg1 ;
+(id)createDisplayPrice:(id)arg1 withCode:(id)arg2 ;
-(void)setVirtualCurrencyName:(NSString *)arg1 ;
-(NSString *)virtualCurrencyName;
-(void)reset:(id)arg1 withEerror:(id)arg2 ;
-(void)executePurchase;
-(long long)extraAmount;
-(void)executePurchaseMockYes;
-(void)executePurchaseMockNo;
-(void)executePurchaseMockComplete;
-(NSString *)sku;
-(NSString *)priceCode;
-(SKProduct *)skProduct;
-(void)setSku:(NSString *)arg1 ;
-(void)purchase:(/*^block*/id)arg1 ;
-(void)updateCachedProductInfo;
-(id)getCachedProductInfo:(id)arg1 ;
-(void)setPriceCode:(NSString *)arg1 ;
-(void)setDisplayPrice:(NSString *)arg1 ;
-(NSDecimalNumber *)usdPrice;
-(void)setUsdPrice:(NSDecimalNumber *)arg1 ;
-(void)setExtraAmount:(long long)arg1 ;
-(void)setSkProduct:(SKProduct *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(NSString *)title;
-(void)alertView:(id)arg1 didDismissWithButtonIndex:(long long)arg2 ;
-(void)setDetail:(NSString *)arg1 ;
-(void)setAmount:(long long)arg1 ;
-(long long)amount;
-(id)callback;
-(void)setCallback:(id)arg1 ;
-(NSDecimalNumber *)price;
-(void)setPrice:(NSDecimalNumber *)arg1 ;
-(NSString *)displayPrice;
-(NSString *)detail;
@end
