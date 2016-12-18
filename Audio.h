/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 16, 2016 at 1:28:32 PM Central European Standard Time
* Operating System: Version 9.3.2 (Build 13F69)
* Image Source: /var/containers/Bundle/Application/DF2FE387-EFC2-4765-9E85-C2CDC49533B4/rb_12_01_16:02:52.app/Super Mario Run
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Super Mario Run/Super Mario Run-Structs.h>
@class NSTimer;

@interface Audio : NSObject {

	BOOL m_AbortOnStartFailure;
	BOOL m_AudioSessionAbortOnFailure;
	BOOL m_Initialized;
	BOOL m_OtherAudioPlayingOnStart;
	BOOL m_IsAudioSessionInterrupted;
	OpaqueAUGraphRef m_Graph;
	OpaqueAudioComponentInstanceRef m_OutputUnit;
	int m_OutputNode;
	NSTimer* m_RetryTimer;
	AudioStreamBasicDescription m_StereoS16ASBD;
	id m_Owner;

}

@property (assign) id m_Owner; 
+(BOOL)IsUserMusicActive;
+(BOOL)musicPlayerStop:(BOOL)arg1 ;
+(BOOL)musicPlayerPlay:(int)arg1 ;
+(void)musicPlayerReadLibrary;
+(BOOL)musicPlayerPause;
+(BOOL)musicPlayerResume;
-(long long)notifyAudioSessionError:(id)arg1 abortOnFailure:(BOOL)arg2 ;
-(long long)notifyAudioSessionError_AVAudioSessionErrorCodeMediaServicesFailed:(BOOL)arg1 ;
-(long long)notifyAudioSessionError_AVAudioSessionErrorCodeIsBusy:(BOOL)arg1 ;
-(long long)notifyAudioSessionError_AVAudioSessionErrorCodeIncompatibleCategory:(BOOL)arg1 ;
-(long long)notifyAudioSessionError_AVAudioSessionErrorCodeCannotInterruptOthers:(BOOL)arg1 ;
-(long long)notifyAudioSessionError_AVAudioSessionErrorCodeMissingEntitlement:(BOOL)arg1 ;
-(long long)notifyAudioSessionError_AVAudioSessionErrorCodeSiriIsRecording:(BOOL)arg1 ;
-(long long)notifyAudioSessionError_AVAudioSessionErrorCodeCannotStartPlaying:(BOOL)arg1 ;
-(long long)notifyAudioSessionError_AVAudioSessionErrorCodeCannotStartRecording:(BOOL)arg1 ;
-(long long)notifyAudioSessionError_AVAudioSessionErrorCodeBadParam:(BOOL)arg1 ;
-(long long)notifyAudioSessionError_AVAudioSessionErrorInsufficientPriority:(BOOL)arg1 ;
-(long long)notifyAudioSessionError_AVAudioSessionErrorCodeResourceNotAvailable:(BOOL)arg1 ;
-(long long)notifyAudioSessionError_AVAudioSessionErrorCodeUnspecified:(BOOL)arg1 ;
-(long long)notifyAudioSessionError_Unknown:(BOOL)arg1 ;
-(void)AudioSession_AbortAfterFailure;
-(void)applicationWillResignActiveStopAudioGraph;
-(void)applicationDidBecomeActiveStartAudioGraph;
-(void)avAudioSessionInterrupted:(id)arg1 ;
-(void)avAudioSessionRouteChanged:(id)arg1 ;
-(void)musicPlayerNowPlayingItemHasChanged:(id)arg1 ;
-(void)musicPlayerPlaybackStateHasChanged:(id)arg1 ;
-(BOOL)setSessionCategory:(id)arg1 ;
-(BOOL)setIOBufferDuration:(id)arg1 ;
-(BOOL)setAudioSessionAsActive:(id)arg1 ;
-(BOOL)checkAudioSessionError:(id)arg1 method:(id)arg2 error:(id)arg3 ;
-(void)disposeGraph;
-(void)setupASBD;
-(void)createNewAuGraph;
-(void)addNewGraphNode;
-(void)openGraph;
-(void)getGraphNodeInfo;
-(void)setMaxFramesPerSliceProperty;
-(void)setGraphNodeInputCallback:(unsigned*)arg1 ;
-(void)setAudioUnitStreamFormat:(unsigned)arg1 ;
-(void)setGraphSampleRate;
-(void)prepareAudioGraph;
-(BOOL)initializeGraph:(BOOL)arg1 ;
-(BOOL)stopAudioGraph;
-(BOOL)startAudioGraph:(BOOL)arg1 ;
-(void)deferredStartAudioGraph:(id)arg1 ;
-(BOOL)initializeSession;
-(BOOL)uninitialize;
-(BOOL)initializeAudioGraph;
-(void)specialRestartAudioGraph:(BOOL)arg1 ;
-(id)m_Owner;
-(void)setM_Owner:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationWillResignActive:(id)arg1 ;
-(BOOL)setSampleRate:(id)arg1 ;
@end
