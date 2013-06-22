/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "NSCopying-Protocol.h"
#import "NSSecureCoding-Protocol.h"

@class NSArray, NSData, NSDate, NSSet, NSString, NSURL, PKBarcode, PKImage, PKPassContent, PKPassDisplayProfile, PKPassImages, UIImage;

@interface PKPass : NSObject <NSCopying, NSSecureCoding>
{
    PKPassContent *_content;
    PKPassImages *_images[4];
    NSString *_uniqueID;
    NSString *_passTypeIdentifier;
    NSString *_teamID;
    NSString *_localizedDescription;
    NSString *_serialNumber;
    NSString *_organizationName;
    NSDate *_expirationDate;
    NSDate *_relevantDate;
    NSSet *_locations;
    NSURL *_webServiceURL;
    NSString *_authenticationToken;
    PKPassDisplayProfile *_displayProfile;
    NSData *_manifestHash;
    int _settings;
    NSDate *_ingestedDate;
    NSDate *_modifiedDate;
    BOOL _revoked;
    BOOL _isPreIngested;
    PKImage *_partialFrontFaceImagePlaceholder;
}

+ (BOOL)supportsSecureCoding;
@property(readonly, nonatomic) PKImage *partialFrontFaceImagePlaceholder; // @synthesize partialFrontFaceImagePlaceholder=_partialFrontFaceImagePlaceholder;
@property(nonatomic) BOOL isPreIngested; // @synthesize isPreIngested=_isPreIngested;
@property(nonatomic, getter=isRevoked) BOOL revoked; // @synthesize revoked=_revoked;
@property(retain, nonatomic) NSDate *modifiedDate; // @synthesize modifiedDate=_modifiedDate;
@property(retain, nonatomic) NSDate *ingestedDate; // @synthesize ingestedDate=_ingestedDate;
@property(nonatomic) int settings; // @synthesize settings=_settings;
@property(retain, nonatomic) NSData *manifestHash; // @synthesize manifestHash=_manifestHash;
@property(copy, nonatomic) PKPassDisplayProfile *displayProfile; // @synthesize displayProfile=_displayProfile;
@property(copy, nonatomic) NSString *authenticationToken; // @synthesize authenticationToken=_authenticationToken;
@property(copy, nonatomic) NSURL *webServiceURL; // @synthesize webServiceURL=_webServiceURL;
@property(copy, nonatomic) NSSet *locations; // @synthesize locations=_locations;
@property(copy, nonatomic) NSDate *relevantDate; // @synthesize relevantDate=_relevantDate;
@property(copy, nonatomic) NSDate *expirationDate; // @synthesize expirationDate=_expirationDate;
@property(copy, nonatomic) NSString *organizationName; // @synthesize organizationName=_organizationName;
@property(copy, nonatomic) NSString *serialNumber; // @synthesize serialNumber=_serialNumber;
@property(copy, nonatomic) NSString *localizedDescription; // @synthesize localizedDescription=_localizedDescription;
@property(copy, nonatomic) NSString *teamID; // @synthesize teamID=_teamID;
@property(copy, nonatomic) NSString *passTypeIdentifier; // @synthesize passTypeIdentifier=_passTypeIdentifier;
@property(copy, nonatomic) NSString *uniqueID; // @synthesize uniqueID=_uniqueID;
- (id)initWithData:(id)arg1 error:(id *)arg2;
- (id)_imageSetLoadingIfNecessary:(int)arg1;
- (id)_contentLoadingIfNecessary;
- (void)_setAllowRelevantPasses:(BOOL)arg1;
- (BOOL)isUpdatable;
- (BOOL)hasTimeOrLocationRelevancyInfo;
- (void)fetchImageSet:(int)arg1 withCompletion:(id)arg2;
- (void)fetchContentWithCompletion:(id)arg1;
- (id)allImageSetsLoadingIfNecessary;
- (BOOL)imageSetIsLoaded:(int)arg1;
- (void)loadImageSetSync:(int)arg1 preheat:(BOOL)arg2;
- (void)flushFormattedFieldValues;
- (void)flushCachedImageSets;
- (void)loadImageSetAsync:(int)arg1 preheat:(BOOL)arg2 withCompletion:(id)arg3;
- (BOOL)contentIsLoaded;
- (void)loadContentSync;
- (void)loadContentAsyncWithCompletion:(id)arg1;
@property(readonly, nonatomic) PKImage *backFaceImage;
@property(readonly, nonatomic) struct CGRect stripRect;
@property(readonly, nonatomic) struct CGRect thumbnailRect;
@property(readonly, nonatomic) struct CGRect logoRect;
@property(readonly, nonatomic) PKImage *partialFrontFaceImage;
@property(readonly, nonatomic) PKImage *frontFaceImage;
@property(readonly, nonatomic) PKImage *iconImage;
@property(readonly, nonatomic) NSArray *storeIdentifiers;
@property(readonly, nonatomic) NSArray *backFieldBuckets;
@property(readonly, nonatomic) NSArray *frontFieldBuckets;
@property(readonly, nonatomic) int transitType;
@property(readonly, nonatomic) NSString *logoText;
@property(readonly, nonatomic) PKImage *footerImage;
@property(readonly, nonatomic) PKBarcode *barcode;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_changeMessageForFieldKey:(id)arg1;
- (id)localizedValueForFieldKey:(id)arg1;
@property(readonly, nonatomic) NSURL *passURL;
@property(readonly, nonatomic) NSString *pluralTemplateDescription;
@property(readonly, nonatomic) NSString *lowercaseTemplateDescription;
@property(readonly, nonatomic) NSString *localizedName;
@property(readonly, nonatomic) int cardTemplate;
- (void)dealloc;
@property(readonly, nonatomic) NSString *templateDescription;
@property(copy, nonatomic) NSString *name;
@property(copy, nonatomic) NSString *institution;
@property(copy, nonatomic) NSURL *pushURL;
@property(copy, nonatomic) NSDate *activationDate;
- (id)mailAttachmentIcon;
@property(readonly, nonatomic) UIImage *icon; // @dynamic icon;

@end

