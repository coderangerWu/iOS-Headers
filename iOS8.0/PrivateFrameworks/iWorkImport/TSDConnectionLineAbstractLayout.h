//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSDShapeLayout.h>

@class TSDBezierPath, TSDConnectionLinePathSource, TSDInfoGeometry, TSDLayout;

__attribute__((visibility("hidden")))
@interface TSDConnectionLineAbstractLayout : TSDShapeLayout
{
    TSDBezierPath *mClippedBezierPath;
    TSDConnectionLinePathSource *mOriginalPathSource;
    TSDConnectionLinePathSource *mConnectedPathSource;
    TSDInfoGeometry *mConnectedInfoGeometry;
    TSDLayout *mConnectedFrom;
    TSDLayout *mConnectedTo;
    TSDBezierPath *mCachedFromWrapPath;
    TSDBezierPath *mCachedToWrapPath;
    float mCachedFromOutset;
    float mCachedToOutset;
    TSDBezierPath *mCachedFromOutsetWrapPath;
    TSDBezierPath *mCachedToOutsetWrapPath;
    TSDLayout *mOldConnectedFrom;
    TSDLayout *mOldConnectedTo;
    BOOL mValidConnections;
    BOOL mVisibleLine;
    BOOL mValidLine;
    struct CGPoint mLooseEndPosition;
    struct CGPoint mAcumulatedDrag;
    char mUseResizePoints[3];
    struct CGPoint mResizeControlPoints[3];
    BOOL mUseDynamicOutsets;
    float mDynamicOutsetFrom;
    float mDynamicOutsetTo;
}

@property(nonatomic) float dynamicOutsetTo; // @synthesize dynamicOutsetTo=mDynamicOutsetTo;
@property(nonatomic) float dynamicOutsetFrom; // @synthesize dynamicOutsetFrom=mDynamicOutsetFrom;
@property(nonatomic) BOOL useDynamicOutsets; // @synthesize useDynamicOutsets=mUseDynamicOutsets;
@property(readonly, nonatomic) BOOL validLine; // @synthesize validLine=mValidLine;
@property(nonatomic) TSDLayout *connectedTo; // @synthesize connectedTo=mConnectedTo;
@property(nonatomic) TSDLayout *connectedFrom; // @synthesize connectedFrom=mConnectedFrom;
- (id)p_infoForConnectingToInfo:(id)arg1;
- (struct CGPoint)getControlKnobPosition:(unsigned int)arg1;
- (void)pauseDynamicTransformation;
- (struct CGPoint)i_accumulatedDrag;
- (void)endDynamicOperation;
- (void)beginDynamicOperation;
- (BOOL)shouldDisplayGuides;
- (struct CGPoint)unclippedTailPoint;
- (struct CGPoint)unclippedHeadPoint;
- (id)path;
- (BOOL)pathIsOpen;
- (BOOL)pathIsLineSegment;
- (void)invalidatePath;
- (void)invalidatePosition;
- (struct CGRect)boundsForStandardKnobs;
- (id)layoutInfoGeometry;
- (id)pathSource;
@property(readonly, nonatomic) TSDConnectionLinePathSource *connectedPathSource;
- (int)wrapType;
- (BOOL)canResetTextAndObjectHandles;
- (BOOL)canBeIntersected;
- (BOOL)canFlip;
- (BOOL)canEndpointsCoincide;
- (BOOL)isInvisible;
- (void)updateConnectedPath;
- (id)clipPath:(id)arg1 onLayout:(id)arg2 outset:(float)arg3 reversed:(BOOL)arg4 isValid:(char *)arg5;
- (struct CGPoint)controlPointForPointA:(struct CGPoint)arg1 pointB:(struct CGPoint)arg2 andOriginalA:(struct CGPoint)arg3 originalB:(struct CGPoint)arg4;
- (id)createConnectedPathFrom:(id)arg1 to:(id)arg2 withControlPoints:(struct CGPoint [3])arg3;
- (void)checkConnections;
- (void)validate;
- (void)invalidateConnections;
- (void)removeConnections;
- (void)connectedLayoutInvalidated:(id)arg1;
- (void)processChangedProperty:(int)arg1;
- (void)parentDidChange;
- (void)updateRepPath;
- (BOOL)supportsFlipping;
- (BOOL)supportsRotation;
- (BOOL)supportsResize;
- (id)additionalLayoutsForRepCreation;
- (id)reliedOnLayouts;
- (BOOL)shouldValidate;
- (id)connectionLineInfo;
@property(readonly, nonatomic) float outsetTo;
@property(readonly, nonatomic) float outsetFrom;
- (void)dealloc;

@end

