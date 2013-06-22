/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iPodUI/IUMediaQueriesDataSource.h>

@interface IUPlaylistDataSource : IUMediaQueriesDataSource
{
    unsigned long long _selectedPlaylistPersistentID;
}

+ (int)mediaEntityType;
@property(nonatomic) unsigned long long selectedPlaylistPersistentID; // @synthesize selectedPlaylistPersistentID=_selectedPlaylistPersistentID;
- (id)_activeOnTheGoPlaylist;
- (id)_activeGeniusPlaylist;
- (BOOL)_isRootLevel;
- (void)_playlistsChangedNotification:(id)arg1;
- (void)_isGeniusEnabledDidChangeNotification:(id)arg1;
- (id)entitiesForQuery:(id)arg1;
- (id)viewControllerContextForIndex:(unsigned int)arg1;
- (id)deleteConfirmationAlertViewForIndex:(unsigned int)arg1;
- (id)deleteConfirmationSheetForIndex:(unsigned int)arg1;
- (BOOL)deleteIndexesInRange:(struct _NSRange)arg1;
- (void)clearCachedActionState;
- (void)cacheActionStateForActionWithContext:(id)arg1;
- (BOOL)allowsDeletion;
- (id)viewControllerContextForSpecifier:(id)arg1;
- (id)contextForContext:(id)arg1 redirectType:(int)arg2;
@property(readonly, nonatomic) BOOL shouldShowActiveOnTheGoPlaylist;
@property(readonly, nonatomic) BOOL shouldShowActiveGeniusPlaylist;
- (int)rowIndexOfPlaylistWithPersistentUID:(unsigned long long)arg1;
- (void)dealloc;
- (id)init;

@end

