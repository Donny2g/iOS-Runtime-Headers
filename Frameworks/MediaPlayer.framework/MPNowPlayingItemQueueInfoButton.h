/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

@class <MPNowPlayingItemQueueInfoButtonDelegate>, NSURL, UIImage;

@interface MPNowPlayingItemQueueInfoButton : UIButton {
    NSUInteger _allowedDisplayTypes;
    <MPNowPlayingItemQueueInfoButtonDelegate> *_delegate;
    UIImage *_infoCircleImage;
    NSUInteger _infoFeederCount;
    NSInteger _infoTypeForLayout;
    NSURL *_infoURL;
    BOOL _infoURLIsTimed;
    NSInteger _layoutDisabledCount;
    NSUInteger _minSizingPositionInQueue;
    float _minSizingTextWidth;
}

@property <MPNowPlayingItemQueueInfoButtonDelegate> *delegate;
@property(retain) NSURL *infoURL;
@property NSUInteger allowedDisplayTypes;
@property(readonly) NSInteger infoDisplayType;

- (NSInteger)_activeDisplayType;
- (NSInteger)_infoDisplayTypeForURL:(id)arg1 urlIsTimed:(BOOL)arg2 feederCount:(NSUInteger)arg3 askDelegate:(BOOL)arg4;
- (float)_minSizingTextWidth;
- (BOOL)_shouldDisplaysInfoCircleImage;
- (void)_updateFeederCountInfo:(id)arg1;
- (NSUInteger)allowedDisplayTypes;
- (NSInteger)buttonType;
- (void)clearWeakReferencesToObject:(id)arg1;
- (void)clicked:(id)arg1;
- (BOOL)configureForItem:(id)arg1 atTime:(double)arg2;
- (void)configureForItem:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })imageRectForContentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (NSInteger)infoDisplayType;
- (id)infoURL;
- (id)init;
- (void)layoutSubviews;
- (void)setAllowedDisplayTypes:(NSUInteger)arg1;
- (void)setDelegate:(id)arg1;
- (void)setInfoURL:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })titleRectForContentRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)updateForItemCrossedTimeMarkerNotification:(id)arg1 currentTime:(double)arg2;

@end