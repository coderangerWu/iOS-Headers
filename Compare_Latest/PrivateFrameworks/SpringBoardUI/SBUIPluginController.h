/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

#import "SBPluginBundleController-Protocol.h"
#import "SBUIPluginViewController-Protocol.h"

@interface SBUIPluginController : NSObject <SBPluginBundleController, SBUIPluginViewController>
{
    id <SBUIPluginControllerHost> _host;
    BOOL _isVisible;
}

@property(getter=isVisible) BOOL visible; // @synthesize visible=_isVisible;
@property id <SBUIPluginControllerHost> host; // @synthesize host=_host;
- (void)noteInterruption;
- (BOOL)handledWiredMicButtonTap;
- (void)handleBluetoothDismissal;
- (BOOL)handledMenuButtonTap;
- (BOOL)handledMenuButtonDownEvent;
- (BOOL)handledPasscodeUnlockWithCompletion:(id)arg1;
- (struct CGSize)desiredSizeForRevealMode:(int)arg1;
- (BOOL)handleActivationEvent:(int)arg1 context:(void *)arg2;
- (void)cancelPendingActivationEvent:(int)arg1;
- (void)prepareForActivationEvent:(int)arg1 afterInterval:(double)arg2;
- (BOOL)wantsActivationEvent:(int)arg1 interval:(double *)arg2;
- (BOOL)supportedAndEnabled;
- (void)registeredWithHost;
- (void)viewDidRotateFromInterfaceOrientation:(int)arg1;
- (void)viewWillAnimateRotationToInterfaceOrientation:(int)arg1;
- (void)viewWillRotateToInterfaceOrientation:(int)arg1;
- (void)viewDidDisappear;
- (void)viewWillDisappear;
- (void)viewDidAppear;
- (void)viewWillAppear;
- (id)view;
- (void)_postVisibilityDidChangeNotification;

@end

