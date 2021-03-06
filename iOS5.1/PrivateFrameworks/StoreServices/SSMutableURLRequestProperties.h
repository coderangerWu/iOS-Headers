/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <StoreServices/SSURLRequestProperties.h>

@class NSArray, NSData, NSDictionary, NSInputStream, NSString, NSURL;

@interface SSMutableURLRequestProperties : SSURLRequestProperties
{
}

@property(copy) NSArray *URLs; // @dynamic URLs;
@property(copy) id URLBagURLBlock; // @dynamic URLBagURLBlock;
@property int URLBagType; // @dynamic URLBagType;
@property BOOL shouldProcessProtocol; // @dynamic shouldProcessProtocol;
@property(retain) NSInputStream *HTTPBodyStream; // @dynamic HTTPBodyStream;
- (void)setValue:(id)arg1 forRequestParameter:(id)arg2;
- (void)setValue:(id)arg1 forHTTPHeaderField:(id)arg2;
@property(copy) NSArray *userAgentComponents; // @dynamic userAgentComponents;
@property(retain) NSURL *URL; // @dynamic URL;
@property(copy) NSString *URLBagKey; // @dynamic URLBagKey;
@property double timeoutInterval; // @dynamic timeoutInterval;
@property(copy) NSDictionary *requestParameters; // @dynamic requestParameters;
@property(getter=isITunesStoreRequest) BOOL ITunesStoreRequest; // @dynamic ITunesStoreRequest;
@property(copy) NSString *HTTPMethod; // @dynamic HTTPMethod;
@property(copy) NSDictionary *HTTPHeaders; // @dynamic HTTPHeaders;
@property(copy) NSData *HTTPBody; // @dynamic HTTPBody;
@property long long expectedContentLength; // @dynamic expectedContentLength;
@property(copy) NSString *clientIdentifier; // @dynamic clientIdentifier;
@property unsigned int cachePolicy; // @dynamic cachePolicy;
@property int allowedRetryCount; // @dynamic allowedRetryCount;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

