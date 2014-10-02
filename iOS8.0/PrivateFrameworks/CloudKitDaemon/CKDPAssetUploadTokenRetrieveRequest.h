//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBRequest.h"

#import "NSCopying.h"

@class CKDPRecordFieldIdentifier, CKDPRecordType, NSMutableArray;

__attribute__((visibility("hidden")))
@interface CKDPAssetUploadTokenRetrieveRequest : PBRequest <NSCopying>
{
    NSMutableArray *_assets;
    CKDPRecordFieldIdentifier *_field;
    CKDPRecordType *_type;
    NSMutableArray *_uploads;
}

+ (id)options;
@property(retain, nonatomic) NSMutableArray *uploads; // @synthesize uploads=_uploads;
@property(retain, nonatomic) NSMutableArray *assets; // @synthesize assets=_assets;
@property(retain, nonatomic) CKDPRecordFieldIdentifier *field; // @synthesize field=_field;
@property(retain, nonatomic) CKDPRecordType *type; // @synthesize type=_type;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (Class)responseClass;
- (unsigned int)requestTypeCode;
- (void)writeTo:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)uploadsAtIndex:(unsigned int)arg1;
- (unsigned int)uploadsCount;
- (void)addUploads:(id)arg1;
- (void)clearUploads;
- (id)assetsAtIndex:(unsigned int)arg1;
- (unsigned int)assetsCount;
- (void)addAssets:(id)arg1;
- (void)clearAssets;
@property(readonly, nonatomic) BOOL hasField;
@property(readonly, nonatomic) BOOL hasType;

@end
