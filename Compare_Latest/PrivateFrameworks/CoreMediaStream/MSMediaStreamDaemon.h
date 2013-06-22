/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreMediaStream/MSDaemon.h>

@class NSCountedSet;

@interface MSMediaStreamDaemon : MSDaemon
{
    id <MSMediaStreamDaemonDelegate> _delegate;
    NSCountedSet *_retainedObjects;
}

@property(nonatomic) id <MSMediaStreamDaemonDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (BOOL)mayDownloadPersonID:(id)arg1;
- (void)didReceivePushNotificationForPersonID:(id)arg1;
- (void)didReceiveGlobalResetSyncForPersonID:(id)arg1;
- (void)didExceedPublishQuotaForPersonID:(id)arg1 retryDate:(id)arg2;
- (void)didReceiveAuthenticationSuccessForPersonID:(id)arg1;
- (void)didReceiveAuthenticationFailureForPersonID:(id)arg1;
- (void)showInvitationFailureAlertForPersonID:(id)arg1 failures:(id)arg2;
- (void)didReceiveNewShareState:(id)arg1 oldShareState:(id)arg2 forPersonID:(id)arg3;
- (void)stop;
- (void)start;
- (void)deleteAssetCollections:(id)arg1 forPersonID:(id)arg2;
- (void)didReceiveNewServerSideConfigurationForPersonID:(id)arg1;
- (void)refreshServerSideConfigurationForPersonID:(id)arg1;
- (void)didReceiveServerSideConfigurationVersion:(id)arg1 forPersonID:(id)arg2;
- (id)serverSideConfigurationForPersonID:(id)arg1;
- (id)notificationStringsForShareStateTransitionOldShares:(id)arg1 newShares:(id)arg2;
- (void)_removeShareWithPersonID:(id)arg1 inArray:(id)arg2;
- (id)_findShareWithPersonID:(id)arg1 inArray:(id)arg2;
- (void)refreshShareStatesForPersonID:(id)arg1;
- (BOOL)personIDIsAcceptingInvitations:(id)arg1;
- (void)removeShare:(id)arg1 forPersonID:(id)arg2;
- (void)modifyShare:(id)arg1 forPersonID:(id)arg2;
- (void)respondToInvitation:(id)arg1 forPersonID:(id)arg2 accept:(BOOL)arg3;
- (void)sendInvitations:(id)arg1 forPersonID:(id)arg2;
- (id)invitationStringsFromInvitation:(id)arg1 targetPersonID:(id)arg2;
- (id)invitationFromPushNotificationUserInfo:(id)arg1 outSourcePersonID:(id *)arg2 outTargetPersonID:(id *)arg3;
- (void)_setShares:(id)arg1 forPersonID:(id)arg2;
- (id)sharesForPersonID:(id)arg1;
- (id)ownSubscribedStreamForPersonID:(id)arg1;
- (id)subscribedStreamsForPersonID:(id)arg1;
- (void)computeHashForAsset:(id)arg1 personID:(id)arg2;
- (void)resetSubscriberSyncForPersonID:(id)arg1;
- (void)pollForSubscriptionUpdatesTriggeredByPushNotification;
- (void)pollForSubscriptionUpdatesForPersonID:(id)arg1;
- (BOOL)enqueueAssetCollection:(id)arg1 personID:(id)arg2 outError:(id *)arg3;
- (void)forgetPersonID:(id)arg1;
- (void)stopAllActivities;
- (void)abortAllActivityForPersonID:(id)arg1;
- (void)retryOutstandingActivities;
- (id)_boundServerSideConfigManagerForPersonID:(id)arg1;
- (id)_boundDeleterForPersonID:(id)arg1;
- (id)_boundSharingManagerForPersonID:(id)arg1;
- (id)_boundSubscriberForPersonID:(id)arg1;
- (id)_boundPublisherForPersonID:(id)arg1;
- (void)didUnidle;
- (void)didIdle;
- (BOOL)isInRetryState;
- (BOOL)personIDHasOutstandingPublications:(id)arg1;
- (BOOL)hasOutstandingActivity;
- (id)nextActivityDate;
- (id)init;

@end

