/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <GameKit/GKPlayer.h>

@class GKAuthenticateViewController, GKInvite, NSArray, NSDate, NSDictionary, NSInvocation, NSSet, NSString, UIAlertView, UIViewController;

@interface GKLocalPlayer : GKPlayer
{
    BOOL _authenticated;
    BOOL _authenticating;
    id _authenticateHandler;
    GKInvite *_acceptedInvite;
    id _authenticationCompletionHandler;
    id _validateAccountCompletionHandler;
    UIAlertView *_loginAlertView;
    UIAlertView *_currentAlert;
    NSString *_lastUsernameAttempted;
    NSInvocation *_currentFriendRequestInvocation;
    BOOL _didAuthenticate;
    BOOL _validatingAccount;
    BOOL _enteringForeground;
    unsigned int _failedLogins;
    NSSet *_friendTestSet;
    NSArray *_friendRequests;
    NSDictionary *_authenticateAlertDictionary;
    UIViewController *_rootViewController;
    UIViewController *_activeViewController;
    GKAuthenticateViewController *_authViewController;
    NSString *_lastAuthPlayerID;
    NSDate *_lastAuthDate;
    BOOL _newToGameCenter;
}

+ (id)localPlayer;
+ (id)accountName;
+ (BOOL)hasAuthenticatedAccount;
@property(nonatomic, getter=isNewToGameCenter) BOOL newToGameCenter; // @synthesize newToGameCenter=_newToGameCenter;
@property(retain, nonatomic) NSDate *lastAuthDate; // @synthesize lastAuthDate=_lastAuthDate;
@property(retain, nonatomic) NSString *lastAuthPlayerID; // @synthesize lastAuthPlayerID=_lastAuthPlayerID;
@property(retain, nonatomic) GKAuthenticateViewController *authViewController; // @synthesize authViewController=_authViewController;
@property(retain, nonatomic) UIViewController *activeViewController; // @synthesize activeViewController=_activeViewController;
@property(retain, nonatomic) UIViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property(retain, nonatomic) NSDictionary *authenticateAlertDictionary; // @synthesize authenticateAlertDictionary=_authenticateAlertDictionary;
@property(retain, nonatomic) NSArray *friendRequests; // @synthesize friendRequests=_friendRequests;
@property(retain, nonatomic) NSSet *friendTestSet; // @synthesize friendTestSet=_friendTestSet;
@property(nonatomic) unsigned int failedLogins; // @synthesize failedLogins=_failedLogins;
@property(nonatomic) BOOL enteringForeground; // @synthesize enteringForeground=_enteringForeground;
@property(nonatomic) BOOL validatingAccount; // @synthesize validatingAccount=_validatingAccount;
@property(nonatomic) BOOL didAuthenticate; // @synthesize didAuthenticate=_didAuthenticate;
@property(retain, nonatomic) NSInvocation *currentFriendRequestInvocation; // @synthesize currentFriendRequestInvocation=_currentFriendRequestInvocation;
@property(retain, nonatomic) NSString *lastUsernameAttempted; // @synthesize lastUsernameAttempted=_lastUsernameAttempted;
@property(nonatomic) UIAlertView *currentAlert; // @synthesize currentAlert=_currentAlert;
@property(retain, nonatomic) UIAlertView *loginAlertView; // @synthesize loginAlertView=_loginAlertView;
@property(copy, nonatomic) id validateAccountCompletionHandler; // @synthesize validateAccountCompletionHandler=_validateAccountCompletionHandler;
@property(copy, nonatomic) id authenticationCompletionHandler; // @synthesize authenticationCompletionHandler=_authenticationCompletionHandler;
@property(retain, nonatomic) GKInvite *acceptedInvite; // @synthesize acceptedInvite=_acceptedInvite;
@property(copy, nonatomic) id authenticateHandler; // @synthesize authenticateHandler=_authenticateHandler;
@property(nonatomic, getter=isAuthenticating) BOOL authenticating; // @synthesize authenticating=_authenticating;
@property(readonly, nonatomic, getter=isAuthenticated) BOOL authenticated; // @synthesize authenticated=_authenticated;
- (void)updateLinkedAccountsForService:(unsigned int)arg1 withAuthToken:(id)arg2 handler:(id)arg3;
- (void)linkAccounts:(BOOL)arg1 withAuthToken:(id)arg2 forService:(unsigned int)arg3 mayAskAgainLater:(BOOL)arg4 handler:(id)arg5;
- (void)incrementNumberOfResponsesForService:(unsigned int)arg1 handler:(id)arg2;
- (void)shouldAskToLinkAccountsForService:(unsigned int)arg1 handler:(id)arg2;
- (void)loadDefaultLeaderboardCategoryIDWithCompletionHandler:(id)arg1;
- (void)setDefaultLeaderboardCategoryID:(id)arg1 completionHandler:(id)arg2;
- (BOOL)hasEmailAddress:(id)arg1;
- (void)invalidatedCache:(id)arg1;
- (void)daemonInviteeRespondedToGameInvite:(id)arg1;
- (void)daemonCancelledGameInvite:(id)arg1;
- (void)daemonFetchTurnBasedEvent:(id)arg1;
- (void)daemonFetchGameInvite:(id)arg1;
- (void)reset:(id)arg1;
- (void)addFriendRequest:(id)arg1;
- (void)removeFriend:(id)arg1 block:(id)arg2;
- (void)removeFriendRequestForPlayerID:(id)arg1;
- (id)friendRequestForPlayerID:(id)arg1;
- (void)sendFriendRequest:(id)arg1 toAliases:(id)arg2 players:(id)arg3 emailAddresses:(id)arg4 twitterScreenNames:(id)arg5 facebookIDs:(id)arg6 rid:(id)arg7 block:(id)arg8;
- (void)loadFriendRequests:(id)arg1;
- (void)addEmail:(id)arg1 withCompletionHandler:(id)arg2;
- (void)authenticateWithCompletionHandler:(id)arg1;
- (void)setAuthenticated:(BOOL)arg1 oldPlayerID:(id)arg2 postNotification:(BOOL)arg3;
- (void)setAuthenticated:(BOOL)arg1 oldPlayerID:(id)arg2 postNotification:(BOOL)arg3 postPlayerDidChangeNotification:(BOOL)arg4;
- (void)loadProfilePieces:(unsigned int)arg1 withCompletionHandler:(id)arg2;
- (void)setPhoto:(id)arg1 withCompletionHandler:(id)arg2;
- (void)deletePhoto;
@property(readonly, nonatomic) BOOL canChangePhoto; // @dynamic canChangePhoto;
- (void)loadGameRecommendationsWithCompletionHandler:(id)arg1;
- (void)loadFriendRecommendationsWithCompletionHandler:(id)arg1;
- (void)loadFriendsWithCompletionHandler:(id)arg1;
- (void)addPlayerAsFriend:(id)arg1;
- (void)addPlayerIDAsFriend:(id)arg1;
- (BOOL)isFriendOfPlayerWithID:(id)arg1;
- (BOOL)isFriendOfPlayer:(id)arg1;
- (void)setFriends:(id)arg1;
- (BOOL)isFriend;
@property(readonly, nonatomic) NSArray *friends;
- (void)updateFromLocalPlayer:(id)arg1;
- (void)setInternal:(id)arg1 withFriends:(id)arg2;
- (id)displayNameWithIdentifiableName:(BOOL)arg1 quoteAlias:(BOOL)arg2;
- (id)attributedDisplayNameWithIdentifiableName:(BOOL)arg1 withFont:(id)arg2;
- (void)setStatus:(id)arg1 withCompletionHandler:(id)arg2;
- (void)setStatus:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;
- (BOOL)isLocalPlayer;
- (unsigned int)detailPieces;
- (void)_authenticateWithCompletionHandler:(id)arg1;
- (void)applicationWillEnterForeground:(id)arg1;
- (void)signOutWithCompletionHandler:(id)arg1;
- (void)showAuthenticateForInGameNavController:(id)arg1 popOnAuthenticate:(BOOL)arg2 completionHandler:(id)arg3;
- (void)showAuthenticateViewControllerForGameCenter;
- (void)validateAccountWithCompletionHandler:(id)arg1;
- (void)cancelAuthentication;
- (void)finishAuthenticationWithError:(id)arg1;
- (void)showAuthenticateViewController;
- (void)showChangePasswordViewController;
- (void)showAuthorizeViewController;
- (void)showAccountViewControllerForMode:(int)arg1;
- (void)accountViewControllerForMode:(int)arg1 completionHandler:(id)arg2;
- (void)accountViewControllerForMode:(int)arg1 email:(id)arg2 completionHandler:(id)arg3;
- (void)removeActiveViewControllerAnimated:(BOOL)arg1 completionHandler:(id)arg2;
- (void)showViewController:(id)arg1 wrapInNavController:(BOOL)arg2;
- (void)handleUnderlyingErrorForAuthenticateError:(id)arg1;
- (void)_authenticate;
- (void)callAuthHandlerWithError:(id)arg1;
- (void)_showWelcomeBanner;
- (BOOL)alertUserInStoreDemoModeEnabled;
- (void)alertAndSendFriendRequest:(id)arg1 destination:(id)arg2;
- (void)alertView:(id)arg1 didDismissWithButtonIndex:(int)arg2;
- (void)showAlertForTag:(unsigned int)arg1;
- (void)showSignInAccountRestrictedAlert;
- (void)showEditAccountRestrictedAlert;
- (void)showCreateAccountRestrictedAlert;

// Remaining properties
@property(retain, nonatomic) NSString *accountName; // @dynamic accountName;
@property(readonly, nonatomic) BOOL allowNearbyMultiplayer; // @dynamic allowNearbyMultiplayer;
@property(readonly, nonatomic, getter=isFindable) BOOL findable; // @dynamic findable;
@property(retain, nonatomic) NSString *firstName; // @dynamic firstName;
@property(retain, nonatomic) NSString *lastName; // @dynamic lastName;
@property(nonatomic, getter=isPurpleBuddyAccount) BOOL purpleBuddyAccount; // @dynamic purpleBuddyAccount;
@property(readonly, nonatomic, getter=isUnderage) BOOL underage; // @dynamic underage;

@end

