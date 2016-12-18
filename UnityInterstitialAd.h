/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 16, 2016 at 1:28:32 PM Central European Standard Time
* Operating System: Version 9.3.2 (Build 13F69)
* Image Source: /var/containers/Bundle/Application/DF2FE387-EFC2-4765-9E85-C2CDC49533B4/rb_12_01_16:02:52.app/Super Mario Run
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/ADInterstitialAdDelegate.h>
#import <Super Mario Run/UnityViewControllerListener.h>

@class ADInterstitialAd, UIViewController, NSString;

@interface UnityInterstitialAd : NSObject <ADInterstitialAdDelegate, UnityViewControllerListener> {

	ADInterstitialAd* _interstitial;
	UIViewController* _presentController;
	BOOL _autoReload;
	BOOL _didShowAd;

}

@property (nonatomic,copy,readonly) ADInterstitialAd * interstitial;              //@synthesize interstitial=_interstitial - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_unloadAD;
-(void)_loadAD;
-(void)reloadAD;
-(void)_handleReloadAD;
-(id)initWithController:(id)arg1 autoReload:(BOOL)arg2 ;
-(ADInterstitialAd *)interstitial;
-(void)show;
-(void)dealloc;
-(void)viewWillAppear:(id)arg1 ;
-(void)viewDidDisappear:(id)arg1 ;
-(void)interstitialAdDidUnload:(id)arg1 ;
-(void)interstitialAdDidLoad:(id)arg1 ;
-(void)interstitialAd:(id)arg1 didFailWithError:(id)arg2 ;
-(void)interstitialAdActionDidFinish:(id)arg1 ;
-(BOOL)interstitialAdActionShouldBegin:(id)arg1 willLeaveApplication:(BOOL)arg2 ;
@end
