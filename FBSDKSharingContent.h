/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 16, 2016 at 1:28:33 PM Central European Standard Time
* Operating System: Version 9.3.2 (Build 13F69)
* Image Source: /var/containers/Bundle/Application/DF2FE387-EFC2-4765-9E85-C2CDC49533B4/rb_12_01_16:02:52.app/Super Mario Run
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSURL, FBSDKHashtag, NSArray, NSString;


@protocol FBSDKSharingContent <FBSDKCopying,NSSecureCoding>
@property (nonatomic,copy) NSURL * contentURL; 
@property (nonatomic,copy) FBSDKHashtag * hashtag; 
@property (nonatomic,copy) NSArray * peopleIDs; 
@property (nonatomic,copy) NSString * placeID; 
@property (nonatomic,copy) NSString * ref; 
@required
-(FBSDKHashtag *)hashtag;
-(NSArray *)peopleIDs;
-(void)setHashtag:(id)arg1;
-(void)setPeopleIDs:(id)arg1;
-(void)setPlaceID:(id)arg1;
-(NSString *)placeID;
-(NSString *)ref;
-(void)setRef:(id)arg1;
-(NSURL *)contentURL;
-(void)setContentURL:(id)arg1;

@end

