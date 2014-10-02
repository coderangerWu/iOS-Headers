//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UIViewController.h"

#import "MPUMiniPlayerParticipant.h"

@class MPMediaEntity, NSString;

@interface UIViewController (MusicAdditions) <MPUMiniPlayerParticipant>
+ (id)music_sanitizedQueryForQuery:(id)arg1;
+ (id)music_queryForIdentifier:(id)arg1;
- (void)_music_setNoContentView:(id)arg1;
- (void)_music_setCloudLoadingView:(id)arg1;
- (id)_music_noContentView;
- (id)_music_cloudLoadingView;
- (void)_music_storeClientRestrictionsDidChangeNotification:(id)arg1;
- (void)_music_cloudControllerIsUpdateInProgressDidChangeNotification:(id)arg1;
- (void)_music_storeButtonAction:(id)arg1;
- (void)music_updateStoreNavigationItem;
- (void)_music_updateForContentChangeForInitialViewLoad:(BOOL)arg1;
- (void)music_updateForContentChange;
@property(nonatomic, getter=music_showsStoreNavigationItem, setter=music_setShowsStoreNavigationItem:) BOOL music_showsStoreNavigationItem;
@property(nonatomic, getter=music_showsNowPlayingNavigationItem, setter=music_setShowsNowPlayingNavigationItem:) BOOL music_showsNowPlayingNavigationItem;
@property(nonatomic, getter=music_showsNoContent, setter=music_setShowsNoContent:) BOOL music_showsNoContent;
@property(nonatomic, getter=music_showsMatchLoading, setter=music_setShowsMatchLoading:) BOOL music_showsMatchLoading;
@property(nonatomic, getter=music_representativeSelectedMediaEntity, setter=music_setRepresentativeSelectedMediaEntity:) MPMediaEntity *music_representativeSelectedMediaEntity;
- (BOOL)music_shouldPresentModallyInMoreList;
- (void)music_loadNoContentOrMatchLoadingViewIfAppropriate;
- (BOOL)music_hasContent;
- (BOOL)music_handleUserActivityContext:(id)arg1 containerItem:(id)arg2;
- (BOOL)music_appendCurrentUserActivityContainerItems:(id)arg1 previousViewController:(id)arg2 nextViewController:(id)arg3;
- (id)MPU_prospectivePlaybackInformation;
- (BOOL)MPU_beginPlaybackForVisibleContent;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;
@end
