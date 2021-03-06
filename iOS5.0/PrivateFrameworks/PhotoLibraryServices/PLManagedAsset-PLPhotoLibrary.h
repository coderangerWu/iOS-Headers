/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <PhotoLibraryServices/PLManagedAsset.h>

@interface PLManagedAsset (PLPhotoLibrary)
+ (id)assetWithObjectID:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)assetWithUUID:(id)arg1 inManagedObjectContext:(id)arg2;
+ (id)pathsForAllIncompleteAssetsInManagedObjectContext:(id)arg1;
+ (id)incompleteAssetsInManagedObjectContext:(id)arg1;
+ (id)pathsForAssetsWithKind:(int)arg1 inManagedObjectContext:(id)arg2;
+ (id)_pathsByAssetUUIDFromFetchResults:(id)arg1 absolute:(BOOL)arg2;
+ (id)assetsWithKind:(int)arg1 inManagedObjectContext:(id)arg2;
+ (unsigned int)countUsedAssetsWithKind:(int)arg1 inManagedObjectContext:(id)arg2;
+ (unsigned int)countAssetsWithKind:(int)arg1 inManagedObjectContext:(id)arg2;
@end

