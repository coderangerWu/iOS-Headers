//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class TSDInfoImporter;

@protocol TSDInfoImporterDelegate <NSObject>
- (void)infoImporter:(TSDInfoImporter *)arg1 needsMoviePlayabilityOnAllDevicesRequirementUsingBlock:(void (^)(BOOL))arg2;

@optional
- (void)infoImporterWillIgnoreMoviePlayabilityOnAllDevicesRequirement:(TSDInfoImporter *)arg1;
@end

