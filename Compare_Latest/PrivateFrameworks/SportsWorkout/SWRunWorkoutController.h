/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "CLLocationManagerDelegate-Protocol.h"

@class CLLocation, CLLocationManager, NSDictionary, NSMutableArray, NSString, NSTimer, SWDataController, SWDataControllerSnapshotObserver, SWFastestDistanceWindowObserver, SWIntervalSnapshotObserver, SWRemote, SWRunSensor, SWRunWorkout, SWRunWorkoutPreset, SWUserInteractionSnapshotObserver;

@interface SWRunWorkoutController : NSObject <CLLocationManagerDelegate>
{
    SWRunSensor *_sensor;
    SWRemote *_remote;
    SWRunWorkout *_workout;
    NSString *_workoutState;
    BOOL _hasEverStarted;
    BOOL _hasFiredBeginningWorkoutPrompt;
    BOOL _sensorBatteryIsLowNotificationSent;
    SWRunWorkoutPreset *_preset;
    BOOL _isWalk;
    NSMutableArray *_workoutObservers;
    CLLocationManager *_locationManager;
    NSTimer *_workoutObserverTimer;
    unsigned int _previousObservedElapsedTimeInSeconds;
    float _previousObservedPaceInSecondsPerMile;
    float _previousObservedDistanceInMiles;
    float _previousObservedCalories;
    CLLocation *_previousObservedLocation;
    SWIntervalSnapshotObserver *_mileSnapshotObserver;
    SWIntervalSnapshotObserver *_kmSnapshotObserver;
    SWIntervalSnapshotObserver *_tenSecondSnapshotObserver;
    SWFastestDistanceWindowObserver *_fastestMileObserver;
    SWFastestDistanceWindowObserver *_fastestKilometerObserver;
    SWDataControllerSnapshotObserver *_dataControllerSnapshotObserver;
    SWUserInteractionSnapshotObserver *_userInteractionSnapshotObserver;
    SWDataController *_dataController;
}

+ (id)distanceUnitForString:(id)arg1;
+ (id)goalTypeForString:(id)arg1;
+ (float)kgsToLbs:(float)arg1;
+ (float)lbsToKgs:(float)arg1;
+ (float)secondsPerKmToSecondsPerMile:(float)arg1;
+ (float)secondsPerMileToSecondsPerKm:(float)arg1;
+ (float)kmToMiles:(float)arg1;
+ (float)milesToKm:(float)arg1;
+ (id)distanceDisplayUnitsForPreferences;
+ (BOOL)shouldUseKilometersForDistanceWithWorkoutSummary:(id)arg1;
+ (BOOL)shouldUseKilometersForPaceWithWorkoutSummary:(id)arg1;
+ (id)__uniqueIdentifier;
+ (id)__systemVersion;
+ (void)disableSDA;
+ (void)enableSDA;
+ (void)resetDefaultController;
+ (id)defaultController;
+ (void)__releaseWorkoutInProgressFileLock;
+ (BOOL)__takeWorkoutInProgressFileLock;
+ (BOOL)isWorkoutInProgressOnSystem;
@property(readonly, nonatomic) SWDataController *dataController; // @synthesize dataController=_dataController;
@property(readonly, nonatomic) BOOL hasEverStarted; // @synthesize hasEverStarted=_hasEverStarted;
@property(readonly, nonatomic) NSString *workoutState; // @synthesize workoutState=_workoutState;
@property(readonly, nonatomic) SWRemote *remote; // @synthesize remote=_remote;
@property(readonly, nonatomic) SWRunSensor *sensor; // @synthesize sensor=_sensor;
- (id)_powerSongPersistentUIDString;
- (void)playPowerSong;
@property(readonly, nonatomic) NSString *powerSongName; // @dynamic powerSongName;
@property(readonly, nonatomic) BOOL hasPowerSong; // @dynamic hasPowerSong;
- (void)_updateWorkoutObserversForUserEvent:(id)arg1;
- (void)_updateWorkoutObserversForOldState:(id)arg1 newState:(id)arg2;
- (void)_updateWorkoutObserversForTimer:(id)arg1;
- (void)_cancelWorkoutObserverTimer;
- (void)_startWorkoutObserverTimer;
- (BOOL)_shouldRecordLocation;
- (void)unregisterWorkoutObserver:(id)arg1;
- (void)registerWorkoutObserver:(id)arg1;
- (void)resetCalibration;
- (BOOL)saveCalibrationDataWithAdjustedDistanceInMiles:(float)arg1;
- (BOOL)saveCalibrationData;
@property(readonly, nonatomic) float maxCalibrationDistanceMiles; // @dynamic maxCalibrationDistanceMiles;
@property(readonly, nonatomic) float minCalibrationDistanceMiles; // @dynamic minCalibrationDistanceMiles;
@property(readonly, nonatomic) BOOL canBeUsedForWalkCalibration; // @dynamic canBeUsedForWalkCalibration;
@property(readonly, nonatomic) BOOL canBeUsedForRunCalibration; // @dynamic canBeUsedForRunCalibration;
@property(readonly, nonatomic) BOOL isCalibratedForRun; // @dynamic isCalibratedForRun;
@property(readonly, nonatomic) BOOL isCalibratedForWalk; // @dynamic isCalibratedForWalk;
- (void)stopVoicePrompts;
- (void)playOnDemandPrompt;
@property(nonatomic) BOOL isCalibration; // @dynamic isCalibration;
@property(retain, nonatomic) SWRunWorkoutPreset *preset; // @dynamic preset;
@property(readonly, nonatomic) NSDictionary *workoutData; // @dynamic workoutData;
- (void)togglePauseResumeWorkoutFromHeadset;
- (void)_postNotificationName:(id)arg1 userInfo:(id)arg2;
- (void)_postNotificationName:(id)arg1;
- (void)endWorkout;
- (void)pauseWorkout;
- (void)activateWorkout;
- (void)prepareToActivateWorkout;
- (void)_searchStateChangedNotification:(id)arg1;
- (void)_beginSearchingForSensorAfterLink;
- (void)_linkStateChangedNotification:(id)arg1;
- (void)_setWorkoutState:(id)arg1;
- (void)_remoteCommandIssued:(id)arg1;
- (void)unlinkRemote;
- (void)refreshSettings;
- (void)dealloc;
- (id)initWithSensor:(id)arg1 remote:(id)arg2;

@end

