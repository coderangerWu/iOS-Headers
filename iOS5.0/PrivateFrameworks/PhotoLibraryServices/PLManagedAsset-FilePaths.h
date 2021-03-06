/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <PhotoLibraryServices/PLManagedAsset.h>

@class NSArray, NSSet, NSString, NSURL;

@interface PLManagedAsset (FilePaths)
+ (id)pathForMetadataWithExtension:(id)arg1 forMediaInMainDirectory:(id)arg2 withFilename:(id)arg3;
+ (id)abbreviatedMetadataDirectoryForDirectory:(id)arg1;
@property(readonly, nonatomic) BOOL hasFullSizeImageData;
- (void)save;
@property(readonly, nonatomic) BOOL hasXMPFile;
@property(readonly, nonatomic) NSString *pathForXMPFile;
@property(readonly, nonatomic) NSString *pathForLowResolutionFile;
@property(readonly, nonatomic) NSURL *fileURLForPrebakedPortraitScrubberThumbnails;
@property(readonly, nonatomic) NSString *pathForPrebakedPortraitScrubberThumbnails;
@property(readonly, nonatomic) NSURL *fileURLForPrebakedLandscapeScrubberThumbnails;
@property(readonly, nonatomic) NSString *pathForPrebakedLandscapeScrubberThumbnails;
@property(readonly, nonatomic) NSURL *fileURLForLargeDisplayableImage;
@property(readonly, nonatomic) NSString *pathForLargeDisplayableImageFile;
@property(readonly, nonatomic) NSString *pathForVideoFile;
@property(readonly, nonatomic) NSString *pathForVideoPreviewFile;
@property(readonly, nonatomic) NSString *pathForTrimmedVideoFile;
@property(readonly, nonatomic) NSString *pathForPrebakedWildcatThumbnailsFile;
@property(readonly, nonatomic) NSString *pathForPrebakedThumbnail;
@property(readonly, nonatomic) NSURL *fileURLForThumbnailFile;
- (id)fileULRForMetadataWithExtension:(id)arg1;
- (id)pathForMetadataWithExtension:(id)arg1;
@property(readonly, nonatomic) NSURL *fileURLForMetadataDirectory;
@property(readonly, nonatomic) NSString *pathForMetadataDirectory;
@property(readonly, nonatomic) NSString *fileExtension;
- (void)addExtension:(id)arg1;
@property(readonly, nonatomic) NSArray *allUniformTypeIdentifiers;
- (id)allFileExtensions;
- (id)fileURLForSidecarFile:(id)arg1;
@property(readonly, nonatomic) NSString *pathForOriginalFile;
@property(readonly, nonatomic) NSURL *fileURLForLargeThumbnailFile;
@property(readonly, nonatomic) NSString *pathForLargeThumbnailFile;
@property(readonly, nonatomic) NSSet *allFileURLs;
@property(readonly, nonatomic) NSSet *filePathsWithoutThumbs;
@property(readonly, nonatomic) NSString *pathForImageFile;
@property(readonly, nonatomic) NSURL *mainFileURL;
- (BOOL)isSavedPhotosAsset;
@end

