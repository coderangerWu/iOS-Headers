/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iLifeSlideshow/MCPlug.h>

@class MCContainerSerializer, NSDictionary, NSMutableDictionary, NSString;

@interface MCPlugSerial : MCPlug
{
    NSMutableDictionary *mTransitionAttributes;
    unsigned int mIndex;
    NSString *mTransitionID;
    double mTransitionDuration;
    MCContainerSerializer *mSupercontainer;
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
@property MCContainerSerializer *supercontainer; // @synthesize supercontainer=mSupercontainer;
@property(nonatomic) double transitionDuration; // @synthesize transitionDuration=mTransitionDuration;
@property(copy) NSString *transitionID; // @synthesize transitionID=mTransitionID;
@property(nonatomic) unsigned int index; // @synthesize index=mIndex;
- (void)_copySelfToSnapshot:(id)arg1;
@property(copy) NSDictionary *transitionAttributes;
- (void)addTransitionAttributes:(id)arg1;
- (void)setTransitionAttribute:(id)arg1 forKey:(id)arg2;
- (id)transitionAttributeForKey:(id)arg1;
- (id)imprint;
- (void)demolish;
- (id)initWithImprint:(id)arg1 andMontage:(id)arg2;

@end

