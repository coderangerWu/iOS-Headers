//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <WebUI/WBSParsecSearchResult.h>

@class NSArray, NSString, WBSParsecImageRepresentation;

@interface WBSParsecSearchITunesResult : WBSParsecSearchResult
{
    NSArray *_moreGlyphsOnFirstLineRepresentations;
    NSArray *_moreGlyphsOnSecondLineRepresentations;
    NSArray *_moreGlyphsRepresentations;
    WBSParsecImageRepresentation *_rottenTomatoesGlyph;
    BOOL _rottenTomatoesInformationOnSecondLine;
    NSString *_ratingText;
    NSString *_rottenTomatoesText;
    NSString *_descriptionFirstLine;
    NSString *_descriptionSecondLine;
    double _rating;
}

@property(readonly, nonatomic) NSString *descriptionSecondLine; // @synthesize descriptionSecondLine=_descriptionSecondLine;
@property(readonly, nonatomic) NSString *descriptionFirstLine; // @synthesize descriptionFirstLine=_descriptionFirstLine;
@property(readonly, nonatomic) BOOL rottenTomatoesInformationOnSecondLine; // @synthesize rottenTomatoesInformationOnSecondLine=_rottenTomatoesInformationOnSecondLine;
@property(readonly, nonatomic) NSString *rottenTomatoesText; // @synthesize rottenTomatoesText=_rottenTomatoesText;
@property(readonly, nonatomic) NSString *ratingText; // @synthesize ratingText=_ratingText;
@property(readonly, nonatomic) double rating; // @synthesize rating=_rating;
- (void).cxx_destruct;
- (id)rottenTomatoesGlyphWithSession:(id)arg1;
- (id)moreGlyphsOnSecondLineWithSession:(id)arg1;
- (id)moreGlyphsOnFirstLineWithSession:(id)arg1;
- (id)moreGlyphsWithSession:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

