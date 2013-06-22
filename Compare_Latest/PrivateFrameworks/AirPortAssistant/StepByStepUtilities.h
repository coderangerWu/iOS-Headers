/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@interface StepByStepUtilities : NSObject
{
}

+ (id)productIDForNetworkOrDevice:(id)arg1;
+ (id)nameForNetworkOrDevice:(id)arg1;
+ (void)formatRecommendation:(id)arg1 fromParamDict:(id)arg2 forStep:(int)arg3 restoreString:(id *)arg4 restoreSpecificString:(id *)arg5 dontRecommendString:(id *)arg6;
+ (int)autoGuessRecommendationToMatrixTag:(id)arg1;
+ (int)matrixTagToSelectorChoice:(int)arg1;
+ (int)selectorChoiceToMatrixTag:(int)arg1;
+ (id)selectorChoiceToReplaceOption:(int)arg1;
+ (id)findSourceConfigByName:(id)arg1 fromParamDict:(id)arg2;
+ (id)findSourceNetworkByName:(id)arg1 fromParamDict:(id)arg2;
+ (id)findSourceBaseByName:(id)arg1 fromParamDict:(id)arg2;
+ (id)getProductLocalizedStringWithFormat:(id)arg1 fromParamDict:(id)arg2;
+ (int)getDeviceKindFromParamDict:(id)arg1;
+ (unsigned int)getProductIDFromParamDict:(id)arg1;

@end

