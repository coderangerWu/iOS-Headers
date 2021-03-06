//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "AAUIAccountRepairRemoteUIDelegate.h"

@class AAUIAccountRepairRemoteUI, ACAccount, NSString;

@interface AAUIRemoteUIRepairFlow : NSObject <AAUIAccountRepairRemoteUIDelegate>
{
    ACAccount *_account;
    AAUIAccountRepairRemoteUI *_remoteUI;
    CDUnknownBlockType _completion;
    id <AAUIRemoteUIRepairFlowDelegate> _delegate;
}

@property(nonatomic) __weak id <AAUIRemoteUIRepairFlowDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)accountRepairRemoteUIWillDismiss:(id)arg1;
- (void)accountRepairRemoteUIWillAppear:(id)arg1;
- (void)accountRepairRemoteUI:(id)arg1 account:(id)arg2 didFinishWithSuccess:(BOOL)arg3;
- (void)presentFlowFromViewController:(id)arg1 modal:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithAccount:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

