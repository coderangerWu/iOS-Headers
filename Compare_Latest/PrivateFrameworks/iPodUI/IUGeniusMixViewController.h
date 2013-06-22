/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iPodUI/IUiPodViewController.h>

#import "IUGeniusGridViewDelegate-Protocol.h"
#import "SSDownloadManagerObserver-Protocol.h"
#import "UIScrollViewDelegate-Protocol.h"

@class IUGeniusGridView, MPGeniusMix, NSMutableArray, NSMutableSet, NSTimer, UIImageView, UIPageControl, UIScrollView, UITableViewCell;

@interface IUGeniusMixViewController : IUiPodViewController <IUGeniusGridViewDelegate, SSDownloadManagerObserver, UIScrollViewDelegate>
{
    UIImageView *_artworkImageView;
    BOOL _didPushMix;
    IUGeniusGridView *_flippedGridView;
    NSMutableArray *_gridViews;
    BOOL _isObservingDownloads;
    BOOL _isZooming;
    UITableViewCell *_moreListTableViewCell;
    NSTimer *_navBarUpdateTimer;
    UIPageControl *_pageControl;
    UIScrollView *_scrollView;
    BOOL _shouldUpdateNavBar;
    NSMutableSet *_unusedGridViewPool;
}

- (void)_zoomOutDidStop;
- (void)_zoomArtworkOut;
- (void)_zoomArtworkInForDataSource:(id)arg1;
- (id)_viewControllerContextForCurrentPage;
- (void)_unloadGridViews;
- (void)_updateNavigationBarForCurrentPageAnimated:(BOOL)arg1;
- (void)_reloadDataWithSelectedMix:(id)arg1;
- (void)_pruneGridViewPages;
- (int)_playingGeniusMixPage;
- (int)_pageForContentOffset;
- (BOOL)_hasGridViewForPage:(int)arg1;
- (id)_geniusMixDataSource;
- (void)_flipGridView:(id)arg1 toOrientation:(int)arg2 animated:(BOOL)arg3;
- (void)_enqueueGridViewForReuse:(id)arg1;
- (id)_dequeueExistingGridView;
- (BOOL)_currentPageIsPlayingGeniusMix;
- (void)_createGridViewIfNecessaryForPage:(int)arg1;
- (struct CGPoint)_contentOffsetForPage:(int)arg1;
- (struct CGPoint)_contentOffsetForCurrentPage;
@property(readonly, nonatomic) MPGeniusMix *selectedMix;
- (void)_nowPlayingItemDidChange:(id)arg1;
- (void)_networkTypeDidChangeNotification:(id)arg1;
- (void)downloadManager:(id)arg1 downloadStatesDidChange:(id)arg2;
- (void)geniusGridViewWasTapped:(id)arg1;
- (void)_pageControlValueDidChange:(id)arg1;
- (void)_downloadMixForCurrentPage:(id)arg1;
- (void)_cancelDownloadingMixForCurrentPage:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewDidEndDragging:(id)arg1 willDecelerate:(BOOL)arg2;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)reloadData;
- (int)navigationTransition;
- (void)viewWillDisappear:(BOOL)arg1;
- (void)viewWillAppear:(BOOL)arg1;
- (void)unregisterForPlayerNotifications;
- (void)registerForPlayerNotifications;
- (void)viewDidDisappear:(BOOL)arg1;
- (id)moreListTableCell;
- (id)_moreListTitle;
- (void)loadView;
- (void)dealloc;
- (id)init;

@end

