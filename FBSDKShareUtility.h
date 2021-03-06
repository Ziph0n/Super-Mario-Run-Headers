/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 16, 2016 at 1:28:33 PM Central European Standard Time
* Operating System: Version 9.3.2 (Build 13F69)
* Image Source: /var/containers/Bundle/Application/DF2FE387-EFC2-4765-9E85-C2CDC49533B4/rb_12_01_16:02:52.app/Super Mario Run
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface FBSDKShareUtility : NSObject
+(void)assertCollection:(id)arg1 ofClass:(id)arg2 name:(id)arg3 ;
+(void)testShareContent:(id)arg1 containsMedia:(BOOL*)arg2 containsPhotos:(BOOL*)arg3 containsVideos:(BOOL*)arg4 ;
+(BOOL)buildWebShareContent:(id)arg1 methodName:(id*)arg2 parameters:(id*)arg3 error:(id*)arg4 ;
+(id)feedShareDictionaryForContent:(id)arg1 ;
+(id)parametersForShareContent:(id)arg1 shouldFailOnDataError:(BOOL)arg2 ;
+(BOOL)validateShareContent:(id)arg1 error:(id*)arg2 ;
+(BOOL)validateAssetLibraryURLWithShareVideoContent:(id)arg1 name:(id)arg2 error:(id*)arg3 ;
+(BOOL)validateAssetLibraryURLsWithShareMediaContent:(id)arg1 name:(id)arg2 error:(id*)arg3 ;
+(BOOL)shareMediaContentContainsPhotosAndVideos:(id)arg1 ;
+(BOOL)validateShareMediaContent:(id)arg1 error:(id*)arg2 ;
+(id)hashtagStringFromHashtag:(id)arg1 ;
+(void)assertOpenGraphValues:(id)arg1 requireKeyNamespace:(BOOL)arg2 ;
+(id)convertOpenGraphValues:(id)arg1 ;
+(void)assertOpenGraphKey:(id)arg1 requireNamespace:(BOOL)arg2 ;
+(void)assertOpenGraphValue:(id)arg1 ;
+(BOOL)validateGameRequestContent:(id)arg1 error:(id*)arg2 ;
+(BOOL)_isOpenGraphValue:(id)arg1 ;
+(id)_convertOpenGraphValueContainer:(id)arg1 requireNamespace:(BOOL)arg2 ;
+(id)convertOpenGraphValue:(id)arg1 ;
+(void)_addToParameters:(id)arg1 forShareContent:(id)arg2 ;
+(void)_addToParameters:(id)arg1 forShareLinkContent:(id)arg2 ;
+(void)_addToParameters:(id)arg1 forSharePhotoContent:(id)arg2 ;
+(void)_addToParameters:(id)arg1 forShareVideoContent:(id)arg2 ;
+(void)_addToParameters:(id)arg1 forShareOpenGraphContent:(id)arg2 ;
+(void)_testObject:(id)arg1 containsMedia:(BOOL*)arg2 containsPhotos:(BOOL*)arg3 containsVideos:(BOOL*)arg4 ;
+(void)_testOpenGraphValueContainer:(id)arg1 containsMedia:(BOOL*)arg2 containsPhotos:(BOOL*)arg3 containsVideos:(BOOL*)arg4 ;
+(BOOL)_validateRequiredValue:(id)arg1 name:(id)arg2 error:(id*)arg3 ;
+(BOOL)_validateNetworkURL:(id)arg1 name:(id)arg2 error:(id*)arg3 ;
+(BOOL)validatePromoCodeWithError:(id)arg1 error:(id*)arg2 ;
+(BOOL)_validateAssetLibraryVideoURL:(id)arg1 name:(id)arg2 error:(id*)arg3 ;
+(BOOL)_validateArgumentWithName:(id)arg1 value:(unsigned long long)arg2 isIn:(id)arg3 error:(id*)arg4 ;
+(BOOL)validateShareLinkContent:(id)arg1 error:(id*)arg2 ;
+(BOOL)validateSharePhotoContent:(id)arg1 error:(id*)arg2 ;
+(BOOL)validateShareVideoContent:(id)arg1 error:(id*)arg2 ;
+(BOOL)validateShareOpenGraphContent:(id)arg1 error:(id*)arg2 ;
+(BOOL)_validateArray:(id)arg1 minCount:(unsigned long long)arg2 maxCount:(unsigned long long)arg3 name:(id)arg4 error:(id*)arg5 ;
+(id)getOpenGraphNameAndNamespaceFromFullName:(id)arg1 namespace:(id*)arg2 ;
+(id)_convertPhoto:(id)arg1 ;
+(id)_convertObject:(id)arg1 ;
+(void)assertCollection:(id)arg1 ofClassStrings:(id)arg2 name:(id)arg3 ;
+(BOOL)validateAppInviteContent:(id)arg1 error:(id*)arg2 ;
+(BOOL)_validateFileURL:(id)arg1 name:(id)arg2 error:(id*)arg3 ;
-(id)init;
@end

