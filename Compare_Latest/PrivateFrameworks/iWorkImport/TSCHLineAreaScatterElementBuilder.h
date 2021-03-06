//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/TSCHElementBuilder.h>

__attribute__((visibility("hidden")))
@interface TSCHLineAreaScatterElementBuilder : TSCHElementBuilder
{
}

- (unsigned int)countOfLabelsForSeries:(id)arg1 forGroups:(id)arg2 forBodyLayout:(id)arg3 outNewTransforms:(struct CGAffineTransform **)arg4 outNewElementSizes:(struct CGSize **)arg5 outNewClipRect:(struct CGRect **)arg6 outNewStrings:(id **)arg7;
- (unsigned int)countOfPointsForSeries:(id)arg1 forGroups:(id)arg2 forBodyLayout:(id)arg3 outElementSize:(struct CGSize *)arg4 outClipRect:(struct CGRect *)arg5 outUnitSymbolPath:(const struct CGPath **)arg6 outNewTransformArray:(struct CGAffineTransform **)arg7 outNewGroupIndexArray:(unsigned int **)arg8;
- (struct CGAffineTransform)transformForRenderingSeriesElementSymbolsForSeries:(id)arg1 forGroups:(id)arg2 forBodyLayout:(id)arg3 outElementSize:(struct CGSize *)arg4 outClipRect:(struct CGRect *)arg5 outNewElementPath:(const struct CGPath **)arg6;
- (struct CGAffineTransform)transformForRenderingSeriesElementForSeries:(id)arg1 forGroups:(id)arg2 forBodyLayout:(id)arg3 outElementSize:(struct CGSize *)arg4 outClipRect:(struct CGRect *)arg5 outNewElementPath:(const struct CGPath **)arg6;
- (struct CGAffineTransform)transformForRenderingSeriesElementTopStrokeForSeries:(id)arg1 forGroups:(id)arg2 forBodyLayout:(id)arg3 outElementSize:(struct CGSize *)arg4 outClipRect:(struct CGRect *)arg5 outNewElementPath:(const struct CGPath **)arg6;
- (BOOL)needsSeparateHitTestingPaths;
- (unsigned int)countOfHitCheckRegionsInSeries:(id)arg1 forGroups:(id)arg2 forBodyLayout:(id)arg3 outNewElementPaths:(const struct CGPath ***)arg4 outSelectionKnobLocations:(id *)arg5;
- (void)p_trendlineInfoForSeries:(id)arg1 forBodyLayout:(id)arg2 outVertical:(char *)arg3 outOffsetInBody:(double *)arg4;
- (unsigned int)countOfErrorBarsInSeries:(id)arg1 forGroups:(id)arg2 forAxisID:(id)arg3 forBodyLayout:(id)arg4 outClipRect:(struct CGRect *)arg5 outNewErrorBarDescriptors:(CDStruct_183601bc **)arg6;
- (struct CGAffineTransform)transformForRenderingLabelInBody:(id)arg1 forSeries:(unsigned int)arg2 forGroup:(unsigned int)arg3 outElementSize:(struct CGSize *)arg4 outClipRect:(struct CGRect *)arg5;
- (unsigned int)countOfElementsInSeries:(id)arg1 forGroups:(id)arg2 forBodyLayout:(id)arg3 outNewElementBounds:(struct CGRect **)arg4 outNewClipRects:(struct CGRect **)arg5 outNewElementPaths:(const struct CGPath ***)arg6 outSelectionKnobLocations:(id *)arg7;
- (float)p_bubbleMaxForSeries:(id)arg1 inChartBodyLayoutSize:(struct CGSize)arg2;
- (void)p_createElementsForSeries:(id)arg1 forGroups:(id)arg2 inBodyLayout:(id)arg3 outTopStrokePath:(const struct CGPath **)arg4 outTopStrokeClipRect:(struct CGRect *)arg5 outSeriesElementPath:(const struct CGPath **)arg6 outSeriesElementClipRect:(struct CGRect *)arg7 outSymbolElementPath:(const struct CGPath **)arg8 outSymbolElementClipRect:(struct CGRect *)arg9 outSymbolElementHitCheckPath:(const struct CGPath **)arg10 outSelectionKnobLocations:(id *)arg11;
- (struct CGPath *)p_newUnitHitPathForPath:(struct CGPath *)arg1 symbolType:(int)arg2 effectiveStrokeWidth:(float)arg3;
- (void)p_addKnobsForPoint:(struct CGPoint)arg1 strokedUnitSymbolRect:(struct CGRect)arg2 toKnobSet:(id)arg3 symbolsShowing:(BOOL)arg4;
- (id)p_symbolKnobLocationsForSeries:(id)arg1 forGroups:(id)arg2 inBodyLayout:(id)arg3;
- (CDStruct_b946340a *)p_createPointArrayForSeries:(id)arg1 inAreaFrame:(struct CGRect)arg2 valueStart:(int)arg3 valueEnd:(int)arg4 outCount:(unsigned int *)arg5;
- (CDStruct_b946340a *)p_createPointArrayForSeries:(id)arg1 inAreaFrame:(struct CGRect)arg2 valueStart:(unsigned int)arg3 valueEnd:(unsigned int)arg4 cullBadPoints:(BOOL)arg5 outCount:(unsigned int *)arg6;
- (BOOL)p_addBottomStroke:(CDStruct_a79ab58c *)arg1 toPath:(struct CGPath *)arg2 seriesIndex:(unsigned int)arg3 valuesStart:(unsigned int)arg4 valuesEnd:(unsigned int)arg5 withPointsArray:(CDStruct_b946340a *)arg6 withCount:(unsigned int)arg7;
- (void)p_addTopStroke:(CDStruct_a79ab58c *)arg1 toPath:(struct CGPath *)arg2 withPointsArray:(CDStruct_b946340a *)arg3 withCount:(unsigned int)arg4 lineType:(int)arg5;
- (void)p_addCurvedTopStroke:(CDStruct_a79ab58c *)arg1 toPath:(struct CGPath *)arg2 withPointsArray:(CDStruct_b946340a *)arg3 withCount:(unsigned int)arg4;
- (CDStruct_c2e5f5a5 *)p_centerPointsForSeries:(id)arg1 forGroupIndexes:(struct _NSRange)arg2 xAxis:(id)arg3 yAxis:(id)arg4 plotAreaFrame:(struct CGRect)arg5;
- (CDStruct_c2e5f5a5 *)p_centerPointsForSeries:(id)arg1 forGroupIndexes:(struct _NSRange)arg2 xAxis:(id)arg3 yAxis:(id)arg4 nullsUseIntercept:(BOOL)arg5 plotAreaFrame:(struct CGRect)arg6;
- (BOOL)p_centerPointForSeries:(id)arg1 forGroupIndex:(unsigned int)arg2 xAxis:(id)arg3 yAxis:(id)arg4 plotAreaFrame:(struct CGRect)arg5 nullsUseIntercept:(BOOL)arg6 outPoint:(struct CGPoint *)arg7;
- (struct CGPoint)labelPointForPosition:(unsigned int)arg1 rect:(struct CGRect)arg2 stringSize:(struct CGSize)arg3 symbolType:(int)arg4;
- (struct CGPath *)p_newPlusPath:(struct CGPoint)arg1 width:(float)arg2 pathLocation:(int)arg3 stroke:(id)arg4 context:(struct CGContext *)arg5;
- (struct CGPath *)p_newCrossPath:(struct CGPoint)arg1 width:(float)arg2 pathLocation:(int)arg3 stroke:(id)arg4;
- (struct CGPath *)p_newDiamondPath:(struct CGPoint)arg1 width:(float)arg2 pathLocation:(int)arg3 stroke:(id)arg4;
- (struct CGPath *)p_newSquarePath:(struct CGPoint)arg1 width:(float)arg2 pathLocation:(int)arg3 stroke:(id)arg4 context:(struct CGContext *)arg5;
- (struct CGPath *)p_newYieldPath:(struct CGPoint)arg1 width:(float)arg2 pathLocation:(int)arg3 stroke:(id)arg4;
- (struct CGPath *)p_newTrianglePath:(struct CGPoint)arg1 width:(float)arg2 pathLocation:(int)arg3 stroke:(id)arg4;
- (struct CGPath *)p_newCirclePath:(struct CGPoint)arg1 width:(float)arg2 pathLocation:(int)arg3 stroke:(id)arg4;
- (struct CGPath *)p_newPathForSymbol:(int)arg1 context:(struct CGContext *)arg2 at:(struct CGPoint)arg3 width:(float)arg4 pathLocation:(int)arg5 stroke:(id)arg6;
- (BOOL)symbolTypeIsClosed:(int)arg1;
- (float)dataPointDimension:(id)arg1 symbolType:(int)arg2 stroke:(id)arg3;
- (struct CGPath *)p_newUnitPathForSymbol:(int)arg1 symbolSize:(float)arg2 stroke:(id)arg3;

@end

