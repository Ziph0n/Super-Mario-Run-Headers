/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 16, 2016 at 1:28:32 PM Central European Standard Time
* Operating System: Version 9.3.2 (Build 13F69)
* Image Source: /var/containers/Bundle/Application/DF2FE387-EFC2-4765-9E85-C2CDC49533B4/rb_12_01_16:02:52.app/Super Mario Run
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSData;

@interface GTMStringEncoding : NSObject {

	NSData* charMapData_;
	char* charMap_;
	int reverseCharMap_[128];
	int shift_;
	int mask_;
	BOOL doPad_;
	char paddingChar_;
	int padLen_;

}
+(id)stringEncodingWithString:(id)arg1 ;
+(id)rfc4648Base64WebsafeStringEncoding;
+(id)binaryStringEncoding;
+(id)hexStringEncoding;
+(id)rfc4648Base32StringEncoding;
+(id)rfc4648Base32HexStringEncoding;
+(id)crockfordBase32StringEncoding;
+(id)rfc4648Base64StringEncoding;
-(void)setPaddingChar:(char)arg1 ;
-(void)setDoPad:(BOOL)arg1 ;
-(BOOL)doPad;
-(id)encode:(id)arg1 ;
-(void)addDecodeSynonyms:(id)arg1 ;
-(id)encode:(id)arg1 error:(id*)arg2 ;
-(id)encodeString:(id)arg1 error:(id*)arg2 ;
-(id)decode:(id)arg1 error:(id*)arg2 ;
-(id)stringByDecoding:(id)arg1 error:(id*)arg2 ;
-(void)ignoreCharacters:(id)arg1 ;
-(id)stringByDecoding:(id)arg1 ;
-(id)decode:(id)arg1 ;
-(id)encodeString:(id)arg1 ;
-(void)dealloc;
-(id)description;
-(id)initWithString:(id)arg1 ;
@end
