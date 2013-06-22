/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "SWRunWorkoutObserver-Protocol.h"

@interface SWDataControllerSnapshotObserver : NSObject <SWRunWorkoutObserver>
{
    unsigned int _elapsedTimeOfPreviousSnapshot;
    unsigned int _snapshotIntervalInSeconds;
}

- (void)observeRunWorkoutUserEvent:(id)arg1 userEvent:(id)arg2;
- (void)observeRunWorkoutStateChange:(id)arg1 oldState:(id)arg2 newState:(id)arg3;
- (void)observeRunWorkoutControllerDataChange:(id)arg1 elapsedTime:(unsigned int)arg2 pace:(float)arg3 distance:(float)arg4 calories:(float)arg5 location:(id)arg6;
- (id)init;

@end

