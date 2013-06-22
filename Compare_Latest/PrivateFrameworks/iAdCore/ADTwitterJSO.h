/*
 *     Generated by class-dump 3.3.4 (64 bit).
 *
 *     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2011 by Steve Nygard.
 */

#import <iAdCore/ADJavaScriptObject.h>

@class NSArray, NSMutableArray, NSString, WebScriptObject;

@interface ADTwitterJSO : ADJavaScriptObject
{
    id <ADJSODelegate> _delegate;
    WebScriptObject *_listener;
    NSString *_text;
    NSMutableArray *_tweetImages;
    NSArray *_imageURLs;
    NSArray *_tweetURLs;
}

+ (void)initializeInContext:(struct OpaqueJSContext *)arg1;
+ (id)scriptSelectors;
+ (id)scriptingKeys;
@property(copy, nonatomic) NSArray *tweetURLs; // @synthesize tweetURLs=_tweetURLs;
@property(retain, nonatomic) NSArray *imageURLs; // @synthesize imageURLs=_imageURLs;
@property(retain, nonatomic) NSMutableArray *tweetImages; // @synthesize tweetImages=_tweetImages;
@property(retain, nonatomic) WebScriptObject *listener; // @synthesize listener=_listener;
@property(nonatomic) id <ADJSODelegate> delegate; // @synthesize delegate=_delegate;
- (void)present;
- (void)setImages:(id)arg1;
- (id)images;
- (void)setURLs:(id)arg1;
- (id)URLs;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
- (id)init;
- (void)dealloc;

@end
