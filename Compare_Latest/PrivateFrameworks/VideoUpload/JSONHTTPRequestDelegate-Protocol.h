/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol JSONHTTPRequestDelegate <NSObject>
- (void)request:(id)arg1 didFailWithError:(id)arg2;
- (void)request:(id)arg1 didReceiveObject:(id)arg2;

@optional
- (void)request:(id)arg1 hasWrittenBytes:(int)arg2 expectsToWrite:(int)arg3;
@end

