//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface EKTravelLookupManager : NSObject
{
}

+ (void)estimateGeolocationFromHistoricDevicePositionAtLocation:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
+ (void)geocodeAddress:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
+ (id)defaultManager;
- (void)findCoordinatesForLocation:(id)arg1 completionBlock:(CDUnknownBlockType)arg2;
- (void)_updateLocation:(id)arg1 withMapItem:(id)arg2 forRoute:(id)arg3 withCompletionBlock:(CDUnknownBlockType)arg4;
- (void)_travelTimeWithStartCoordinate:(id)arg1 endCoordinate:(id)arg2 arrivalDate:(id)arg3 withRouteType:(id)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)travelTimeFrom:(id)arg1 to:(id)arg2 arrivalDate:(id)arg3 withRouteTypes:(id)arg4 withCompletionBlock:(CDUnknownBlockType)arg5;
- (void)travelTimeFrom:(id)arg1 to:(id)arg2 arrivalDate:(id)arg3 withRouteType:(id)arg4 withCompletionBlock:(CDUnknownBlockType)arg5;

@end

