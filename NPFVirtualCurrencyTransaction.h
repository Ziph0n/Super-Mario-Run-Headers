/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 16, 2016 at 1:28:32 PM Central European Standard Time
* Operating System: Version 9.3.2 (Build 13F69)
* Image Source: /var/containers/Bundle/Application/DF2FE387-EFC2-4765-9E85-C2CDC49533B4/rb_12_01_16:02:52.app/Super Mario Run
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface NPFVirtualCurrencyTransaction : NSObject {

	int _state;
	NSString* _orderId;
	NSString* _sku;

}

@property (nonatomic,copy) NSString * orderId;              //@synthesize orderId=_orderId - In the implementation block
@property (nonatomic,copy) NSString * sku;                  //@synthesize sku=_sku - In the implementation block
@property (assign,nonatomic) int state;                     //@synthesize state=_state - In the implementation block
-(NSString *)sku;
-(void)setOrderId:(NSString *)arg1 ;
-(void)setSku:(NSString *)arg1 ;
-(NSString *)orderId;
-(int)state;
-(void)setState:(int)arg1 ;
@end
