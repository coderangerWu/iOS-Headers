/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <SportsWorkout/SWRunWorkoutPreset.h>

@class NSString;

@interface SWRunWorkoutPresetDistanceGoal : SWRunWorkoutPreset
{
    NSString *_customGoalUnits;
}

+ (id)newPresetGoalCustomDistanceWithAmount:(id)arg1 units:(id)arg2;
+ (id)newPresetGoalMarathon;
+ (id)newPresetGoalHalfMarathon;
+ (id)newPresetGoal10Miles;
+ (id)newPresetGoal5Miles;
+ (id)newPresetGoal2Miles;
+ (id)newPresetGoal10K;
+ (id)newPresetGoal5K;
+ (id)newPresetGoal3K;
@property(nonatomic) NSString *customGoalUnits; // @synthesize customGoalUnits=_customGoalUnits;
- (void)_fireOnDemandPromptForWorkoutController:(id)arg1 target:(id)arg2;
- (void)_fireWorkoutSummaryPromptForWorkoutController:(id)arg1 target:(id)arg2;
- (void)_fireDistanceGoalCompletedPromptForWorkoutController:(id)arg1 target:(id)arg2;
- (void)_fire100MeterDistanceFinalRushPromptForWorkoutController:(id)arg1 target:(id)arg2;
- (void)_fire200MeterDistanceFinalRushPromptForWorkoutController:(id)arg1 target:(id)arg2;
- (void)_fire300MeterDistanceFinalRushPromptForWorkoutController:(id)arg1 target:(id)arg2;
- (void)_fire400MeterDistanceFinalRushPromptForWorkoutController:(id)arg1 target:(id)arg2;
- (void)_fireDistanceHalfwayPromptForWorkoutController:(id)arg1 target:(id)arg2;
- (void)_fireMarathonSecondHalfDistanceContextPromptForWorkoutController:(id)arg1 target:(id)arg2;
- (void)_fireMarathonFirstHalfDistanceContextPromptForWorkoutController:(id)arg1 target:(id)arg2;
- (void)_fireHalfMarathonSecondHalfDistanceContextPromptForWorkoutController:(id)arg1 target:(id)arg2;
- (void)_fireHalfMarathonFirstHalfDistanceContextPromptForWorkoutController:(id)arg1 target:(id)arg2;
- (void)_fireDistanceContextPromptForWorkoutController:(id)arg1 target:(id)arg2;
- (id)distanceDisplayUnits;

@end

