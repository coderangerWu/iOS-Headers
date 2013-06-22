/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class NSMutableArray;

@interface MKOverlayClusterView : UIView
{
    struct _opaque_pthread_rwlock_t {
        long __sig;
        char __opaque[124];
    } _viewsLock;
    NSMutableArray *_proxiedViews;
    int _subviewsImplementingCanDraw;
    struct {
        unsigned int levelCrossFade:1;
        unsigned int drawingDisabled:1;
    } _flags;
}

+ (Class)layerClass;
- (id).cxx_construct;
- (void)renderLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (void)drawLayer:(id)arg1 inContext:(struct CGContext *)arg2;
- (BOOL)tiledLayer:(id)arg1 canDrawRect:(struct CGRect)arg2 levelOfDetail:(int)arg3;
- (void)setContentScaleFactor:(float)arg1;
- (BOOL)_canDrawContent;
- (void)appendCluster:(id)arg1;
- (id)splitAboutView:(id)arg1;
- (void)willRemoveSubview:(id)arg1;
- (void)didAddSubview:(id)arg1;
- (void)_setNeedsDisplayForSubview:(CDStruct_90e2a262)arg1;
@property(nonatomic) BOOL drawingEnabled;
@property(nonatomic) BOOL levelCrossFade;
- (void)dealloc;
- (id)init;

@end

