/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "PCLoggingDelegate-Protocol.h"

@class NSRunLoop, NSString, PCDarwinNotificationRunLoopSource, PCPersistentTimer;

@interface PCConnectionManager : NSObject <PCLoggingDelegate>
{
    int _connectionClass;
    id <PCConnectionManagerDelegate> _delegate;
    NSString *_serviceIdentifier;
    int _prefsStyle;
    int _onlyAllowedStyle;
    BOOL _onlyAllowedStyleSet;
    int _interfaceIdentifier;
    NSRunLoop *_delegateRunLoop;
    struct dispatch_queue_s *_delegateQueue;
    id <PCGrowthAlgorithm> _wwanGrowthAlgorithm;
    id <PCGrowthAlgorithm> _wifiGrowthAlgorithm;
    id <PCGrowthAlgorithm> _lastScheduledGrowthAlgorithm;
    PCDarwinNotificationRunLoopSource *_prefsChangedSource;
    PCPersistentTimer *_intervalTimer;
    PCPersistentTimer *_reconnectWakeTimer;
    PCPersistentTimer *_delayTimer;
    unsigned int _powerAssertionID;
    double _onTimeKeepAliveTime;
    double _lastResumeTime;
    double _lastStopTime;
    double _lastReachableTime;
    double _lastReconnectTime;
    double _keepAliveGracePeriod;
    unsigned int _reconnectIteration;
    int _pushIsConnectedToken;
    double _defaultPollingInterval;
    double _pollingIntervalOverride;
    BOOL _pollingIntervalOverrideSet;
    BOOL _hasStarted;
    BOOL _isRunning;
    BOOL _inCallback;
    BOOL _isInReconnectMode;
    BOOL _reconnectWithKeepAliveDelay;
    BOOL _forceManualWhenRoaming;
    BOOL _enableNonCellularConnections;
    BOOL _isReachable;
}

+ (BOOL)_isCachedKeepAliveIntervalStillValid:(double)arg1 date:(id)arg2;
+ (id)_keepAliveCachePath;
+ (id)intervalCacheDictionaries;
+ (Class)growthAlgorithmClass;
@property(readonly, nonatomic) NSString *loggingIdentifier; // @synthesize loggingIdentifier=_serviceIdentifier;
@property(nonatomic) double keepAliveGracePeriod; // @synthesize keepAliveGracePeriod=_keepAliveGracePeriod;
- (id)_stringForEvent:(int)arg1;
- (id)_stringForAction:(int)arg1;
- (id)_stringForStyle:(int)arg1;
- (void)logAtLevel:(int)arg1 format:(id)arg2 arguments:(void *)arg3;
- (void)logAtLevel:(int)arg1 format:(id)arg2;
- (void)log:(id)arg1;
- (id)_getCachedWWANKeepAliveInterval;
- (void)_saveWWANKeepAliveInterval;
- (void)_releasePowerAssertion;
- (void)_takePowerAssertionWithTimeout:(double)arg1;
- (void)_adjustInterfaceAssertions;
- (void)interfaceManagerInternetReachabilityChanged:(id)arg1;
- (void)interfaceManagerInHomeCountryStatusChanged:(id)arg1;
- (void)interfaceManagerWWANInterfaceStatusChanged:(id)arg1;
- (void)_clearTimersReleasingPowerAssertion:(BOOL)arg1;
- (void)_clearTimers;
- (void)_calloutWithEvent:(int)arg1;
- (void)_callDelegateWithEvent:(id)arg1;
- (void)_delayTimerFired;
- (void)_intervalTimerFired;
- (void)_setupKeepAliveForReconnect;
- (void)_setupTimerForPoll;
- (void)_setupTimerForPushWithKeepAliveInterval:(double)arg1;
- (void)setEnableNonCellularConnections:(BOOL)arg1;
- (BOOL)shouldClientScheduleReconnectDueToFailure;
- (void)cancelPollingIntervalOverride;
- (void)setPollingIntervalOverride:(double)arg1;
@property(readonly, nonatomic) double pollingInterval;
- (BOOL)_isPushConnected;
@property double maximumKeepAliveInterval;
@property(nonatomic) double minimumKeepAliveInterval;
@property(readonly, nonatomic) double currentKeepAliveInterval;
@property(readonly, nonatomic) BOOL isRunning;
- (void)stopAndResetManager;
- (void)stopManager;
- (void)_resolveStateWithAction:(int)arg1;
- (void)_validateActionForCurrentStyle:(int)arg1;
- (void)resumeManagerWithAction:(int)arg1;
- (void)startManager;
- (id)_currentGrowthAlgorithm;
- (void)setOnlyAllowedStyle:(int)arg1;
- (int)currentStyle;
- (void)_loadPreferencesGeneratingEvent:(BOOL)arg1;
- (void)_preferencesChanged;
- (void)dealloc;
- (id)initWithConnectionClass:(int)arg1 delegate:(id)arg2 serviceIdentifier:(id)arg3;
- (id)initWithConnectionClass:(int)arg1 interfaceIdentifier:(int)arg2 delegate:(id)arg3 serviceIdentifier:(id)arg4;
- (id)initWithConnectionClass:(int)arg1 delegate:(id)arg2 delegateQueue:(struct dispatch_queue_s *)arg3 serviceIdentifier:(id)arg4;
- (id)_initWithConnectionClass:(int)arg1 interfaceIdentifier:(int)arg2 delegate:(id)arg3 delegateQueue:(struct dispatch_queue_s *)arg4 serviceIdentifier:(id)arg5;

@end
