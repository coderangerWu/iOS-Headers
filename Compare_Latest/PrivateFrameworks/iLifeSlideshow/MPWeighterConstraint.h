/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSArray, NSDictionary, NSString;

@interface MPWeighterConstraint : NSObject
{
    int numOfImages;
    NSDictionary *nextConstraints;
    NSString *presetID;
    int movieCount;
    BOOL moviesOnly;
    BOOL ignoreMovies;
    int wideLandscape;
    int square;
    int landscape;
    int portrait;
    int hBreaks;
    int vBreaks;
    int supportsHBreaks;
    int supportsVBreaks;
    int allBreaks;
    BOOL hasBreak;
    NSArray *maxAspectRatios;
    NSArray *minAspectRatios;
    NSArray *tags;
    BOOL tagsOnSourceOnly;
    BOOL shelf;
}

@property(retain, nonatomic) NSArray *tags; // @synthesize tags;
@property(retain, nonatomic) NSArray *minAspectRatios; // @synthesize minAspectRatios;
@property(retain, nonatomic) NSArray *maxAspectRatios; // @synthesize maxAspectRatios;
@property(retain, nonatomic) NSString *presetID; // @synthesize presetID;
@property(retain, nonatomic) NSDictionary *nextConstraints; // @synthesize nextConstraints;
- (void)dealloc;
- (id)init;

@end

