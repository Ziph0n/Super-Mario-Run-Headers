/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 16, 2016 at 1:28:32 PM Central European Standard Time
* Operating System: Version 9.3.2 (Build 13F69)
* Image Source: /var/containers/Bundle/Application/DF2FE387-EFC2-4765-9E85-C2CDC49533B4/rb_12_01_16:02:52.app/Super Mario Run
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Super Mario Run/Super Mario Run-Structs.h>
@interface GetVCBundle : NSObject {

	/*^block*/id _callback;

}

@property (nonatomic,copy) id callback;              //@synthesize callback=_callback - In the implementation block
+(id)allocWithZone:(NSZone*)arg1 ;
+(id)sharedManager;
-(void)reset:(id)arg1 withEerror:(id)arg2 ;
-(id)init;
-(void)execute:(/*^block*/id)arg1 ;
-(id)callback;
-(void)setCallback:(id)arg1 ;
@end
