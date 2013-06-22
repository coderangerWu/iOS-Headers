/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "NSObject.h"

@class NSBundle, NSMutableArray, NSMutableDictionary, NSString;

@interface SCROMobileBrailleDisplayInputManagerCacheObject : NSObject
{
    NSString *_driverIdentifier;
    NSString *_modelIdentifier;
    int _brailleInputMode;
    NSMutableDictionary *_commandDictionary;
    NSMutableArray *_orderedIdentifiers;
    NSBundle *_bundle;
}

@property(retain, nonatomic) NSBundle *bundle; // @synthesize bundle=_bundle;
@property(retain, nonatomic) NSMutableArray *orderedIdentifiers; // @synthesize orderedIdentifiers=_orderedIdentifiers;
@property(retain, nonatomic) NSMutableDictionary *commandDictionary; // @synthesize commandDictionary=_commandDictionary;
@property(retain, nonatomic) NSString *driverIdentifier; // @synthesize driverIdentifier=_driverIdentifier;
@property(nonatomic) int brailleInputMode; // @synthesize brailleInputMode=_brailleInputMode;
@property(retain, nonatomic) NSString *modelIdentifier; // @synthesize modelIdentifier=_modelIdentifier;
- (void)dealloc;

@end

