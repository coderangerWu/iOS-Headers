/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSMutableArray;

@interface CPMemoryPool : NSObject
{
    struct _opaque_pthread_mutex_t _lock;
    NSMutableArray *_files;
    char *_label;
    unsigned long _slotLength;
}

@property(readonly, nonatomic) unsigned long slotLength; // @synthesize slotLength=_slotLength;
- (void)dealloc;
- (id)nextSlotWithBytes:(const void *)arg1 length:(unsigned long)arg2;
- (id)initWithLabel:(const char *)arg1 slotLength:(unsigned long)arg2;

@end

