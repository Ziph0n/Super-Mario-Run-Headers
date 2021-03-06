/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 16, 2016 at 1:28:33 PM Central European Standard Time
* Operating System: Version 9.3.2 (Build 13F69)
* Image Source: /var/containers/Bundle/Application/DF2FE387-EFC2-4765-9E85-C2CDC49533B4/rb_12_01_16:02:52.app/Super Mario Run
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Super Mario Run/Super Mario Run-Structs.h>
#import <UIKit/UIView.h>

@class UIWebView, UIActivityIndicatorView;

@interface DeNAWPWebView : UIView {

	BOOL modal;
	int gravity;
	UIWebView* webView;
	UIActivityIndicatorView* spinner;
	double topOffset;
	double bottomOffset;
	CGSize sz;
	CGRect rt;
	CGRect mgn;

}

@property (nonatomic,retain) UIWebView * webView; 
@property (nonatomic,retain) UIActivityIndicatorView * spinner; 
@property (assign,nonatomic) int gravity; 
@property (assign,nonatomic) BOOL modal; 
@property (assign,nonatomic) CGRect rt; 
@property (assign,nonatomic) CGSize sz; 
@property (assign,nonatomic) CGRect mgn; 
@property (assign,nonatomic) double topOffset; 
@property (assign,nonatomic) double bottomOffset; 
-(void)setOffset:(double)arg1 bottom:(double)arg2 ;
-(void)setRt:(CGRect)arg1 ;
-(void)setSz:(CGSize)arg1 ;
-(void)setMgn:(CGRect)arg1 ;
-(void)setSpinnerColor:(id)arg1 backgroundColor:(id)arg2 ;
-(void)commonWebViewDidFinish;
-(double)bottomOffset;
-(void)setBottomOffset:(double)arg1 ;
-(CGRect)rt;
-(CGSize)sz;
-(CGPoint)originForGravity:(int)arg1 withSize:(CGSize)arg2 inbounds:(CGRect)arg3 useOffsets:(BOOL)arg4 ;
-(CGRect)mgn;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(UIWebView *)webView;
-(void)setWebView:(UIWebView *)arg1 ;
-(UIActivityIndicatorView *)spinner;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
-(int)gravity;
-(void)setGravity:(int)arg1 ;
-(void)setTopOffset:(double)arg1 ;
-(double)topOffset;
-(void)setModal:(BOOL)arg1 ;
-(void)showSpinner;
-(BOOL)modal;
-(void)hideSpinner;
@end

