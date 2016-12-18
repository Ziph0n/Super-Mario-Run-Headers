/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 16, 2016 at 1:28:32 PM Central European Standard Time
* Operating System: Version 9.3.2 (Build 13F69)
* Image Source: /var/containers/Bundle/Application/DF2FE387-EFC2-4765-9E85-C2CDC49533B4/rb_12_01_16:02:52.app/Super Mario Run
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSObject;

@interface BFCancellationToken : NSObject {

	BOOL _cancellationRequested;
	BOOL _disposed;
	NSMutableArray* _registrations;
	NSObject* _lock;

}

@property (nonatomic,retain) NSMutableArray * registrations;                                           //@synthesize registrations=_registrations - In the implementation block
@property (nonatomic,retain) NSObject * lock;                                                          //@synthesize lock=_lock - In the implementation block
@property (assign,nonatomic) BOOL disposed;                                                            //@synthesize disposed=_disposed - In the implementation block
@property (getter=isCancellationRequested,nonatomic,readonly) BOOL cancellationRequested;              //@synthesize cancellationRequested=_cancellationRequested - In the implementation block
-(BOOL)disposed;
-(void)setDisposed:(BOOL)arg1 ;
-(void)unregisterRegistration:(id)arg1 ;
-(void)throwIfDisposed;
-(BOOL)isCancellationRequested;
-(void)cancelAfterDelay:(int)arg1 ;
-(void)cancelPrivate;
-(NSMutableArray *)registrations;
-(void)notifyCancellation:(id)arg1 ;
-(void)setRegistrations:(NSMutableArray *)arg1 ;
-(id)registerCancellationObserverWithBlock:(/*^block*/id)arg1 ;
-(void)cancel;
-(id)init;
-(NSObject *)lock;
-(void)dispose;
-(void)setLock:(NSObject *)arg1 ;
@end
