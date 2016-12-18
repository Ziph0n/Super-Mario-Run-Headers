/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 16, 2016 at 1:28:33 PM Central European Standard Time
* Operating System: Version 9.3.2 (Build 13F69)
* Image Source: /var/containers/Bundle/Application/DF2FE387-EFC2-4765-9E85-C2CDC49533B4/rb_12_01_16:02:52.app/Super Mario Run
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Super Mario Run/FBSDKButton.h>
#import <Super Mario Run/FBSDKButtonImpressionTracking.h>
#import <Super Mario Run/FBSDKSharingButton.h>

@class FBSDKMessageDialog, NSString;

@interface FBSDKSendButton : FBSDKButton <FBSDKButtonImpressionTracking, FBSDKSharingButton> {

	FBSDKMessageDialog* _dialog;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) id<FBSDKSharingContent> shareContent; 
-(void)setShareContent:(id<FBSDKSharingContent>)arg1 ;
-(id<FBSDKSharingContent>)shareContent;
-(id)analyticsParameters;
-(id)impressionTrackingEventName;
-(id)impressionTrackingIdentifier;
-(void)configureButton;
-(BOOL)isImplicitlyDisabled;
-(void)_share:(id)arg1 ;
@end

