/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 16, 2016 at 1:28:33 PM Central European Standard Time
* Operating System: Version 9.3.2 (Build 13F69)
* Image Source: /var/containers/Bundle/Application/DF2FE387-EFC2-4765-9E85-C2CDC49533B4/rb_12_01_16:02:52.app/Super Mario Run
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Super Mario Run/Super Mario Run-Structs.h>
@class NSString, GSDK_PBArray;

@interface GSDK_PBEnumDescriptor : NSObject {

	NSString* name_;
	GSDK_PBArray* values_;
	/*function pointer*/void* enumVerifier_;
	const char* extraTextFormatInfo_;

}

@property (nonatomic,retain,readonly) NSString * name; 
@property (nonatomic,retain,readonly) GSDK_PBArray * values; 
@property (nonatomic,readonly) /*function pointer*/void* enumVerifier; 
+(id)allocDescriptorForName:(id)arg1 values:(PBMessageEnumValueDescription*)arg2 valueCount:(unsigned long long)arg3 enumVerifier:(/*function pointer*/void*)arg4 ;
+(id)descriptorForName:(const char*)arg1 ;
+(id)allocDescriptorForName:(id)arg1 values:(PBMessageEnumValueDescription*)arg2 valueCount:(unsigned long long)arg3 enumVerifier:(/*function pointer*/void*)arg4 extraTextFormatInfo:(const char*)arg5 ;
-(/*function pointer*/void*)enumVerifier;
-(id)initWithName:(id)arg1 values:(id)arg2 enumVerifier:(/*function pointer*/void*)arg3 ;
-(id)textFormatNameForEnumValue:(int)arg1 ;
-(id)enumValueWithNumber:(int)arg1 ;
-(id)enumValueWithName:(id)arg1 ;
-(id)textFormatNameForValue:(int)arg1 ;
-(void)dealloc;
-(NSString *)name;
-(GSDK_PBArray *)values;
@end

