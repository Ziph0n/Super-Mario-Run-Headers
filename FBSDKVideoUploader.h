/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 16, 2016 at 1:28:33 PM Central European Standard Time
* Operating System: Version 9.3.2 (Build 13F69)
* Image Source: /var/containers/Bundle/Application/DF2FE387-EFC2-4765-9E85-C2CDC49533B4/rb_12_01_16:02:52.app/Super Mario Run
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBSDKVideoUploaderDelegate;
@class NSNumber, NSNumberFormatter, NSString, FBSDKShareVideo, NSDictionary;

@interface FBSDKVideoUploader : NSObject {

	NSNumber* _videoID;
	NSNumber* _uploadSessionID;
	NSNumberFormatter* _numberFormatter;
	NSString* _graphPath;
	NSString* _videoName;
	unsigned long long _videoSize;
	FBSDKShareVideo* _video;
	NSDictionary* _parameters;
	NSString* _graphNode;
	id<FBSDKVideoUploaderDelegate> _delegate;

}

@property (nonatomic,copy,readonly) FBSDKShareVideo * video;                              //@synthesize video=_video - In the implementation block
@property (nonatomic,copy) NSDictionary * parameters;                                     //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,copy) NSString * graphNode;                                          //@synthesize graphNode=_graphNode - In the implementation block
@property (assign,nonatomic,__weak) id<FBSDKVideoUploaderDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)_graphPathWithSuffix:(id)arg1 ;
-(void)_postStartRequest;
-(id)_extractOffsetsFromResultDictionary:(id)arg1 ;
-(void)_startTransferRequestWithOffsetDictionary:(id)arg1 ;
-(void)_postFinishRequest;
-(NSString *)graphNode;
-(id)initWithVideoName:(id)arg1 videoSize:(unsigned long long)arg2 parameters:(id)arg3 delegate:(id)arg4 ;
-(void)setGraphNode:(NSString *)arg1 ;
-(id)numberFormatter;
-(void)setDelegate:(id<FBSDKVideoUploaderDelegate>)arg1 ;
-(id)init;
-(id<FBSDKVideoUploaderDelegate>)delegate;
-(void)start;
-(NSDictionary *)parameters;
-(void)setParameters:(NSDictionary *)arg1 ;
-(FBSDKShareVideo *)video;
@end

