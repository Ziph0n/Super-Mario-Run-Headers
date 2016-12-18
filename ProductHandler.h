/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 16, 2016 at 1:28:32 PM Central European Standard Time
* Operating System: Version 9.3.2 (Build 13F69)
* Image Source: /var/containers/Bundle/Application/DF2FE387-EFC2-4765-9E85-C2CDC49533B4/rb_12_01_16:02:52.app/Super Mario Run
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Super Mario Run/Super Mario Run-Structs.h>
#import <Super Mario Run/SKProductsRequestDelegate.h>

@class NSDictionary, NSString;

@interface ProductHandler : NSObject <SKProductsRequestDelegate> {

	/*^block*/id _callback;
	NSDictionary* _vcBundles;

}

@property (nonatomic,copy) id callback;                             //@synthesize callback=_callback - In the implementation block
@property (nonatomic,copy) NSDictionary * vcBundles;                //@synthesize vcBundles=_vcBundles - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)sharedManager;
-(void)reset:(id)arg1 withEerror:(id)arg2 ;
-(void)startProductsRequest:(id)arg1 withCallback:(/*^block*/id)arg2 ;
-(NSDictionary *)vcBundles;
-(void)setVcBundles:(NSDictionary *)arg1 ;
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)callback;
-(void)setCallback:(id)arg1 ;
-(void)request:(id)arg1 didFailWithError:(id)arg2 ;
-(void)productsRequest:(id)arg1 didReceiveResponse:(id)arg2 ;
@end

