/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 16, 2016 at 1:28:33 PM Central European Standard Time
* Operating System: Version 9.3.2 (Build 13F69)
* Image Source: /var/containers/Bundle/Application/DF2FE387-EFC2-4765-9E85-C2CDC49533B4/rb_12_01_16:02:52.app/Super Mario Run
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString;

@interface FIRMessagingD2SInfo : NSObject {

	int _streamId;
	NSString* _d2sID;

}

@property (assign,nonatomic) int streamId;                  //@synthesize streamId=_streamId - In the implementation block
@property (nonatomic,retain) NSString * d2sID;              //@synthesize d2sID=_d2sID - In the implementation block
-(int)streamId;
-(NSString *)d2sID;
-(id)initWithStreamId:(int)arg1 d2sId:(id)arg2 ;
-(void)setStreamId:(int)arg1 ;
-(void)setD2sID:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
@end

