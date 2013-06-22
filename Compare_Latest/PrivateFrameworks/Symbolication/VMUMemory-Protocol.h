/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject-Protocol.h"

@protocol VMUMemory <NSObject>
- (id)swappedView;
- (id)view;
- (id)memoryFromSubRange:(struct _VMURange)arg1 mapToAddress:(unsigned long long)arg2 architecture:(id)arg3;
- (id)memoryAtAddress:(unsigned long long)arg1 maxSize:(unsigned long long)arg2;
- (BOOL)isContiguous;
- (id)architecture;
- (struct _VMURange)addressRange;
@end

