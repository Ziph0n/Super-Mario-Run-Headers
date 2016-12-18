/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 16, 2016 at 1:28:33 PM Central European Standard Time
* Operating System: Version 9.3.2 (Build 13F69)
* Image Source: /var/containers/Bundle/Application/DF2FE387-EFC2-4765-9E85-C2CDC49533B4/rb_12_01_16:02:52.app/Super Mario Run
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Super Mario Run/Super Mario Run-Structs.h>
#import <Super Mario Run/FBSDKCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSString, FBSDKErrorConfiguration, NSDate;

@interface FBSDKServerConfiguration : NSObject <FBSDKCopying, NSSecureCoding> {

	NSDictionary* _dialogConfigurations;
	NSDictionary* _dialogFlows;
	BOOL _advertisingIDEnabled;
	BOOL _defaults;
	BOOL _implicitLoggingEnabled;
	BOOL _implicitPurchaseLoggingEnabled;
	BOOL _loginTooltipEnabled;
	BOOL _nativeAuthFlowEnabled;
	BOOL _systemAuthenticationEnabled;
	NSString* _appID;
	NSString* _appName;
	NSString* _defaultShareMode;
	FBSDKErrorConfiguration* _errorConfiguration;
	NSString* _loginTooltipText;
	NSDate* _timestamp;
	double _sessionTimoutInterval;

}

@property (getter=isAdvertisingIDEnabled,nonatomic,readonly) BOOL advertisingIDEnabled;                                    //@synthesize advertisingIDEnabled=_advertisingIDEnabled - In the implementation block
@property (nonatomic,copy,readonly) NSString * appID;                                                                      //@synthesize appID=_appID - In the implementation block
@property (nonatomic,copy,readonly) NSString * appName;                                                                    //@synthesize appName=_appName - In the implementation block
@property (getter=isDefaults,nonatomic,readonly) BOOL defaults;                                                            //@synthesize defaults=_defaults - In the implementation block
@property (nonatomic,copy,readonly) NSString * defaultShareMode;                                                           //@synthesize defaultShareMode=_defaultShareMode - In the implementation block
@property (nonatomic,readonly) FBSDKErrorConfiguration * errorConfiguration;                                               //@synthesize errorConfiguration=_errorConfiguration - In the implementation block
@property (getter=isImplicitLoggingSupported,nonatomic,readonly) BOOL implicitLoggingEnabled;                              //@synthesize implicitLoggingEnabled=_implicitLoggingEnabled - In the implementation block
@property (getter=isImplicitPurchaseLoggingSupported,nonatomic,readonly) BOOL implicitPurchaseLoggingEnabled;              //@synthesize implicitPurchaseLoggingEnabled=_implicitPurchaseLoggingEnabled - In the implementation block
@property (getter=isLoginTooltipEnabled,nonatomic,readonly) BOOL loginTooltipEnabled;                                      //@synthesize loginTooltipEnabled=_loginTooltipEnabled - In the implementation block
@property (getter=isNativeAuthFlowEnabled,nonatomic,readonly) BOOL nativeAuthFlowEnabled;                                  //@synthesize nativeAuthFlowEnabled=_nativeAuthFlowEnabled - In the implementation block
@property (getter=isSystemAuthenticationEnabled,nonatomic,readonly) BOOL systemAuthenticationEnabled;                      //@synthesize systemAuthenticationEnabled=_systemAuthenticationEnabled - In the implementation block
@property (nonatomic,copy,readonly) NSString * loginTooltipText;                                                           //@synthesize loginTooltipText=_loginTooltipText - In the implementation block
@property (nonatomic,copy,readonly) NSDate * timestamp;                                                                    //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) double sessionTimoutInterval;                                                                 //@synthesize sessionTimoutInterval=_sessionTimoutInterval - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSString *)defaultShareMode;
-(BOOL)useSafariViewControllerForDialogName:(id)arg1 ;
-(BOOL)useNativeDialogForDialogName:(id)arg1 ;
-(BOOL)isSystemAuthenticationEnabled;
-(NSString *)loginTooltipText;
-(BOOL)isLoginTooltipEnabled;
-(BOOL)isDefaults;
-(id)initWithAppID:(id)arg1 appName:(id)arg2 loginTooltipEnabled:(BOOL)arg3 loginTooltipText:(id)arg4 defaultShareMode:(id)arg5 advertisingIDEnabled:(BOOL)arg6 implicitLoggingEnabled:(BOOL)arg7 implicitPurchaseLoggingEnabled:(BOOL)arg8 systemAuthenticationEnabled:(BOOL)arg9 nativeAuthFlowEnabled:(BOOL)arg10 dialogConfigurations:(id)arg11 dialogFlows:(id)arg12 timestamp:(id)arg13 errorConfiguration:(id)arg14 sessionTimeoutInterval:(double)arg15 defaults:(BOOL)arg16 ;
-(id)dialogConfigurationForDialogName:(id)arg1 ;
-(double)sessionTimoutInterval;
-(FBSDKErrorConfiguration *)errorConfiguration;
-(BOOL)isAdvertisingIDEnabled;
-(BOOL)isImplicitPurchaseLoggingSupported;
-(BOOL)isImplicitLoggingSupported;
-(BOOL)_useFeatureWithKey:(id)arg1 dialogName:(id)arg2 ;
-(BOOL)isNativeAuthFlowEnabled;
-(void)setSessionTimoutInterval:(double)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(NSDate *)timestamp;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)appName;
-(NSString *)appID;
@end

