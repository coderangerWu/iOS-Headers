/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <AVFoundation/AVAssetReaderOutput.h>

@class AVAssetReaderVideoCompositionOutputInternal, AVVideoComposition, NSArray, NSDictionary;

@interface AVAssetReaderVideoCompositionOutput : AVAssetReaderOutput
{
    AVAssetReaderVideoCompositionOutputInternal *_videoCompositionOutputInternal;
}

+ (id)assetReaderVideoCompositionOutputWithVideoTracks:(id)arg1 videoSettings:(id)arg2;
- (BOOL)_enableTrackExtractionReturningError:(id *)arg1;
- (BOOL)_prepareForReadingReturningError:(id *)arg1;
- (id)_asset;
- (id)mediaType;
@property(copy, nonatomic) AVVideoComposition *videoComposition;
@property(readonly, nonatomic) NSDictionary *videoSettings;
@property(readonly, nonatomic) NSArray *videoTracks;
- (id)description;
- (BOOL)alwaysCopiesSampleData;
- (void)finalize;
- (void)dealloc;
- (id)initWithVideoTracks:(id)arg1 videoSettings:(id)arg2;
- (id)init;

@end

