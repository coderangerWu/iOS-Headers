/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSString;

@interface YTUserProfile : NSObject
{
    int _age;
    NSString *_username;
    int _maxUploadDuration;
}

@property(readonly, nonatomic) int maxUploadDuration; // @synthesize maxUploadDuration=_maxUploadDuration;
@property(readonly, nonatomic) NSString *username; // @synthesize username=_username;
@property(readonly, nonatomic) int age; // @synthesize age=_age;
- (id)initWithUsername:(id)arg1 age:(int)arg2 maxUploadDuration:(int)arg3;

@end

