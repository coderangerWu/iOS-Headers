/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSDictionary, NSMutableDictionary, NSPersistentStoreCoordinator, NSString, NSURL, PFUbiquityContainerIdentifier, PFUbiquityLocation, PFUbiquityMigrationAssistant, PFUbiquityMigrationManager, PFUbiquityPeerReceipt, PFUbiquityPeerState, PFUbiquityStoreMetadata, _PFUbiquityStack;

@interface PFUbiquitySetupAssistant : NSObject
{
    NSMutableDictionary *_options;
    NSPersistentStoreCoordinator *_psc;
    NSString *_storeType;
    NSURL *_storeURL;
    BOOL _ubiquityEnabled;
    id <NSObject><NSCopying><NSCoding> _ubiquityIdentityToken;
    NSURL *_ubiquityRootURL;
    NSString *_ubiquityName;
    NSString *_localPeerID;
    NSString *_modelVersionHash;
    PFUbiquityLocation *_ubiquityRootLocation;
    _PFUbiquityStack *_stack;
    PFUbiquityStoreMetadata *_storeMetadata;
    PFUbiquityPeerState *_localPeerState;
    BOOL _hasUploadingBaseline;
    BOOL _monitorUploadingBaselineAsync;
    BOOL _didBaselineCopy;
    BOOL _storeFileExists;
    BOOL _storeFileIsReadOnly;
    BOOL _hasStoreMetadataFile;
    BOOL _hasStoreMetadataEntry;
    BOOL _hasContainerUUID;
    BOOL _hasContainerUUIDInStore;
    BOOL _needsMetadataRecovery;
    PFUbiquityPeerReceipt *_localPeerReceipt;
    PFUbiquityContainerIdentifier *_containerIdentifier;
    BOOL _hasLocalTransactionLogs;
    BOOL _scheduleBaselineRollResponse;
    BOOL _hasMigrationOptions;
    BOOL _didMigrateBaseline;
    PFUbiquityMigrationAssistant *_migrationAssistant;
    PFUbiquityMigrationManager *_migrationManager;
    BOOL _replayLogsSynchronously;
    BOOL _addLocalPeerToStoreKnowledgeVector;
}

+ (void)removeUbiquityMetadataFromStore:(id)arg1;
+ (BOOL)ubiquityMetadataTablesPresentInStore:(id)arg1;
+ (BOOL)doBasicSanityCheckForUbiquityRootURL:(id)arg1 withError:(id *)arg2;
+ (id)createDefaultLocalPeerID;
+ (id)generateMachineUUIDString;
@property(readonly, nonatomic) BOOL needsMetadataRecovery; // @synthesize needsMetadataRecovery=_needsMetadataRecovery;
@property(readonly, nonatomic) BOOL ubiquityEnabled; // @synthesize ubiquityEnabled=_ubiquityEnabled;
@property(readonly, nonatomic) NSDictionary *options; // @synthesize options=_options;
- (void)_setUbiquityRootLocation:(id)arg1 storeName:(id)arg2 localPeerID:(id)arg3 andModelVersionHash:(id)arg4;
- (BOOL)doSecondMetadataConsistencyCheckWithStore:(id)arg1 error:(id *)arg2;
- (BOOL)doFirstMetadataConsistencyCheckWithError:(id *)arg1;
- (BOOL)migrateMetadataRoot:(id *)arg1;
- (BOOL)attemptMetadataRecoveryForStore:(id)arg1 error:(id *)arg2;
- (BOOL)performPostStoreSetupWithStore:(id)arg1 error:(id *)arg2;
- (BOOL)performPreStoreSetupWithError:(id *)arg1;
- (id)migrationAssistant;
- (BOOL)validateOptionsWithError:(id *)arg1;
- (void)dealloc;
- (id)initWithPersistentStoreCoordinator:(id)arg1 andStoreOptions:(id)arg2 forPersistentStoreOfType:(id)arg3 atURL:(id)arg4;
- (id)init;

@end

