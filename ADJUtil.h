/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 16, 2016 at 1:28:32 PM Central European Standard Time
* Operating System: Version 9.3.2 (Build 13F69)
* Image Source: /var/containers/Bundle/Application/DF2FE387-EFC2-4765-9E85-C2CDC49533B4/rb_12_01_16:02:52.app/Super Mario Run
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface ADJUtil : NSObject
+(id)idfa;
+(void)launchInQueue:(id)arg1 selfInject:(id)arg2 block:(/*^block*/id)arg3 ;
+(BOOL)isNull:(id)arg1 ;
+(void)updateUrlSessionConfiguration:(id)arg1 ;
+(void)launchInMainThread:(id)arg1 selector:(SEL)arg2 withObject:(id)arg3 ;
+(void)launchDeepLinkMain:(id)arg1 ;
+(void)launchInMainThread:(/*^block*/id)arg1 ;
+(void)writeObject:(id)arg1 filename:(id)arg2 objectName:(id)arg3 ;
+(id)readObject:(id)arg1 objectName:(id)arg2 class:(Class)arg3 ;
+(id)secondsNumberFormat:(double)arg1 ;
+(BOOL)isValidParameter:(id)arg1 attributeType:(id)arg2 parameterName:(id)arg3 ;
+(void)initializeDateFormat;
+(void)initializeUniversalLinkRegex;
+(void)initializeSecondsNumberFormatter;
+(void)initializeShortUniversalLinkRegex;
+(void)initializeOptionalRedirectRegex;
+(void)initializeUrlSessionConfiguration;
+(BOOL)isNotNull:(id)arg1 ;
+(id)buildJsonDict:(id)arg1 exceptionPtr:(id*)arg2 errorPtr:(id*)arg3 ;
+(id)getFullFilename:(id)arg1 ;
+(void)excludeFromBackup:(id)arg1 ;
+(id)queryString:(id)arg1 queueSize:(unsigned long long)arg2 ;
+(id)formatSeconds1970:(double)arg1 ;
+(id)requestForPackage:(id)arg1 baseUrl:(id)arg2 queueSize:(unsigned long long)arg3 ;
+(void)sendRequest:(id)arg1 prefixErrorMessage:(id)arg2 suffixErrorMessage:(id)arg3 activityPackage:(id)arg4 responseDataHandler:(/*^block*/id)arg5 ;
+(id)clientSdk;
+(void)sendNSURLSessionRequest:(id)arg1 prefixErrorMessage:(id)arg2 suffixErrorMessage:(id)arg3 activityPackage:(id)arg4 responseDataHandler:(/*^block*/id)arg5 ;
+(void)sendNSURLConnectionRequest:(id)arg1 prefixErrorMessage:(id)arg2 suffixErrorMessage:(id)arg3 activityPackage:(id)arg4 responseDataHandler:(/*^block*/id)arg5 ;
+(id)completionHandler:(id)arg1 response:(id)arg2 error:(id)arg3 prefixErrorMessage:(id)arg4 suffixErrorMessage:(id)arg5 activityPackage:(id)arg6 ;
+(id)formatErrorMessage:(id)arg1 systemErrorMessage:(id)arg2 suffixErrorMessage:(id)arg3 ;
+(void)saveJsonResponse:(id)arg1 responseData:(id)arg2 ;
+(id)convertDictionaryValues:(id)arg1 ;
+(id)removeOptionalRedirect:(id)arg1 ;
+(double)randomInRange:(double)arg1 maxRange:(double)arg2 ;
+(id)getFilename:(id)arg1 ;
+(id)baseUrl;
+(id)queryString:(id)arg1 ;
+(void)sendPostRequest:(id)arg1 queueSize:(unsigned long long)arg2 prefixErrorMessage:(id)arg3 suffixErrorMessage:(id)arg4 activityPackage:(id)arg5 responseDataHandler:(/*^block*/id)arg6 ;
+(void)sendRequest:(id)arg1 prefixErrorMessage:(id)arg2 activityPackage:(id)arg3 responseDataHandler:(/*^block*/id)arg4 ;
+(id)convertUniversalLink:(id)arg1 scheme:(id)arg2 ;
+(double)waitingTime:(long long)arg1 backoffStrategy:(id)arg2 ;
+(id)mergeParameters:(id)arg1 source:(id)arg2 parameterName:(id)arg3 ;
+(void)initialize;
+(BOOL)deleteFile:(id)arg1 ;
+(id)formatDate:(id)arg1 ;
@end

