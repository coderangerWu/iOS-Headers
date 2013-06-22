/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface WebFixedPositionContent : NSObject
{
    struct WebFixedPositionContentData *_private;
}

- (void)unlockLayers;
- (void)lockLayers;
- (BOOL)hasFixedPositionLayers;
- (void)removeAllLayers;
- (void)removeLayer:(id)arg1 insideLayerSync:(BOOL)arg2;
- (void)addOrUpdateLayer:(id)arg1 viewportConstraints:(PassOwnPtr_d5ec95f2)arg2 insideLayerSync:(BOOL)arg3;
- (void)didFinishScrollingOrZooming;
- (void)scrollOrZoomChanged:(struct CGRect)arg1;
- (void)dealloc;
- (id)initWithWebView:(id)arg1;

@end

