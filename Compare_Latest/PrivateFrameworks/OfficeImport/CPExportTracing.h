/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <OfficeImport/CPTracing.h>

@interface CPExportTracing : CPTracing
{
    long mExportingOpstat;
    long mWritingOpstat;
}

- (id)initWithFilename:(id)arg1;
- (void)dealloc;
- (void)startExporting;
- (void)stopExporting;
- (void)startWriting;
- (void)stopWriting;

@end
