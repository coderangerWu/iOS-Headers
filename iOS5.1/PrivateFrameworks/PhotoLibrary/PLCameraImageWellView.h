/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import "UIView.h"

@class CAShapeLayer, UIImage, UIImageView;

@interface PLCameraImageWellView : UIView
{
    UIImage *_thumbnailImage;
    int _buttonBarStyle;
    UIImageView *_containerImageView;
    UIImageView *_thumbnailImageView;
    UIView *_thumbnailOverlayView;
    CAShapeLayer *_thumbnailMaskLayer;
    BOOL _watchingOrientationChanges;
    int _deviceOrientation;
}

+ (float)imageWellCornerRadius;
- (void)setButtonOrientation:(int)arg1 animated:(BOOL)arg2;
- (void)_deviceOrientationChanged:(id)arg1;
- (void)_stopWatchingDeviceOrientationChanges;
- (void)_startWatchingDeviceOrientationChanges;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)_setImageViewHighlighted:(BOOL)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (id)thumbnailImage;
- (struct CGRect)thumbnailFrame;
- (void)addMaskedSubview:(id)arg1;
- (void)beginContentFadeOutWithDuration:(float)arg1;
- (void)setThumbnailImage:(id)arg1;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1;
- (void)setEnabled:(BOOL)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 image:(id)arg2 buttonBarStyle:(int)arg3;

@end

