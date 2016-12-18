/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 16, 2016 at 1:28:33 PM Central European Standard Time
* Operating System: Version 9.3.2 (Build 13F69)
* Image Source: /var/containers/Bundle/Application/DF2FE387-EFC2-4765-9E85-C2CDC49533B4/rb_12_01_16:02:52.app/Super Mario Run
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Super Mario Run/Super Mario Run-Structs.h>
@class NSData;

@interface GSDK_PBCodedInputStream : NSObject {

	NSData* buffer_;
	PBInputBufferState state_;
	int lastTag_;
	unsigned long long recursionDepth_;

}
+(id)streamWithData:(id)arg1 ;
-(void)skipMessage;
-(void)checkLastTagWas:(int)arg1 ;
-(BOOL)skipField:(int)arg1 ;
-(int)readTag;
-(void)readUnknownGroup:(int)arg1 builder:(id)arg2 ;
-(unsigned long long)pushLimit:(unsigned long long)arg1 ;
-(void)popLimit:(unsigned long long)arg1 ;
-(BOOL)readBool;
-(int)readSFixed32;
-(long long)readSFixed64;
-(long long)readSInt64;
-(int)readEnum;
-(void)readGroup:(int)arg1 builder:(id)arg2 extensionRegistry:(id)arg3 ;
-(void)readMessage:(id)arg1 extensionRegistry:(id)arg2 ;
-(unsigned long long)bytesUntilLimit;
-(long long)readInt64;
-(double)readDouble;
-(unsigned)readFixed32;
-(int)readInt32;
-(unsigned long long)readFixed64;
-(void)dealloc;
-(id)initWithData:(id)arg1 ;
-(unsigned long long)position;
-(BOOL)isAtEnd;
-(id)readData;
-(id)readString;
-(float)readFloat;
-(int)readSInt32;
-(unsigned)readUInt32;
-(unsigned long long)readUInt64;
@end

