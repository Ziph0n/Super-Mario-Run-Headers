/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 16, 2016 at 1:28:32 PM Central European Standard Time
* Operating System: Version 9.3.2 (Build 13F69)
* Image Source: /var/containers/Bundle/Application/DF2FE387-EFC2-4765-9E85-C2CDC49533B4/rb_12_01_16:02:52.app/Super Mario Run
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class BFCancellationToken, NSObject;

@interface BFCancellationTokenRegistration : NSObject {

	BOOL _disposed;
	BFCancellationToken* _token;
	/*^block*/id _cancellationObserverBlock;
	NSObject* _lock;

}

@property (assign,nonatomic,__weak) BFCancellationToken * token;              //@synthesize token=_token - In the implementation block
@property (nonatomic,copy) id cancellationObserverBlock;                      //@synthesize cancellationObserverBlock=_cancellationObserverBlock - In the implementation block
@property (nonatomic,retain) NSObject * lock;                                 //@synthesize lock=_lock - In the implementation block
@property (assign,nonatomic) BOOL disposed;                                   //@synthesize disposed=_disposed - In the implementation block
+(id)registrationWithToken:(id)arg1 delegate:(/*^block*/id)arg2 ;
-(void)setCancellationObserverBlock:(id)arg1 ;
-(BOOL)disposed;
-(void)setDisposed:(BOOL)arg1 ;
-(void)throwIfDisposed;
-(id)cancellationObserverBlock;
-(id)init;
-(NSObject *)lock;
-(BFCancellationToken *)token;
-(void)setToken:(BFCancellationToken *)arg1 ;
-(void)notifyDelegate;
-(void)dispose;
-(void)setLock:(NSObject *)arg1 ;
@end

