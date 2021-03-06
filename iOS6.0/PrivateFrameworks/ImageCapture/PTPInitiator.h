/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray, NSMutableDictionary, NSString, PTPDeviceInfoDataset, PTPEventPacket, PTPOperationResponsePacket, PTPTransport, PTPWrappedBytes;

@interface PTPInitiator : NSObject
{
    PTPTransport *_transport;
    PTPOperationResponsePacket *_response;
    PTPEventPacket *_event;
    unsigned long _transactionID;
    unsigned short _operationCode;
    BOOL _responseReceived;
    BOOL _requestPending;
    BOOL _cancelOp;
    unsigned long _lastAddedObject;
    id _delegate;
    BOOL _sessionOpen;
    BOOL _needToReopenSession;
    NSMutableArray *_storages;
    PTPDeviceInfoDataset *_deviceInfo;
    NSMutableArray *_eventQueue;
    unsigned short _deviceVendorID;
    unsigned short _deviceProductID;
    NSString *_UUIDString;
    NSString *_deviceSerialNumberString;
    unsigned long _estimatedNumOfDownloadableObjects;
    unsigned long _numOfDownloadableObjectsPlusFolders;
    unsigned long _contentCatalogPercentCompleted;
    NSString *_userAssignedDeviceName;
    BOOL _appleDeviceHasNewFW;
    BOOL _deviceIsPairedWithThisHost;
    BOOL _deviceIsPasscodeLocked;
    BOOL _deviceIsDummyPTPDevice;
    NSMutableDictionary *_arrayOf64BitFileSizes;
    PTPWrappedBytes *_dataForTransaction;
    unsigned long long _excessReceivedDataSize;
    unsigned long long _totalFDFileSize;
    unsigned long long _totalFDReceivedSize;
    unsigned long _totalFDReportedProgress;
    double _currentFDNoteTime;
    char *_metadataBuffer;
    unsigned long _maxMetadataBufferSize;
}

- (BOOL)allowKeepAwake;
- (BOOL)isAccessRestrictedAppleDevice;
- (BOOL)requestPending;
- (void)deviceReset;
- (unsigned short)deviceStatus;
- (void)transportDeactivated;
- (void)transportActivated;
- (BOOL)setDeviceDateTime:(id)arg1;
- (double)timeOffset;
- (id)deviceDateTime;
- (BOOL)deleteFile:(id)arg1;
- (BOOL)initiateCapture;
- (unsigned short)savePartialFile:(id)arg1 fromOffset:(unsigned long long)arg2 size:(unsigned long long)arg3 to:(id)arg4;
- (unsigned short)saveFile:(id)arg1 to:(id)arg2;
- (id)thumbDataFromFile:(id)arg1 maxSize:(unsigned long)arg2 actualSize:(unsigned int *)arg3 useBuffer:(char *)arg4;
- (id)partialDataFromFile:(id)arg1 fromOffset:(unsigned long)arg2 maxSize:(unsigned long)arg3 actualSize:(unsigned int *)arg4 useBuffer:(char *)arg5;
- (id)dataFromFile:(id)arg1 maxSize:(unsigned long)arg2 actualSize:(unsigned int *)arg3 useBuffer:(char *)arg4;
- (id)objectFilesystemInfosForObjectsInStorage:(unsigned long)arg1 objectFormatCode:(unsigned long)arg2 association:(unsigned long)arg3;
- (unsigned long long)objectInfo64BitSize:(unsigned long)arg1;
- (id)objectInfosForObjectsInStorage64:(unsigned long)arg1 objectFormatCode:(unsigned long)arg2 association:(unsigned long)arg3;
- (id)objectInfosForObjectsInStorage:(unsigned long)arg1 objectFormatCode:(unsigned long)arg2 association:(unsigned long)arg3;
- (id)objectInfo:(unsigned long)arg1;
- (id)objectHandlesInStorage64:(unsigned long)arg1 objectFormatCode:(unsigned long)arg2 association:(unsigned long)arg3;
- (id)objectHandlesInStorage:(unsigned long)arg1 objectFormatCode:(unsigned long)arg2 association:(unsigned long)arg3;
- (unsigned long)numObjectsInStorage:(unsigned long)arg1 objectFormatCode:(unsigned long)arg2 association:(unsigned long)arg3;
- (id)storageForStorageID:(unsigned long)arg1;
- (void)readStorages;
- (id)storageInfo:(unsigned long)arg1;
- (id)storageIDs;
- (BOOL)closeSession;
- (BOOL)openSession;
- (BOOL)resetDevicePropertyValueForProperty:(unsigned short)arg1;
- (BOOL)setDevicePropertyValue:(id)arg1 forProperty:(unsigned short)arg2;
- (id)devicePropertyValueForProperty:(unsigned short)arg1;
- (id)devicePropertyDescDatasetForProperty:(unsigned short)arg1;
- (id)deviceInfo;
- (void)sentData:(id)arg1;
- (id)sendRequest:(id)arg1 andReceiveData:(id)arg2 excessReceivedDataSize:(unsigned long long *)arg3 timeout:(double)arg4;
- (id)sendRequest:(id)arg1 andReceiveData:(id)arg2 maxDataSize:(unsigned long)arg3 excessReceivedDataSize:(unsigned long long *)arg4 timeout:(double)arg5;
- (id)sendRequest:(id)arg1 andSendData:(id)arg2;
- (id)sendRequest:(id)arg1 excessReceivedDataSize:(unsigned long long *)arg2 timeout:(double)arg3;
- (void)issueCancelRequest:(unsigned long)arg1;
- (void)issueCancelEvent:(unsigned long)arg1;
- (BOOL)waitForResponseWithTimeout:(double)arg1 notifyProgressForFile:(id)arg2;
- (void)processUnhandledEvents;
- (void)handleDeviceRemoval;
- (void)handleReroutedEvent:(id)arg1;
- (void)handleEvent:(id)arg1;
- (void)handleResponse:(id)arg1;
- (void)handleData:(id)arg1;
- (void)appendDataBuffer:(void *)arg1 length:(unsigned long)arg2;
- (void)handleStartData:(id)arg1;
- (id)userAssignedDeviceName;
- (id)refreshAssignedDeviceName;
- (int)transportConnectionStatus;
- (void)cancel;
- (void)stop;
- (BOOL)start;
- (void)setContentCatalogPercentCompleted:(unsigned long)arg1;
- (unsigned long)contentCatalogPercentCompleted;
- (unsigned long)numOfDownloadableObjectsPlusFolders;
- (BOOL)deviceIsDummyPTPDevice;
- (BOOL)deviceIsPasscodeLocked;
- (BOOL)deviceIsPairedWithThisHost;
- (BOOL)appleDeviceHasNewFW;
- (id)UUIDString;
- (id)deviceSerialNumberString;
- (unsigned short)deviceProductID;
- (unsigned short)deviceVendorID;
- (unsigned long)maxMetadataBufferSize;
- (char *)metadataBuffer;
- (id)transport;
- (id)initiator;
- (void)setDelegate:(id)arg1;
- (id)itemForObjectHandle:(unsigned long)arg1;
- (void)dealloc;
- (id)initWithHostLocationID:(unsigned long)arg1;
- (id)initWithTargetAddress:(id)arg1 targetPort:(unsigned long)arg2 targetGUID:(id)arg3 targetName:(id)arg4 hostGUID:(id)arg5 hostName:(id)arg6;

@end

