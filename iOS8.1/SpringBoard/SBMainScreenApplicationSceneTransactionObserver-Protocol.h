//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FBApplicationUpdateScenesTransaction, FBScene, NSArray;

@protocol SBMainScreenApplicationSceneTransactionObserver <NSObject>
- (void)mainScreenApplicationSceneDidCommit:(FBScene *)arg1;
- (void)mainScreenApplicationSceneWillCommit:(FBScene *)arg1;
- (void)mainScreenApplicationUpdateScenesTransactionCompleted:(FBApplicationUpdateScenesTransaction *)arg1;
- (void)mainScreenApplicationsDidCommitSceneUpdates:(NSArray *)arg1;
@end
