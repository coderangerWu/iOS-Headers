//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <StoreServices/SSRequest.h>

#import "SSXPCCoding.h"

@class NSArray, NSNumber, NSString;

@interface SSRentalCheckoutRequest : SSRequest <SSXPCCoding>
{
    NSNumber *_accountIdentifier;
    long long _downloadIdentifier;
    NSNumber *_rentalKeyIdentifier;
    NSArray *_sinfs;
    BOOL _shouldValidateRentalInfo;
}

@property(nonatomic) BOOL shouldValidateRentalInfo; // @synthesize shouldValidateRentalInfo=_shouldValidateRentalInfo;
- (id)initWithXPCEncoding:(id)arg1;
- (id)copyXPCEncoding;
- (void)startWithConnectionResponseBlock:(CDUnknownBlockType)arg1;
- (void)startWithCompletionBlock:(CDUnknownBlockType)arg1;
@property(readonly) NSArray *sinfs;
@property(readonly) NSNumber *rentalKeyIdentifier;
@property(readonly) long long downloadIdentifier;
@property(readonly) NSNumber *accountIdentifier;
- (void)dealloc;
- (id)initWithSinfs:(id)arg1;
- (id)initWithDownloadIdentifier:(long long)arg1;
- (id)initWithAccountIdentifier:(id)arg1 rentalKeyIdentifier:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end

