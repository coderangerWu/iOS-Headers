/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIViewController.h"

#import "MKMapViewDelegate-Protocol.h"
#import "SLPlaceDataSourceDelegate-Protocol.h"
#import "UISearchBarDelegate-Protocol.h"
#import "UISearchDisplayDelegate-Protocol.h"
#import "UITableViewDataSource-Protocol.h"
#import "UITableViewDelegate-Protocol.h"

@class ACAccount, MKMapView, NSArray, NSBundle, NSObject<SLPlaceDataSource>, NSObject<SLSheetPlaceViewControllerDelegate>, SLPlace, SLSheetPlaceSearchController, UISearchBar, UISearchDisplayController, UITableView;

@interface SLSheetPlaceViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, UISearchBarDelegate, UISearchDisplayDelegate, MKMapViewDelegate, SLPlaceDataSourceDelegate>
{
    NSArray *_places;
    SLPlace *_selectedPlace;
    NSBundle *_effectiveBundle;
    UITableView *_tableView;
    UISearchBar *_searchBar;
    UISearchDisplayController *_searchDisplayController;
    SLSheetPlaceSearchController *_placeSearchController;
    MKMapView *_mapView;
    _Bool _searchPresented;
    _Bool _searchAnimationComplete;
    double _mapHeight;
    _Bool _searchEnabled;
    NSObject<SLSheetPlaceViewControllerDelegate> *_selectionDelegate;
    ACAccount *_account;
    NSObject<SLPlaceDataSource> *_placeDataSource;
}

@property(retain) NSObject<SLPlaceDataSource> *placeDataSource; // @synthesize placeDataSource=_placeDataSource;
@property(retain) ACAccount *account; // @synthesize account=_account;
@property(nonatomic) _Bool searchEnabled; // @synthesize searchEnabled=_searchEnabled;
@property __weak NSObject<SLSheetPlaceViewControllerDelegate> *selectionDelegate; // @synthesize selectionDelegate=_selectionDelegate;
- (void).cxx_destruct;
- (_Bool)searchDisplayController:(id)arg1 shouldReloadTableForSearchString:(id)arg2;
- (void)searchDisplayControllerDidEndSearch:(id)arg1;
- (void)searchDisplayControllerWillEndSearch:(id)arg1;
- (void)searchDisplayControllerDidBeginSearch:(id)arg1;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (_Bool)shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)loadView;
- (void)placeManager:(id)arg1 failedWithError:(id)arg2;
- (void)placeManager:(id)arg1 updatedPlaces:(id)arg2;
- (_Bool)_forceSelectPlace:(id)arg1 setMapAnnotation:(_Bool)arg2;
- (void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2;
- (void)_centerMapForPlaces;
- (void)_centerMapWithSelectedPlace:(id)arg1;
- (void)_layoutNormal;
- (void)_layoutForSearch;
- (void)_restoreFromSearch;
- (void)searchBarCancelButtonClicked:(id)arg1;
- (void)searchBarTextDidEndEditing:(id)arg1;
- (void)_presentSearch;
- (void)searchBarTextDidBeginEditing:(id)arg1;
- (_Bool)searchBarShouldBeginEditing:(id)arg1;
- (double)_mapHeightForInterfaceOrientation:(long long)arg1;
- (void)willAnimateRotationToInterfaceOrientation:(long long)arg1 duration:(double)arg2;
- (double)_preferredViewHeight;
- (struct CGSize)contentSizeForViewInPopover;
- (void)cancelButtonTapped:(id)arg1;
- (id)_placeForRow:(long long)arg1;
@property(retain) NSArray *places; // @dynamic places;
- (void)setSelectedPlace:(id)arg1;
- (CDStruct_90e2a262)_regionForPlaces:(id)arg1;
- (void)didReceiveMemoryWarning;
- (void)dealloc;
- (id)initWithPlaceDataSource:(id)arg1 effectiveBundle:(id)arg2;

@end
