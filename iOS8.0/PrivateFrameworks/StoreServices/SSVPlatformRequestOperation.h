//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class NSArray, NSMutableDictionary, NSNumber, NSObject<OS_dispatch_queue>, NSString, SSVPlatformContext;

@interface SSVPlatformRequestOperation : NSOperation
{
    NSMutableDictionary *_additionalParameters;
    NSString *_caller;
    SSVPlatformContext *_context;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSArray *_itemIdentifiers;
    NSString *_imageProfile;
    NSString *_keyProfile;
    int _personalizationStyle;
    CDUnknownBlockType _responseBlock;
    NSString *_storeFrontSuffix;
    NSNumber *_timeoutInterval;
    NSString *_userAgent;
}

- (void).cxx_destruct;
- (id)_URLBagContext;
- (void)_makeLookupRequestWithPersonalizationStyle:(int)arg1;
- (void)_makeLocalMescalRequest;
- (void)_makeLocalJSSignRequest;
- (id)_lookupWithRequest:(id)arg1 error:(id *)arg2;
- (void)_enumerateQueryParametersUsingBlock:(CDUnknownBlockType)arg1;
- (id)_callerValue;
- (void)_setUserAgent:(id)arg1;
- (void)_setCaller:(id)arg1;
- (void)main;
- (id)valueForRequestParameter:(id)arg1;
@property(copy) NSNumber *timeoutInterval;
@property(copy) NSString *storeFrontSuffix;
- (void)setValue:(id)arg1 forRequestParameter:(id)arg2;
@property(copy) CDUnknownBlockType responseBlock;
@property int personalizationStyle;
@property(copy) NSString *keyProfile;
@property(copy) NSArray *itemIdentifiers;
@property(copy) NSString *imageProfile;
- (id)initWithPlatformContext:(id)arg1;
- (id)init;

@end

