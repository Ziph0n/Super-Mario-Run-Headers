/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 16, 2016 at 1:28:32 PM Central European Standard Time
* Operating System: Version 9.3.2 (Build 13F69)
* Image Source: /var/containers/Bundle/Application/DF2FE387-EFC2-4765-9E85-C2CDC49533B4/rb_12_01_16:02:52.app/Super Mario Run
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Super Mario Run/Super Mario Run-Structs.h>
@class NSString, UIDevice;

@interface FIRInstanceIDDevice : NSObject {

	NSString* _normalizedModel;
	NSString* _generation;
	NSString* _deviceCategory;
	BOOL _isRecognizedModel;
	UIDevice* _currentDevice;
	unsigned long long _iPhoneOSVersion;
	CGSize _keyboardSize;
	NSString* _machineName;

}

@property (nonatomic,readonly) NSString * modelVersion; 
+(id)currentDevice;
-(id)init;
-(NSString *)modelVersion;
@end

