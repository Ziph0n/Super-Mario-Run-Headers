/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 16, 2016 at 1:28:32 PM Central European Standard Time
* Operating System: Version 9.3.2 (Build 13F69)
* Image Source: /var/containers/Bundle/Application/DF2FE387-EFC2-4765-9E85-C2CDC49533B4/rb_12_01_16:02:52.app/Super Mario Run
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBUnityUtility : NSObject
+(void)sendMessageToUnity:(id)arg1 userData:(id)arg2 requestId:(int)arg3 ;
+(void)sendErrorToUnity:(id)arg1 error:(id)arg2 requestId:(int)arg3 ;
+(void)sendCancelToUnity:(id)arg1 requestId:(int)arg2 ;
+(id)stringFromCString:(const char*)arg1 ;
+(void)sendErrorToUnity:(id)arg1 errorMessage:(id)arg2 requestId:(int)arg3 ;
+(unsigned long long)gameRequestActionTypeFromString:(id)arg1 ;
+(unsigned long long)gameRequestFilterFromString:(id)arg1 ;
+(id)getUserDataFromAccessToken:(id)arg1 ;
+(id)appLinkDataFromUrl:(id)arg1 ;
+(id)dictionaryFromKeys:(const char**)arg1 values:(const char**)arg2 length:(int)arg3 ;
@end

