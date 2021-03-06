/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <CoreData/PFUbiquityImportOperation.h>

#import "NSManagedObjectContextFaultingDelegate-Protocol.h"

@class NSError, NSManagedObjectContext, NSMutableDictionary, NSMutableSet, NSObject<_PFUbiquityRecordImportOperationDelegate>, NSPersistentStoreCoordinator, PFUbiquityImportContext, PFUbiquityKnowledgeVector, PFUbiquitySwitchboardEntry, PFUbiquityTransactionLog;

// Not exported
@interface _PFUbiquityRecordImportOperation : PFUbiquityImportOperation <NSManagedObjectContextFaultingDelegate>
{
    NSManagedObjectContext *_moc;
    NSPersistentStoreCoordinator *_psc;
    PFUbiquityTransactionLog *_transactionLog;
    PFUbiquitySwitchboardEntry *_entry;
    NSMutableSet *_insertedObjectIDs;
    NSMutableSet *_updatedObjectIDs;
    NSMutableSet *_deletedObjectIDs;
    PFUbiquityKnowledgeVector *_logScore;
    NSMutableDictionary *_resolvedConflicts;
    _Bool _lockedExistingCoord;
    PFUbiquityKnowledgeVector *_initialStoreKnowledgeVector;
    PFUbiquityKnowledgeVector *_updatedStoreKnowledgeVector;
    PFUbiquityImportContext *_importContext;
    _Bool _success;
    _Bool _transactionDidRollback;
    _Bool _wroteKV;
    int _inMemorySequenceNumber;
    NSError *_operationError;
    NSMutableDictionary *_relationshipsToObjectIDsToCheck;
}

@property(readonly, nonatomic) _Bool wroteKV; // @synthesize wroteKV=_wroteKV;
@property(readonly, nonatomic) NSError *operationError; // @synthesize operationError=_operationError;
@property(readonly, nonatomic) _Bool success; // @synthesize success=_success;
@property(readonly, nonatomic) _Bool transactionDidRollBack; // @synthesize transactionDidRollBack=_transactionDidRollback;
@property(retain, nonatomic) PFUbiquityKnowledgeVector *updatedStoreKnowledgeVector; // @synthesize updatedStoreKnowledgeVector=_updatedStoreKnowledgeVector;
@property(retain, nonatomic) PFUbiquityImportContext *importContext; // @synthesize importContext=_importContext;
@property(readonly) PFUbiquityKnowledgeVector *initialStoreKnowledgeVector; // @synthesize initialStoreKnowledgeVector=_initialStoreKnowledgeVector;
@property _Bool lockedExistingCoord; // @synthesize lockedExistingCoord=_lockedExistingCoord;
@property(retain, nonatomic) PFUbiquityKnowledgeVector *logScore; // @synthesize logScore=_logScore;
@property(readonly, nonatomic) NSMutableDictionary *resolvedConflicts; // @synthesize resolvedConflicts=_resolvedConflicts;
@property(readonly, nonatomic) NSMutableSet *deletedObjectIDs; // @synthesize deletedObjectIDs=_deletedObjectIDs;
@property(readonly, nonatomic) NSMutableSet *updatedObjectIDs; // @synthesize updatedObjectIDs=_updatedObjectIDs;
@property(readonly, nonatomic) NSMutableSet *insertedObjectIDs; // @synthesize insertedObjectIDs=_insertedObjectIDs;
@property(readonly, nonatomic) PFUbiquityTransactionLog *transactionLog; // @synthesize transactionLog=_transactionLog;
@property(readonly) NSPersistentStoreCoordinator *psc; // @synthesize psc=_psc;
@property(readonly) NSManagedObjectContext *moc; // @synthesize moc=_moc;
- (long long)context:(id)arg1 shouldHandleInaccessibleFault:(id)arg2 forObjectID:(id)arg3 andTrigger:(id)arg4;
- (id)description;
- (void)respondToStoreTransactionStateChangeNotification:(id)arg1;
- (_Bool)fillManagedObject:(id)arg1 withGlobalID:(id)arg2 fromUbiquityDictionary:(id)arg3 missingObjects:(id)arg4 importContext:(id)arg5 withError:(id *)arg6;
- (_Bool)processObjects:(id)arg1 withState:(int)arg2 andImportContext:(id)arg3 outError:(id *)arg4;
- (void)main;
- (_Bool)applyChangesFromStoreSaveSnapshot:(id)arg1 withImportContext:(id)arg2 withError:(id *)arg3;
- (void)notifyDelegateOfError:(id)arg1;
- (id)retainedDelegate;
@property NSObject<_PFUbiquityRecordImportOperationDelegate> *delegate;
- (void)cancel;
- (id)copy;
- (void)dealloc;
- (id)initWithTransactionLog:(id)arg1 persistentStore:(id)arg2 andLocalPeerID:(id)arg3;
- (id)init;

@end

