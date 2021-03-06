/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 16, 2016 at 1:28:33 PM Central European Standard Time
* Operating System: Version 9.3.2 (Build 13F69)
* Image Source: /var/containers/Bundle/Application/DF2FE387-EFC2-4765-9E85-C2CDC49533B4/rb_12_01_16:02:52.app/Super Mario Run
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Super Mario Run/Super Mario Run-Structs.h>
#import <Super Mario Run/FBSDKCopying.h>

@class NSError, FBSDKBridgeAPIRequest, NSDictionary, NSString;

@interface FBSDKBridgeAPIResponse : NSObject <FBSDKCopying> {

	BOOL _cancelled;
	NSError* _error;
	FBSDKBridgeAPIRequest* _request;
	NSDictionary* _responseParameters;

}

@property (getter=isCancelled,nonatomic,readonly) BOOL cancelled;                   //@synthesize cancelled=_cancelled - In the implementation block
@property (nonatomic,copy,readonly) NSError * error;                                //@synthesize error=_error - In the implementation block
@property (nonatomic,copy,readonly) FBSDKBridgeAPIRequest * request;                //@synthesize request=_request - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * responseParameters;              //@synthesize responseParameters=_responseParameters - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)bridgeAPIResponseWithRequest:(id)arg1 error:(id)arg2 ;
+(id)bridgeAPIResponseWithRequest:(id)arg1 responseURL:(id)arg2 sourceApplication:(id)arg3 error:(id*)arg4 ;
+(id)bridgeAPIResponseCancelledWithRequest:(id)arg1 ;
-(id)initWithRequest:(id)arg1 responseParameters:(id)arg2 cancelled:(BOOL)arg3 error:(id)arg4 ;
-(id)init;
-(FBSDKBridgeAPIRequest *)request;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isCancelled;
-(NSDictionary *)responseParameters;
-(NSError *)error;
@end

