/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 16, 2016 at 1:28:33 PM Central European Standard Time
* Operating System: Version 9.3.2 (Build 13F69)
* Image Source: /var/containers/Bundle/Application/DF2FE387-EFC2-4765-9E85-C2CDC49533B4/rb_12_01_16:02:52.app/Super Mario Run
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Super Mario Run/Super Mario Run-Structs.h>
#import <Super Mario Run/FBSDKCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface FBSDKAppGroupContent : NSObject <FBSDKCopying, NSSecureCoding> {

	NSString* _groupDescription;
	NSString* _name;
	unsigned long long _privacy;

}

@property (nonatomic,copy) NSString * groupDescription;               //@synthesize groupDescription=_groupDescription - In the implementation block
@property (nonatomic,copy) NSString * name;                           //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) unsigned long long privacy;              //@synthesize privacy=_privacy - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)setGroupDescription:(NSString *)arg1 ;
-(void)setPrivacy:(unsigned long long)arg1 ;
-(NSString *)groupDescription;
-(unsigned long long)privacy;
-(BOOL)isEqualToAppGroupContent:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setName:(NSString *)arg1 ;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

