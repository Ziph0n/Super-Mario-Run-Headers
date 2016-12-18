/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 16, 2016 at 1:28:32 PM Central European Standard Time
* Operating System: Version 9.3.2 (Build 13F69)
* Image Source: /var/containers/Bundle/Application/DF2FE387-EFC2-4765-9E85-C2CDC49533B4/rb_12_01_16:02:52.app/Super Mario Run
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSData, UIColor, NSNumber;

@interface NPFMii : NSObject {

	int _favoriteColor;
	int _format;
	int _type;
	int _expression;
	int _clothesColor;
	int _lightDirectionMode;
	NSString* _miiId;
	NSData* _storeData;
	NSString* _imageOrigin;
	NSString* _etag;
	UIColor* _bgColor;
	NSNumber* _cameraXRotate;
	NSNumber* _cameraYRotate;
	NSNumber* _cameraZRotate;
	NSNumber* _characterXRotate;
	NSNumber* _characterYRotate;
	NSNumber* _characterZRotate;
	NSNumber* _lightXDirection;
	NSNumber* _lightYDirection;
	NSNumber* _lightZDirection;
	long long _version;

}

@property (nonatomic,copy) NSString * miiId;                         //@synthesize miiId=_miiId - In the implementation block
@property (assign,nonatomic) long long version;                      //@synthesize version=_version - In the implementation block
@property (nonatomic,copy) NSData * storeData;                       //@synthesize storeData=_storeData - In the implementation block
@property (nonatomic,copy) NSString * imageOrigin;                   //@synthesize imageOrigin=_imageOrigin - In the implementation block
@property (nonatomic,copy) NSString * etag;                          //@synthesize etag=_etag - In the implementation block
@property (assign,nonatomic) int favoriteColor;                      //@synthesize favoriteColor=_favoriteColor - In the implementation block
@property (assign,nonatomic) int format;                             //@synthesize format=_format - In the implementation block
@property (assign,nonatomic) int type;                               //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) int expression;                         //@synthesize expression=_expression - In the implementation block
@property (nonatomic,copy) UIColor * bgColor;                        //@synthesize bgColor=_bgColor - In the implementation block
@property (assign,nonatomic) int clothesColor;                       //@synthesize clothesColor=_clothesColor - In the implementation block
@property (nonatomic,copy) NSNumber * cameraXRotate;                 //@synthesize cameraXRotate=_cameraXRotate - In the implementation block
@property (nonatomic,copy) NSNumber * cameraYRotate;                 //@synthesize cameraYRotate=_cameraYRotate - In the implementation block
@property (nonatomic,copy) NSNumber * cameraZRotate;                 //@synthesize cameraZRotate=_cameraZRotate - In the implementation block
@property (nonatomic,copy) NSNumber * characterXRotate;              //@synthesize characterXRotate=_characterXRotate - In the implementation block
@property (nonatomic,copy) NSNumber * characterYRotate;              //@synthesize characterYRotate=_characterYRotate - In the implementation block
@property (nonatomic,copy) NSNumber * characterZRotate;              //@synthesize characterZRotate=_characterZRotate - In the implementation block
@property (assign,nonatomic) int lightDirectionMode;                 //@synthesize lightDirectionMode=_lightDirectionMode - In the implementation block
@property (nonatomic,copy) NSNumber * lightXDirection;               //@synthesize lightXDirection=_lightXDirection - In the implementation block
@property (nonatomic,copy) NSNumber * lightYDirection;               //@synthesize lightYDirection=_lightYDirection - In the implementation block
@property (nonatomic,copy) NSNumber * lightZDirection;               //@synthesize lightZDirection=_lightZDirection - In the implementation block
+(int)getMiiColor:(id)arg1 ;
+(id)getMiiColorString:(int)arg1 ;
-(void)setMiiId:(NSString *)arg1 ;
-(void)setImageOrigin:(NSString *)arg1 ;
-(void)setFavoriteColor:(int)arg1 ;
-(void)setClothesColor:(int)arg1 ;
-(void)setCameraXRotate:(NSNumber *)arg1 ;
-(void)setCameraYRotate:(NSNumber *)arg1 ;
-(void)setCameraZRotate:(NSNumber *)arg1 ;
-(void)setCharacterXRotate:(NSNumber *)arg1 ;
-(void)setCharacterYRotate:(NSNumber *)arg1 ;
-(void)setCharacterZRotate:(NSNumber *)arg1 ;
-(void)setLightDirectionMode:(int)arg1 ;
-(void)setLightXDirection:(NSNumber *)arg1 ;
-(void)setLightYDirection:(NSNumber *)arg1 ;
-(void)setLightZDirection:(NSNumber *)arg1 ;
-(int)clothesColor;
-(NSNumber *)cameraXRotate;
-(NSNumber *)cameraYRotate;
-(NSNumber *)cameraZRotate;
-(NSNumber *)characterXRotate;
-(NSNumber *)characterYRotate;
-(NSNumber *)characterZRotate;
-(int)lightDirectionMode;
-(NSNumber *)lightXDirection;
-(NSNumber *)lightYDirection;
-(NSNumber *)lightZDirection;
-(id)getImageUrl;
-(NSString *)miiId;
-(NSString *)imageOrigin;
-(int)favoriteColor;
-(int)expression;
-(id)init;
-(void)setType:(int)arg1 ;
-(int)type;
-(void)setVersion:(long long)arg1 ;
-(long long)version;
-(NSString *)etag;
-(void)setEtag:(NSString *)arg1 ;
-(void)setExpression:(int)arg1 ;
-(NSData *)storeData;
-(void)setStoreData:(NSData *)arg1 ;
-(int)format;
-(void)setFormat:(int)arg1 ;
-(void)setBgColor:(UIColor *)arg1 ;
-(UIColor *)bgColor;
@end

