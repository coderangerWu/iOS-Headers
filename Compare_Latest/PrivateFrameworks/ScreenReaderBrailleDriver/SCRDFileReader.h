/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSFileHandle, NSThread;

@interface SCRDFileReader : NSObject
{
    id <SCRDFileReaderDelegate> _delegate;
    NSThread *_readerThread;
    NSFileHandle *_fileHandle;
    int _threadStartCount;
}

- (void)_readHandler:(id)arg1;
- (BOOL)isValid;
- (void)invalidate;
- (BOOL)hasStarted;
- (void)start;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 fileHandle:(id)arg2;

@end

