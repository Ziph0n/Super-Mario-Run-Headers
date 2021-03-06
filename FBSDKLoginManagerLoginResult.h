/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 16, 2016 at 1:28:33 PM Central European Standard Time
* Operating System: Version 9.3.2 (Build 13F69)
* Image Source: /var/containers/Bundle/Application/DF2FE387-EFC2-4765-9E85-C2CDC49533B4/rb_12_01_16:02:52.app/Super Mario Run
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, FBSDKAccessToken, NSSet, NSDictionary;

@interface FBSDKLoginManagerLoginResult : NSObject {

	NSMutableDictionary* _mutableLoggingExtras;
	BOOL _isCancelled;
	BOOL _isSkipped;
	FBSDKAccessToken* _token;
	NSSet* _grantedPermissions;
	NSSet* _declinedPermissions;

}

@property (nonatomic,readonly) NSDictionary * loggingExtras; 
@property (assign,nonatomic) BOOL isSkipped;                              //@synthesize isSkipped=_isSkipped - In the implementation block
@property (nonatomic,copy) FBSDKAccessToken * token;                      //@synthesize token=_token - In the implementation block
@property (nonatomic,readonly) BOOL isCancelled;                          //@synthesize isCancelled=_isCancelled - In the implementation block
@property (nonatomic,copy) NSSet * grantedPermissions;                    //@synthesize grantedPermissions=_grantedPermissions - In the implementation block
@property (nonatomic,copy) NSSet * declinedPermissions;                   //@synthesize declinedPermissions=_declinedPermissions - In the implementation block
-(NSSet *)declinedPermissions;
-(void)setDeclinedPermissions:(NSSet *)arg1 ;
-(id)initWithToken:(id)arg1 isCancelled:(BOOL)arg2 grantedPermissions:(id)arg3 declinedPermissions:(id)arg4 ;
-(void)addLoggingExtra:(id)arg1 forKey:(id)arg2 ;
-(void)setIsSkipped:(BOOL)arg1 ;
-(NSDictionary *)loggingExtras;
-(BOOL)isSkipped;
-(id)init;
-(BOOL)isCancelled;
-(FBSDKAccessToken *)token;
-(void)setToken:(FBSDKAccessToken *)arg1 ;
-(NSSet *)grantedPermissions;
-(void)setGrantedPermissions:(NSSet *)arg1 ;
@end

