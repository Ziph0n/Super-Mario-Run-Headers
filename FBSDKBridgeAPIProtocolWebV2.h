/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 16, 2016 at 1:28:33 PM Central European Standard Time
* Operating System: Version 9.3.2 (Build 13F69)
* Image Source: /var/containers/Bundle/Application/DF2FE387-EFC2-4765-9E85-C2CDC49533B4/rb_12_01_16:02:52.app/Super Mario Run
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Super Mario Run/FBSDKBridgeAPIProtocol.h>

@class FBSDKBridgeAPIProtocolNativeV1, NSString;

@interface FBSDKBridgeAPIProtocolWebV2 : NSObject <FBSDKBridgeAPIProtocol> {

	FBSDKBridgeAPIProtocolNativeV1* _nativeProtocol;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)requestURLWithActionID:(id)arg1 scheme:(id)arg2 methodName:(id)arg3 methodVersion:(id)arg4 parameters:(id)arg5 error:(id*)arg6 ;
-(id)_redirectURLWithActionID:(id)arg1 methodName:(id)arg2 error:(id*)arg3 ;
-(id)_requestURLForDialogConfiguration:(id)arg1 error:(id*)arg2 ;
-(id)responseParametersForActionID:(id)arg1 queryParameters:(id)arg2 cancelled:(BOOL*)arg3 error:(id*)arg4 ;
-(id)init;
@end

