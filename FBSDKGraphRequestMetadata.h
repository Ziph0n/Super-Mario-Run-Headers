/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 16, 2016 at 1:28:33 PM Central European Standard Time
* Operating System: Version 9.3.2 (Build 13F69)
* Image Source: /var/containers/Bundle/Application/DF2FE387-EFC2-4765-9E85-C2CDC49533B4/rb_12_01_16:02:52.app/Super Mario Run
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class FBSDKGraphRequest, NSDictionary;

@interface FBSDKGraphRequestMetadata : NSObject {

	FBSDKGraphRequest* _request;
	/*^block*/id _completionHandler;
	NSDictionary* _batchParameters;

}

@property (nonatomic,retain) FBSDKGraphRequest * request;               //@synthesize request=_request - In the implementation block
@property (nonatomic,copy) id completionHandler;                        //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,copy) NSDictionary * batchParameters;              //@synthesize batchParameters=_batchParameters - In the implementation block
-(id)initWithRequest:(id)arg1 completionHandler:(/*^block*/id)arg2 batchParameters:(id)arg3 ;
-(NSDictionary *)batchParameters;
-(void)invokeCompletionHandlerForConnection:(id)arg1 withResults:(id)arg2 error:(id)arg3 ;
-(void)setBatchParameters:(NSDictionary *)arg1 ;
-(id)init;
-(id)description;
-(FBSDKGraphRequest *)request;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(void)setRequest:(FBSDKGraphRequest *)arg1 ;
@end

