/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableDictionary, SBKRequest;

// Not exported
@interface SBKTransaction : NSObject
{
    SBKRequest *_activeRequest;
    NSMutableDictionary *_userInfo;
}

@property(retain) NSMutableDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property(retain) SBKRequest *activeRequest; // @synthesize activeRequest=_activeRequest;
- (void).cxx_destruct;
- (id)newRequest;
- (id)requestURL;
- (id)domain;
- (id)clampsKey;
- (void)processDataInResponse:(id)arg1 withCompletionHandler:(id)arg2;
- (id)transactionContextForKey:(id)arg1;
- (void)setTransactionContext:(id)arg1 forKey:(id)arg2;
- (id)init;

@end

