/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <QuartzCore/CALayer.h>

#import "EAGLDrawable-Protocol.h"

@class NSDictionary;

@interface CAEAGLLayer : CALayer <EAGLDrawable>
{
    struct _CAEAGLNativeWindow *_win;
}

+ (BOOL)CA_automaticallyNotifiesObservers:(Class)arg1;
+ (id)defaultValueForKey:(id)arg1;
@property(copy) NSDictionary *drawableProperties;
- (void)_didCommitLayer:(struct Transaction *)arg1;
- (void)_display;
- (void)layerDidBecomeVisible:(BOOL)arg1;
- (void)dealloc;
@property(readonly) struct _EAGLNativeWindowObject *nativeWindow;
- (void)didChangeValueForKey:(id)arg1;
- (BOOL)shouldArchiveValueForKey:(id)arg1;
@property(getter=isAsynchronous) BOOL asynchronous;

@end

