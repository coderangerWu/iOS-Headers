/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GameKit/GKHostedViewController.h>

@class GKComposeRemoteViewController, GKUITheme, NSMutableArray, NSNumber, NSString;

@interface GKComposeHostedViewController : GKHostedViewController
{
    GKUITheme *_theme;
    NSMutableArray *_emailsToAddAsRecipients;
    NSNumber *_rid;
    NSMutableArray *_playerIDsToAddAsRecipients;
}

@property(retain, nonatomic) NSMutableArray *playerIDsToAddAsRecipients; // @synthesize playerIDsToAddAsRecipients=_playerIDsToAddAsRecipients;
@property(retain, nonatomic) NSNumber *rid; // @synthesize rid=_rid;
@property(retain, nonatomic) NSMutableArray *emailsToAddAsRecipients; // @synthesize emailsToAddAsRecipients=_emailsToAddAsRecipients;
@property(retain, nonatomic) GKUITheme *theme; // @synthesize theme=_theme;
- (id)_presentingViewController;
@property(copy, nonatomic) NSString *defaultMessage;
- (void)addRecipientsWithEmailAddresses:(id)arg1;
- (void)addRecipientsWithPlayerIDs:(id)arg1;
- (void)didGetRemoteViewController;
@property(readonly, nonatomic) GKComposeRemoteViewController *_remote;
- (id)hostSideViewControllerClassName;
- (id)serviceSideViewControllerClassName;
- (void)dealloc;

@end
