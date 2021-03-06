/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <ChatKit/CKTranscriptCell.h>

@class CKGradientView, IMService, UIImageView, UIView<CKGradientReferenceView>;

@interface CKTranscriptServiceCell : CKTranscriptCell
{
    IMService *_service;
    UIImageView *_mask;
    CKGradientView *_gradientView;
}

@property(retain, nonatomic) CKGradientView *gradientView; // @synthesize gradientView=_gradientView;
@property(retain, nonatomic) UIImageView *mask; // @synthesize mask=_mask;
@property(retain, nonatomic) IMService *service; // @synthesize service=_service;
- (id)maskImage;
- (void)contentSizeCategoryDidChange:(id)arg1;
@property(retain, nonatomic) UIView<CKGradientReferenceView> *gradientReferenceView; // @dynamic gradientReferenceView;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)dealloc;

@end

