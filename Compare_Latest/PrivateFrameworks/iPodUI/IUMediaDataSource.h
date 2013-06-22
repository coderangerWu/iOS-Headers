/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class IUModalContext, MPStoreCompletionOffering, NSString;

@interface IUMediaDataSource : NSObject
{
    IUModalContext *_modalContext;
    NSString *_title;
    BOOL _hasReloaded;
    BOOL _ignoresInvalidation;
    BOOL _coalesceInvalidateNotificationsSkipped;
    int _coalesceInvalidateNotifications;
    BOOL _editing;
    NSString *_backButtonTitle;
    MPStoreCompletionOffering *_completionOffering;
}

+ (BOOL)isLoadingDisabled;
+ (void)setLoadingDisabled:(BOOL)arg1;
+ (id)moreListTitleKey;
+ (id)shortNoContextNavigationTitleKey;
+ (id)tabBarItemTitleKey;
+ (int)tabBarSystemItem;
+ (id)tabBarItemIconName;
+ (struct UIEdgeInsets)tabBarItemIconImageInsets;
+ (id)defaultTitle;
@property(retain, nonatomic) MPStoreCompletionOffering *completionOffering; // @synthesize completionOffering=_completionOffering;
@property(retain, nonatomic) NSString *backButtonTitle; // @synthesize backButtonTitle=_backButtonTitle;
@property(nonatomic, getter=isEditing, setter=setIsEditing:) BOOL editing; // @synthesize editing=_editing;
@property(nonatomic) BOOL ignoresInvalidation; // @synthesize ignoresInvalidation=_ignoresInvalidation;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) IUModalContext *modalContext; // @synthesize modalContext=_modalContext;
@property(readonly, nonatomic) BOOL canShowCompletionOfferings;
@property(readonly, nonatomic) BOOL isContentDisplayEnabled;
- (int)filteredMediaTypes;
- (id)viewControllerContextForSearchCompletion;
- (id)viewControllerContextForMediaQuery:(id)arg1;
- (id)viewControllerContextForSpecifier:(id)arg1;
- (void)unloadReloadableData;
- (void)attemptToReloadDataIfNecessary;
- (void)reloadData;
- (void)endCoalescingChanges;
- (void)beginCoalescingChanges;
- (void)invalidate;
- (id)shortNoContextNavigationBackButtonTitle;
- (id)tabBarItemTitle;
- (id)newTabBarItem;
- (id)createNoContentDataSource;
- (void)configureMoreListTableCell:(id)arg1;
- (SEL)libraryHasDisplayableEntitiesSelector;
- (id)contextForContext:(id)arg1 redirectType:(int)arg2;
- (BOOL)showShuffleButtonWhenApplicable;
@property(readonly, nonatomic, getter=isRestorableNavigationPathNode) BOOL restorableNavigationPathNode;
@property(readonly, nonatomic) BOOL shouldDisplayWhenEmpty;
- (void)dealloc;
- (BOOL)shouldHideContainerNavigationBar;

@end

