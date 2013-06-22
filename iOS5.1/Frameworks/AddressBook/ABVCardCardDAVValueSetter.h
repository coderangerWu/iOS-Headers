/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <AddressBook/ABVCardPersonValueSetter.h>

@interface ABVCardCardDAVValueSetter : ABVCardPersonValueSetter
{
    BOOL _recordIsGroup;
    BOOL _importingToExistingGroup;
}

+ (struct __CFDictionary *)_personToGroupPropertyMap;
+ (int)groupPropertyForPersonProperty:(int)arg1;
- (BOOL)propertyIsValidForPerson:(unsigned int)arg1;
- (void *)copyParsedRecordWithSource:(void *)arg1 outRecordType:(unsigned int *)arg2;
- (void *)valueForProperty:(unsigned int)arg1;
- (BOOL)setValue:(void *)arg1 forProperty:(unsigned int)arg2;
- (void)_drainExistingProperties;
- (id)initWithPerson:(void *)arg1 removeExistingProperties:(BOOL)arg2;
- (id)initWithGroup:(void *)arg1 removeExistingProperties:(BOOL)arg2;
- (BOOL)setImageData:(id)arg1 cropRectX:(int)arg2 cropRectY:(int)arg3 cropRectWidth:(int)arg4 cropRectHeight:(int)arg5;
- (id)imageData;
@property BOOL recordIsGroup; // @synthesize recordIsGroup=_recordIsGroup;

@end
