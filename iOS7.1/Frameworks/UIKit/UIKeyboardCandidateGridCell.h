//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateGridCell : UICollectionViewCell
{
    BOOL _dummy;
    BOOL _usesGroupHeaderAppearance;
    BOOL _shouldShowCandidateNumber;
    BOOL _secondaryCandidateAppearance;
    NSString *_text;
    NSString *_alternativeText;
    unsigned int _candidateNumber;
    unsigned int _edges;
    float _rowHeight;
    float _rightPadding;
    CDStruct_961fb75c _visualStyling;
    int _candidatesVisualStyle;
    int _textAlignment;
    float _cellPadding;
    float _minimumWidth;
    struct CGSize _size;
    struct CGSize _candidateNumberSize;
    struct CGRect _visibleBounds;
}

+ (struct CGColor *)legacy_outlineShadowColorForVisualStyling:(CDStruct_961fb75c)arg1 candidatesVisualStyle:(int)arg2;
+ (struct CGColor *)legacy_outlineColorForVisualStyling:(CDStruct_961fb75c)arg1 candidatesVisualStyle:(int)arg2;
+ (float)widthForCandidate:(id)arg1 candidateNumber:(unsigned int)arg2 visualStyle:(int)arg3;
+ (struct CGSize)sizeForGroupHeader:(id)arg1 visualStyle:(int)arg2;
+ (float)rightPaddingForIndex;
+ (id)reuseIdentifier;
@property(nonatomic) float minimumWidth; // @synthesize minimumWidth=_minimumWidth;
@property(nonatomic) float cellPadding; // @synthesize cellPadding=_cellPadding;
@property(nonatomic) struct CGSize candidateNumberSize; // @synthesize candidateNumberSize=_candidateNumberSize;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(nonatomic) int textAlignment; // @synthesize textAlignment=_textAlignment;
@property(nonatomic) int candidatesVisualStyle; // @synthesize candidatesVisualStyle=_candidatesVisualStyle;
@property(nonatomic) CDStruct_961fb75c visualStyling; // @synthesize visualStyling=_visualStyling;
@property(nonatomic) float rightPadding; // @synthesize rightPadding=_rightPadding;
@property(nonatomic) float rowHeight; // @synthesize rowHeight=_rowHeight;
@property(nonatomic) unsigned int edges; // @synthesize edges=_edges;
@property(nonatomic) BOOL secondaryCandidateAppearance; // @synthesize secondaryCandidateAppearance=_secondaryCandidateAppearance;
@property(nonatomic) struct CGRect visibleBounds; // @synthesize visibleBounds=_visibleBounds;
@property(nonatomic) BOOL shouldShowCandidateNumber; // @synthesize shouldShowCandidateNumber=_shouldShowCandidateNumber;
@property(nonatomic) unsigned int candidateNumber; // @synthesize candidateNumber=_candidateNumber;
@property(copy, nonatomic) NSString *alternativeText; // @synthesize alternativeText=_alternativeText;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(nonatomic) BOOL usesGroupHeaderAppearance; // @synthesize usesGroupHeaderAppearance=_usesGroupHeaderAppearance;
@property(nonatomic) BOOL dummy; // @synthesize dummy=_dummy;
- (void)setSelected:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
@property(readonly, nonatomic) BOOL canShowCandidateNumber;
- (void)drawRect:(struct CGRect)arg1;
- (void)drawTextWithCandidateNumber;
- (void)drawText;
- (void)drawBackgroundAndBorders;
- (void)prepareForReuse;
- (void)applyLayoutAttributes:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
