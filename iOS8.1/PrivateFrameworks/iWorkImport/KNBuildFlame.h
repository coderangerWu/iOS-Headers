//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iWorkImport/KNAnimationEffect.h>

#import "KNFrameBuildAnimator.h"

@class KNBuildFlameSystem, NSString, TSDGLDataBuffer, TSDGLShader, TSDGLTextureInfo;

__attribute__((visibility("hidden")))
@interface KNBuildFlame : KNAnimationEffect <KNFrameBuildAnimator>
{
    KNBuildFlameSystem *mFlameSystem;
    TSDGLShader *mFlameShader;
    TSDGLTextureInfo *mFlameTexture;
    struct CATransform3D mBaseTransform;
    TSDGLShader *mObjectShader;
    TSDGLDataBuffer *mObjectDataBuffer;
    struct CGRect mDrawableFrame;
    struct CGRect mFrameRect;
    TSDGLShader *mFBOShader;
    TSDGLDataBuffer *mFBODataBuffer;
    unsigned int mFBOTexture;
    unsigned int mFramebuffer;
}

+ (BOOL)requiresSingleTexturePerStage;
+ (id)thumbnailImageNameForType:(int)arg1;
+ (id)defaultAttributes;
+ (void)fillLocalizedDirectionMenu:(id)arg1 forType:(int)arg2;
+ (unsigned int)directionType;
+ (id)localizedMenuString:(int)arg1;
+ (id)supportedTypes;
+ (id)animationFilter;
+ (int)animationCategory;
+ (id)animationName;
- (void)animationDidEndForTextures:(id)arg1 forBuild:(id)arg2;
- (void)renderFrameWithContext:(id)arg1;
- (void)animationWillBeginWithContext:(id)arg1;
- (struct CATransform3D)p_orthoTransformWithScale:(float)arg1 offset:(struct CGPoint)arg2;
- (void)p_setupFBOWithSize:(struct CGSize)arg1;
- (id)p_flameSystemForTR:(id)arg1 build:(id)arg2;
- (struct CGRect)frameOfEffectWithFrame:(struct CGRect)arg1 context:(id)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

@end
