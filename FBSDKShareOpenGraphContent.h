/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 16, 2016 at 1:28:33 PM Central European Standard Time
* Operating System: Version 9.3.2 (Build 13F69)
* Image Source: /var/containers/Bundle/Application/DF2FE387-EFC2-4765-9E85-C2CDC49533B4/rb_12_01_16:02:52.app/Super Mario Run
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Super Mario Run/Super Mario Run-Structs.h>
#import <Super Mario Run/FBSDKSharingContent.h>

@class NSURL, FBSDKHashtag, NSArray, NSString, FBSDKShareOpenGraphAction;

@interface FBSDKShareOpenGraphContent : NSObject <FBSDKSharingContent> {

	NSURL* _contentURL;
	FBSDKHashtag* _hashtag;
	NSArray* _peopleIDs;
	NSString* _placeID;
	NSString* _ref;
	FBSDKShareOpenGraphAction* _action;
	NSString* _previewPropertyName;

}

@property (nonatomic,copy) FBSDKShareOpenGraphAction * action;              //@synthesize action=_action - In the implementation block
@property (nonatomic,copy) NSString * previewPropertyName;                  //@synthesize previewPropertyName=_previewPropertyName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSURL * contentURL;                              //@synthesize contentURL=_contentURL - In the implementation block
@property (nonatomic,copy) FBSDKHashtag * hashtag;                          //@synthesize hashtag=_hashtag - In the implementation block
@property (nonatomic,copy) NSArray * peopleIDs;                             //@synthesize peopleIDs=_peopleIDs - In the implementation block
@property (nonatomic,copy) NSString * placeID;                              //@synthesize placeID=_placeID - In the implementation block
@property (nonatomic,copy) NSString * ref;                                  //@synthesize ref=_ref - In the implementation block
+(BOOL)supportsSecureCoding;
-(FBSDKHashtag *)hashtag;
-(NSArray *)peopleIDs;
-(void)setHashtag:(FBSDKHashtag *)arg1 ;
-(void)setPeopleIDs:(NSArray *)arg1 ;
-(NSString *)previewPropertyName;
-(BOOL)isEqualToShareOpenGraphContent:(id)arg1 ;
-(void)setPreviewPropertyName:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(FBSDKShareOpenGraphAction *)action;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setAction:(FBSDKShareOpenGraphAction *)arg1 ;
-(void)setPlaceID:(NSString *)arg1 ;
-(NSString *)placeID;
-(NSString *)ref;
-(void)setRef:(NSString *)arg1 ;
-(NSURL *)contentURL;
-(void)setContentURL:(NSURL *)arg1 ;
@end

