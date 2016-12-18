/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 16, 2016 at 1:28:33 PM Central European Standard Time
* Operating System: Version 9.3.2 (Build 13F69)
* Image Source: /var/containers/Bundle/Application/DF2FE387-EFC2-4765-9E85-C2CDC49533B4/rb_12_01_16:02:52.app/Super Mario Run
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Super Mario Run/Super Mario Run-Structs.h>
#import <UIKit/UIView.h>

@class UILabel, UITapGestureRecognizer, UIColor, NSArray, NSString;

@interface FBSDKTooltipView : UIView {

	CGPoint _positionInView;
	double _displayTime;
	double _minimumDisplayDuration;
	UILabel* _textLabel;
	UITapGestureRecognizer* _insideTapGestureRecognizer;
	double _leftWidth;
	double _rightWidth;
	double _arrowMidpoint;
	BOOL _pointingUp;
	BOOL _isFadingOut;
	UIColor* _innerStrokeColor;
	double _arrowHeight;
	double _textPadding;
	double _maximumTextWidth;
	double _verticalTextOffset;
	double _verticalCrossOffset;
	unsigned long long _colorStyle;
	NSArray* _gradientColors;
	UIColor* _crossCloseGlyphColor;
	double _displayDuration;
	NSString* _message;
	NSString* _tagline;

}

@property (assign,nonatomic) double displayDuration;                     //@synthesize displayDuration=_displayDuration - In the implementation block
@property (assign,nonatomic) unsigned long long colorStyle; 
@property (nonatomic,copy) NSString * message;                           //@synthesize message=_message - In the implementation block
@property (nonatomic,copy) NSString * tagline;                           //@synthesize tagline=_tagline - In the implementation block
-(void)setColorStyle:(unsigned long long)arg1 ;
-(void)presentFromView:(id)arg1 ;
-(void)setMessage:(id)arg1 tagline:(id)arg2 ;
-(void)onTapInTooltip:(id)arg1 ;
-(NSString *)tagline;
-(void)presentInView:(id)arg1 withArrowPosition:(CGPoint)arg2 direction:(unsigned long long)arg3 ;
-(CGRect)layoutSubviewsAndDetermineFrame;
-(void)scheduleAutomaticFadeout;
-(void)animateFadeIn;
-(void)cancelAllScheduledFadeOutMethods;
-(void)animateFadeOutWithCompletion:(/*^block*/id)arg1 ;
-(void)scheduleFadeoutRespectingMinimumDisplayDuration;
-(id)initWithTagline:(id)arg1 message:(id)arg2 colorStyle:(unsigned long long)arg3 ;
-(void)setTagline:(NSString *)arg1 ;
-(unsigned long long)colorStyle;
-(double)displayDuration;
-(void)setDisplayDuration:(double)arg1 ;
-(void)drawRect:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(void)dismiss;
@end
