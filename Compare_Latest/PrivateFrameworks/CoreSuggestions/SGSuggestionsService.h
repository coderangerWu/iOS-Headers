//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, SGDaemonConnection;

@interface SGSuggestionsService : NSObject
{
    SGDaemonConnection *_daemonConnection;
    NSObject<OS_dispatch_queue> *_replyQueue;
}

- (void).cxx_destruct;
- (BOOL)sendRTCLogs:(id *)arg1;
- (void)relevantABRecordIDsWithLimit:(int)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)relevantABRecordIDsWithLimit:(int)arg1 error:(id *)arg2;
- (void)predictedCCEmailAddressesWithToAddresses:(id)arg1 ccAddresses:(id)arg2 fromAddress:(id)arg3 date:(double)arg4 bounds:(id)arg5 withCompletion:(CDUnknownBlockType)arg6;
- (id)predictedCCEmailAddressesWithToAddresses:(id)arg1 ccAddresses:(id)arg2 fromAddress:(id)arg3 date:(double)arg4 bounds:(id)arg5 error:(id *)arg6;
- (void)predictedToEmailAddressesWithToAddresses:(id)arg1 ccAddresses:(id)arg2 fromAddress:(id)arg3 date:(double)arg4 bounds:(id)arg5 withCompletion:(CDUnknownBlockType)arg6;
- (id)predictedToEmailAddressesWithToAddresses:(id)arg1 ccAddresses:(id)arg2 fromAddress:(id)arg3 date:(double)arg4 bounds:(id)arg5 error:(id *)arg6;
- (void)rejectContact:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (BOOL)rejectContact:(id)arg1 error:(id *)arg2;
- (void)confirmContact:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (BOOL)confirmContact:(id)arg1 error:(id *)arg2;
- (void)rejectEvent:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (BOOL)rejectEvent:(id)arg1 error:(id *)arg2;
- (void)confirmEvent:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (BOOL)confirmEvent:(id)arg1 error:(id *)arg2;
- (void)contactFromABRecordID:(int)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)contactFromABRecordID:(int)arg1 error:(id *)arg2;
- (void)contactMatchesByEmailAddress:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)contactMatchesByEmailAddress:(id)arg1 error:(id *)arg2;
- (void)contactMatchesByPhoneNumber:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)contactMatchesByPhoneNumber:(id)arg1 error:(id *)arg2;
- (void)suggestionsFromEmailContent:(id)arg1 headers:(id)arg2 source:(id)arg3 options:(unsigned int)arg4 withCompletion:(CDUnknownBlockType)arg5;
- (id)suggestionsFromEmailContent:(id)arg1 headers:(id)arg2 source:(id)arg3 options:(unsigned int)arg4 error:(id *)arg5;
- (void)suggestEventsInFutureLimitTo:(unsigned int)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)suggestEventsInFutureLimitTo:(unsigned int)arg1 error:(id *)arg2;
- (void)suggestEventsStartingAt:(id)arg1 endingAt:(id)arg2 prefix:(id)arg3 limitTo:(unsigned int)arg4 withCompletion:(CDUnknownBlockType)arg5;
- (id)suggestEventsStartingAt:(id)arg1 endingAt:(id)arg2 prefix:(id)arg3 limitTo:(unsigned int)arg4 error:(id *)arg5;
- (void)suggestEventsStartingAt:(id)arg1 endingAt:(id)arg2 limitTo:(unsigned int)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (id)suggestEventsStartingAt:(id)arg1 endingAt:(id)arg2 limitTo:(unsigned int)arg3 error:(id *)arg4;
- (void)suggestEventsInFutureLimitTo:(unsigned int)arg1 options:(unsigned int)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)suggestEventsInFutureLimitTo:(unsigned int)arg1 options:(unsigned int)arg2 error:(id *)arg3;
- (void)suggestEventsStartingAt:(id)arg1 endingAt:(id)arg2 prefix:(id)arg3 limitTo:(unsigned int)arg4 options:(unsigned int)arg5 withCompletion:(CDUnknownBlockType)arg6;
- (id)suggestEventsStartingAt:(id)arg1 endingAt:(id)arg2 prefix:(id)arg3 limitTo:(unsigned int)arg4 options:(unsigned int)arg5 error:(id *)arg6;
- (void)suggestEventsStartingAt:(id)arg1 endingAt:(id)arg2 limitTo:(unsigned int)arg3 options:(unsigned int)arg4 withCompletion:(CDUnknownBlockType)arg5;
- (id)suggestEventsStartingAt:(id)arg1 endingAt:(id)arg2 limitTo:(unsigned int)arg3 options:(unsigned int)arg4 error:(id *)arg5;
- (void)suggestContactMatchesWithMessagingPrefix:(id)arg1 limitTo:(unsigned int)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)suggestContactMatchesWithMessagingPrefix:(id)arg1 limitTo:(unsigned int)arg2 error:(id *)arg3;
- (void)suggestContactMatchesWithFullTextSearch:(id)arg1 limitTo:(unsigned int)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)suggestContactMatchesWithFullTextSearch:(id)arg1 limitTo:(unsigned int)arg2 error:(id *)arg3;
- (void)suggestionsFromRFC822Data:(id)arg1 source:(id)arg2 options:(unsigned int)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (id)suggestionsFromRFC822Data:(id)arg1 source:(id)arg2 options:(unsigned int)arg3 error:(id *)arg4;
- (void)clearCachesFully:(BOOL)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (BOOL)clearCachesFully:(BOOL)arg1 error:(id *)arg2;
- (void)resetConfirmationAndRejectionHistoryWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)resetConfirmationAndRejectionHistory:(id *)arg1;
- (void)prepareForRealtimeExtractionWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)prepareForRealtimeExtraction:(id *)arg1;
- (BOOL)isEnabledWithError:(id *)arg1;
- (id)_remoteSuggestionManager;
- (void)dealloc;
- (id)init;

@end
