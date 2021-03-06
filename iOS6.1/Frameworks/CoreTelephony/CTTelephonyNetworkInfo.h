/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class CTCarrier, CTRadioAccessTechnology;

@interface CTTelephonyNetworkInfo : NSObject
{
    void *_internal;
    CTCarrier *_subscriberCellularProvider;
    id _subscriberCellularProviderDidUpdateNotifier;
    CTRadioAccessTechnology *_radioAccessTechnology;
}

@property(retain, nonatomic) CTRadioAccessTechnology *radioAccessTechnology; // @synthesize radioAccessTechnology=_radioAccessTechnology;
@property(retain) CTCarrier *subscriberCellularProvider; // @synthesize subscriberCellularProvider=_subscriberCellularProvider;
- (void)postUpdatesIfNecessary;
- (void)handleNotificationFromConnection:(void *)arg1 ofType:(id)arg2 withInfo:(id)arg3;
- (BOOL)updateNetworkInfoAndShouldNotifyClient:(char *)arg1;
- (BOOL)getAllowsVOIP:(char *)arg1 withCTError:(CDStruct_1ef3fb1f *)arg2;
- (BOOL)getMobileNetworkCode:(id)arg1 withCTError:(CDStruct_1ef3fb1f *)arg2;
- (BOOL)getMobileCountryCode:(id)arg1 andIsoCountryCode:(id)arg2 withCTError:(CDStruct_1ef3fb1f *)arg3;
- (BOOL)getCarrierName:(id)arg1 withCTError:(CDStruct_1ef3fb1f *)arg2;
@property(copy, nonatomic) id subscriberCellularProviderDidUpdateNotifier;
- (void)dealloc;
- (id)init;
- (void)cleanUpServerConnection;
- (BOOL)setUpServerConnection;

@end

