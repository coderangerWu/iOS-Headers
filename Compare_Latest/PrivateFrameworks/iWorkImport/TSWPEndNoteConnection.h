//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface TSWPEndNoteConnection : NSObject
{
    NSArray *_defaultFormats;
    unsigned int _failedPluginLoadingAttempts;
    BOOL _checkedEndNoteAvailability;
    CDStruct_2c3aca9f _availability;
    NSString *_format;
}

+ (void)applyEndNoteXml:(id)arg1 toCitationRecord:(id)arg2;
+ (id)currentPluginDownloadURL;
+ (id)sharedEndNoteConnection;
@property(retain) NSString *format; // @synthesize format=_format;
- (id).cxx_construct;
- (id)p_getProxyObject;
- (BOOL)getBibliographyString:(id *)arg1 andCitationStrings:(id *)arg2 forCitationInfos:(id)arg3 usingPosition:(unsigned int)arg4;
- (BOOL)getBibliographyString:(id *)arg1 andCitationStrings:(id *)arg2 forCitationRecords:(id)arg3 usingPosition:(unsigned int)arg4;
- (BOOL)getFormattedTextForCitation:(id)arg1 usingPosition:(unsigned int)arg2 outCitation:(id *)arg3 outBiblioEntry:(id *)arg4;
- (id)infosForAdjacentCitations:(id)arg1 isFootnote:(BOOL)arg2;
- (id)infoForCitation:(id)arg1 isFootnote:(BOOL)arg2;
- (id)infoForCitation:(id)arg1;
- (id)p_infoForCitation:(id)arg1 isAdjacent:(BOOL)arg2 isFootnote:(BOOL)arg3;
- (BOOL)anyOpenNonEmptyLibraries;
- (BOOL)anyOpenLibraries;
- (id)defaultStyle;
- (id)favoriteStyles;
- (id)outputStyles;
- (id)recordsForSearchString:(id)arg1 forContext:(id)arg2;
- (BOOL)launchEndNote:(BOOL)arg1;
- (BOOL)isEndNoteAvailable;
- (CDStruct_2c3aca9f)availability;
- (id)availableFormats;
- (id)formatForTag:(int)arg1;
- (int)tagForFormat:(id)arg1;
- (void)dealloc;
- (id)init;

@end

