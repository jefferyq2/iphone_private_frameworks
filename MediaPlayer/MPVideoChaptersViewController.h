/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import "MPViewController.h"
#import "UITableViewDelegate.h"
#import "UITableViewDataSource.h"

@class MPVideoView, NSArray, UIMovieChapterListView;

@interface MPVideoChaptersViewController : MPViewController <UITableViewDataSource, UITableViewDelegate> {
	MPVideoView* _videoView;
	unsigned _currentMarker;
	NSArray* _chapterTimeMarkers;
	UIMovieChapterListView* _chapterListView;
	float _timeColumnWidth;
	unsigned _haveThumbnails : 1;
	unsigned _videoOutActive : 1;
}
@property(assign, nonatomic) unsigned currentMarkerIndex;
@property(retain, nonatomic) MPVideoView* videoView;
@property(retain, nonatomic) NSArray* chapterTimeMarkers;
@property(assign, nonatomic) BOOL videoOutActive;
@property(assign, nonatomic) float topPadding;
-(id)init;
-(void)dealloc;
-(void)setCurrentMarker:(unsigned)marker;
-(void)loadView;
-(void)viewDidAppear:(BOOL)view;
-(void)viewDidDisappear:(BOOL)view;
-(void)viewWillDisappear:(BOOL)view;
-(int)tableView:(id)view numberOfRowsInSection:(int)section;
-(id)tableView:(id)view cellForRowAtIndexPath:(id)indexPath;
-(void)tableView:(id)view didSelectRowAtIndexPath:(id)indexPath;
-(void)videoView:(id)view madeThumbnail:(id)thumbnail forTime:(float)time;
-(void)_reloadThumbnails;
-(void)_sizeColumnsToFit;
@end

