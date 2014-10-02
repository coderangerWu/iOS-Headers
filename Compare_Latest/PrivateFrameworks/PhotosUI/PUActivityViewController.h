/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIActivityViewController.h"

#import "PUPhotoSharingManagerDelegate-Protocol.h"

@class NSArray, PLProgressView, PUActivityItemSourceController, PUPhotoSharingManager;

@interface PUActivityViewController : UIActivityViewController <PUPhotoSharingManagerDelegate>
{
    PUPhotoSharingManager *_sharingManager;
    struct __CFString *_aggregateKey;
    float __currentRemakerProgress;
    NSArray *_photosActivities;
    PUActivityItemSourceController *_itemSourceController;
    id <PUActivityViewControllerDelegate> _delegate;
    long long __numberOfRemakesNeeded;
    long long __numberOfRemakesCompleted;
    PLProgressView *__remakerProgressView;
}

+ (id)photosApplicationActivities;
+ (id)_defaultActivityTypeOrder;
+ (void)trackUserActivity:(id)arg1 forAssets:(id)arg2;
@property(retain, nonatomic) PLProgressView *_remakerProgressView; // @synthesize _remakerProgressView=__remakerProgressView;
@property(nonatomic) float _currentRemakerProgress; // @synthesize _currentRemakerProgress=__currentRemakerProgress;
@property(nonatomic) long long _numberOfRemakesCompleted; // @synthesize _numberOfRemakesCompleted=__numberOfRemakesCompleted;
@property(nonatomic) long long _numberOfRemakesNeeded; // @synthesize _numberOfRemakesNeeded=__numberOfRemakesNeeded;
@property(nonatomic) __weak id <PUActivityViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) PUActivityItemSourceController *itemSourceController; // @synthesize itemSourceController=_itemSourceController;
@property(readonly, nonatomic) NSArray *photosActivities; // @synthesize photosActivities=_photosActivities;
- (void).cxx_destruct;
- (void)_activityItemSourceVideoRemakingProgressChanged:(id)arg1;
- (void)_activityItemSourceVideoRemakingDidEnd:(id)arg1;
- (void)sharingManager:(id)arg1 displayVideoRemakerProgressView:(id)arg2;
- (void)_removeVideoRemakerProgressView;
- (void)_prepareVideoRemakerProgressForActivity:(id)arg1;
- (void)_cancel;
- (void)_prepareActivity:(id)arg1;
- (void)_performActivity:(id)arg1;
- (_Bool)_shouldShowSystemActivity:(id)arg1;
- (void)setCompletionHandler:(id)arg1;
- (void)setAggregateKey:(struct __CFString *)arg1;
- (void)activity:(id)arg1 showRemakerProgressView:(id)arg2;
- (void)_showRemakerProgressView:(id)arg1;
- (void)_puActivity:(id)arg1 didComplete:(_Bool)arg2;
- (void)dealloc;
- (id)initWithManagedAssets:(id)arg1 photosApplicationActivities:(id)arg2;

@end
