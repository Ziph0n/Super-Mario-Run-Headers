/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 16, 2016 at 1:28:32 PM Central European Standard Time
* Operating System: Version 9.3.2 (Build 13F69)
* Image Source: /var/containers/Bundle/Application/DF2FE387-EFC2-4765-9E85-C2CDC49533B4/rb_12_01_16:02:52.app/Super Mario Run
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface NPFBaaSAuth : NSObject {

	/*^block*/id _callback;
	NSString* _applicationAuthHeader;

}

@property (nonatomic,copy) id callback;                                   //@synthesize callback=_callback - In the implementation block
@property (nonatomic,copy) NSString * applicationAuthHeader;              //@synthesize applicationAuthHeader=_applicationAuthHeader - In the implementation block
+(void)executeBaaSAuth:(id)arg1 withSessionToken:(id)arg2 andCallback:(/*^block*/id)arg3 ;
-(NSString *)applicationAuthHeader;
-(void)setApplicationAuthHeader:(NSString *)arg1 ;
-(id)callback;
-(void)setCallback:(id)arg1 ;
@end

