/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 16, 2016 at 1:28:32 PM Central European Standard Time
* Operating System: Version 9.3.2 (Build 13F69)
* Image Source: /var/containers/Bundle/Application/DF2FE387-EFC2-4765-9E85-C2CDC49533B4/rb_12_01_16:02:52.app/Super Mario Run
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSData;

@interface FIRAPropertyFilter : NSObject {

	int _audienceID;
	int _filterID;
	NSString* _propertyName;
	NSData* _data;

}

@property (nonatomic,readonly) int audienceID;                       //@synthesize audienceID=_audienceID - In the implementation block
@property (nonatomic,readonly) int filterID;                         //@synthesize filterID=_filterID - In the implementation block
@property (nonatomic,readonly) NSString * propertyName;              //@synthesize propertyName=_propertyName - In the implementation block
@property (nonatomic,readonly) NSData * data;                        //@synthesize data=_data - In the implementation block
-(int)audienceID;
-(id)initWithAudienceID:(int)arg1 filterID:(int)arg2 propertyName:(id)arg3 data:(id)arg4 ;
-(NSString *)propertyName;
-(NSData *)data;
-(int)filterID;
@end
