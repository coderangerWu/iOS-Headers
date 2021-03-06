//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WebPolicyDecisionListener.h"

@class NSDictionary, WebFrame;

@interface _WBUPolicyDecisionListener : NSObject <WebPolicyDecisionListener>
{
    WebFrame *_frame;
    int _navigationType;
    NSDictionary *_formMetadata;
    id <WebPolicyDecisionListener> _originalListener;
}

- (void)ignore;
- (void)download;
- (void)use;
- (void)dealloc;
- (id)initWithFrame:(id)arg1 navigationType:(int)arg2 formMetadata:(id)arg3 originalListener:(id)arg4;

@end

