/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSData, NSDictionary, NSMutableDictionary;

@interface MRMediaRemoteState : NSObject
{
    BOOL _canBeNowPlayingApp;
    id _commandHandlerBlock;
    NSMutableDictionary *_commandHandlerBlocks;
    BOOL _isOverrideApp;
    BOOL _keepAlive;
    int _notifyRestoreClientStateForLaunch;
    int _notifyDidLaunchToken;
    NSData *_nowPlayingArtworkData;
    NSDictionary *_nowPlayingInfo;
    unsigned int _routeDiscoveryCount;
}

@property(retain, nonatomic) NSDictionary *nowPlayingInfo; // @synthesize nowPlayingInfo=_nowPlayingInfo;
@property(retain, nonatomic) NSData *nowPlayingArtworkData; // @synthesize nowPlayingArtworkData=_nowPlayingArtworkData;
@property(nonatomic) BOOL keepAlive; // @synthesize keepAlive=_keepAlive;
@property(nonatomic) BOOL isOverrideApp; // @synthesize isOverrideApp=_isOverrideApp;
@property(copy, nonatomic) id commandHandlerBlock; // @synthesize commandHandlerBlock=_commandHandlerBlock;
@property(nonatomic) BOOL canBeNowPlayingApp; // @synthesize canBeNowPlayingApp=_canBeNowPlayingApp;
- (void)endRouteDiscovery;
@property(readonly, nonatomic) NSArray *commandHandlerBlocks;
- (void)beginRouteDiscovery;
- (void)removeCommandHandlerBlockForKey:(id)arg1;
- (void)addCommandHandlerBlock:(id)arg1 forKey:(void)arg2;
- (void)_avSystemControllerServerConnectionDiedNotification:(id)arg1;
- (void)dealloc;
- (id)init;

@end

