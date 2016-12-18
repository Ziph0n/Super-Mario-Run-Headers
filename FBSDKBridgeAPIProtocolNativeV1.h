/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 16, 2016 at 1:28:33 PM Central European Standard Time
* Operating System: Version 9.3.2 (Build 13F69)
* Image Source: /var/containers/Bundle/Application/DF2FE387-EFC2-4765-9E85-C2CDC49533B4/rb_12_01_16:02:52.app/Super Mario Run
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Super Mario Run/FBSDKBridgeAPIProtocol.h>

@class NSString, UIPasteboard;

@interface FBSDKBridgeAPIProtocolNativeV1 : NSObject <FBSDKBridgeAPIProtocol> {

	BOOL _includeAppIcon;
	NSString* _appScheme;
	unsigned long long _dataLengthThreshold;
	UIPasteboard* _pasteboard;

}

@property (nonatomic,copy,readonly) NSString * appScheme;                           //@synthesize appScheme=_appScheme - In the implementation block
@property (nonatomic,readonly) unsigned long long dataLengthThreshold;              //@synthesize dataLengthThreshold=_dataLengthThreshold - In the implementation block
@property (nonatomic,readonly) BOOL includeAppIcon;                                 //@synthesize includeAppIcon=_includeAppIcon - In the implementation block
@property (nonatomic,readonly) UIPasteboard * pasteboard;                           //@synthesize pasteboard=_pasteboard - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)clearData:(id)arg1 fromPasteboardOnApplicationDidBecomeActive:(id)arg2 ;
-(id)initWithAppScheme:(id)arg1 pasteboard:(id)arg2 dataLengthThreshold:(unsigned long long)arg3 includeAppIcon:(BOOL)arg4 ;
-(id)requestURLWithActionID:(id)arg1 scheme:(id)arg2 methodName:(id)arg3 methodVersion:(id)arg4 parameters:(id)arg5 error:(id*)arg6 ;
-(id)responseParametersForActionID:(id)arg1 queryParameters:(id)arg2 cancelled:(BOOL*)arg3 error:(id*)arg4 ;
-(id)initWithAppScheme:(id)arg1 ;
-(id)_JSONStringForObject:(id)arg1 enablePasteboard:(BOOL)arg2 error:(id*)arg3 ;
-(id)_bridgeParametersWithActionID:(id)arg1 error:(id*)arg2 ;
-(NSString *)appScheme;
-(id)_errorWithDictionary:(id)arg1 ;
-(id)_appIcon;
-(unsigned long long)dataLengthThreshold;
-(BOOL)includeAppIcon;
-(id)init;
-(UIPasteboard *)pasteboard;
@end

