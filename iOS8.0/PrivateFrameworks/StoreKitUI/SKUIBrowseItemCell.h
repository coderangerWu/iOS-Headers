//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "UICollectionViewCell.h"

@class NSString, UIImage, UIImageView, UILabel, UIView;

@interface SKUIBrowseItemCell : UICollectionViewCell
{
    UILabel *_titleLabel;
    UILabel *_subtitleLabel;
    UIView *_borderView;
    UIView *_topBorderView;
    UIImageView *_decorationImageView;
    UIImage *_decorationImage;
    BOOL _showTopBorder;
    BOOL _hasBlueBackgroundWhenSelected;
}

@property(nonatomic) BOOL hasBlueBackgroundWhenSelected; // @synthesize hasBlueBackgroundWhenSelected=_hasBlueBackgroundWhenSelected;
@property(nonatomic) BOOL showTopBorder; // @synthesize showTopBorder=_showTopBorder;
@property(retain, nonatomic) UIImage *decorationImage; // @synthesize decorationImage=_decorationImage;
- (void).cxx_destruct;
- (void)_reloadHighlightState;
- (void)layoutSubviews;
- (void)setSelected:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
@property(retain, nonatomic) NSString *subtitle;
@property(retain, nonatomic) NSString *title;
- (id)initWithFrame:(struct CGRect)arg1;

@end

