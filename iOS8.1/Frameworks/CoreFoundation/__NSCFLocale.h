//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreFoundation/NSLocale.h>

__attribute__((visibility("hidden")))
@interface __NSCFLocale : NSLocale
{
}

+ (BOOL)automaticallyNotifiesObserversForKey:(id)arg1;
- (void)_setNullLocale;
- (unsigned char)_nullLocale;
- (id)_prefs;
- (id)initWithLocaleIdentifier:(id)arg1;
- (id)displayNameForKey:(id)arg1 value:(id)arg2;
- (id)objectForKey:(id)arg1;
- (void)finalize;
- (unsigned int)retainCount;
- (BOOL)_isDeallocating;
- (BOOL)_tryRetain;
- (oneway void)release;
- (id)retain;
- (unsigned int)hash;
- (BOOL)isEqual:(id)arg1;

@end

