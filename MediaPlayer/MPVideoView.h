/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MediaPlayer-Structs.h"
#import "MPVideoView.h"
#import <UIKit/UIView.h>

@class MPVideoBufferLayerContainer, MPMovieSnapshotController, NSString, UIMovieSubtitlesView, CALayer;

@interface MPVideoView : UIView {
	UIView* _videoBufferContainerView;
	MPVideoBufferLayerContainer* _videoBufferContainerLayer;
	CALayer* _videoBufferLayer;
	UIMovieSubtitlesView* _subtitlesView;
	CGSize _subtitlesMargin;
	MPMovieSnapshotController* _snapshotController;
	NSString* _moviePath;
	NSString* _movieSubtitle;
	NSString* _movieTitle;
	unsigned _scaleMode;
	double _startTime;
	double _stopTime;
	unsigned _effectiveScaleMode;
	unsigned _disableFudgingScaleToFullScreen : 1;
	unsigned _requiresIntegralScreenFrame : 1;
}
@property(retain, nonatomic) NSString* movieSubtitle;
@property(retain, nonatomic) NSString* movieTitle;
@property(assign, nonatomic) unsigned scaleMode;
@property(assign, nonatomic) unsigned effectiveScaleMode;
@property(assign, nonatomic) CGSize subtitlesMargin;
@property(assign, nonatomic) double startTime;
@property(assign, nonatomic) double stopTime;
@property(readonly, assign, nonatomic) CGRect movieFrame;
@property(assign, nonatomic) BOOL requiresIntegralScreenFrame;
@property(readonly, assign, nonatomic) BOOL canChangeScaleMode;
@property(assign, nonatomic) CGSize subtitlesPadding;
-(id)initWithFrame:(CGRect)frame;
-(void)dealloc;
-(id)moviePath;
-(void)prepareAVControllerQueue;
-(void)setMovieWithPath:(id)path;
-(void)playWhenLikelyToKeepUp;
-(void)playFromBeginning;
-(void)play;
-(void)setScaleMode:(unsigned)mode duration:(float)duration;
-(void)setScaleMode:(unsigned)mode animated:(BOOL)animated;
-(void)toggleScaleMode:(BOOL)mode;
-(void)_bufferingStateChangedNotification:(id)notification;
-(void)_itemWillChangeNotification:(id)_item;
-(void)_playbackStateChangedNotification:(id)notification;
-(void)_sizeDidChangedNotification:(id)_size;
-(void)_validityChangedNotification:(id)notification;
-(void)subtitlesDidClear:(id)subtitles;
-(void)subtitlesDidUpdate:(id)subtitles;
-(void)cancelSnapshots;
-(void)scheduleThumbnailWithSize:(CGSize)size orientation:(int)orientation time:(float)time delegate:(id)delegate;
-(id)_avController;
-(BOOL)_isExactlyFullScreenWithTransform:(CGAffineTransform)transform;
-(BOOL)_isCloseToFullScreenWithTransform:(CGAffineTransform)transform;
-(BOOL)_allowFudgingScaleToFullScreen;
-(BOOL)_sizeDifferenceFromFullScreenIsLessThan:(CGSize)fullScreenIsLessThan allowingZero:(BOOL)zero withTransform:(CGAffineTransform)transform;
-(void)_layoutSublayers;
-(void)_layoutSubtitleLayers;
-(void)_layoutVideoLayers:(BOOL)layers;
-(void)insertSubview:(id)subview atIndex:(int)index;
-(void)exchangeSubviewAtIndex:(int)index withSubviewAtIndex:(int)index2;
-(void)addSubview:(id)subview;
-(void)bringSubviewToFront:(id)front;
-(void)insertSubview:(id)subview below:(id)below;
-(id)viewWithTag:(int)tag;
-(id)hitTest:(CGPoint)test withEvent:(id)event;
-(void)setFrame:(CGRect)frame;
-(void)setNeedsDisplay;
-(void)setNeedsDisplayInRect:(CGRect)rect;
@end

@interface MPVideoView (PlaybackControl)
-(id)mpavController;
-(id)avController;
-(int)bufferingStatusMask;
-(double)currentTime;
-(double)duration;
-(int)playableContentType;
-(int)playbackState;
-(void)pause;
-(void)play;
-(void)setCurrentTime:(double)time;
-(void)setCurrentTime:(double)time timeSnapOption:(int)option;
-(void)setRepeatGap:(double)gap;
-(void)setRepeatMode:(int)mode;
-(void)stop;
@end

