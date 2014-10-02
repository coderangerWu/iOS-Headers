/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@class NSString;

@protocol UserFSItem <NSObject>
@property(readonly, nonatomic) long long modifiedDate;
@property(readonly, nonatomic) long long createdDate;
@property(readonly, nonatomic) unsigned long long length;
@property(readonly, nonatomic, getter=isLocked) _Bool locked;
@property(readonly, nonatomic) _Bool isDirectory;
@property(readonly, nonatomic) NSString *name;
@property(readonly, nonatomic) id <UserFSVolume> volume;
@end
