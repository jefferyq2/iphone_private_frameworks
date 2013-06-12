/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
 */

#import <Foundation/NSObject.h>
#import "MediaPlayer-Structs.h"

@class MPMediaItemArtworkInternal;

@interface MPMediaItemArtwork : NSObject {
@private
	MPMediaItemArtworkInternal* _internal;
}
@property(readonly, assign, nonatomic) CGRect imageCropRect;
@property(readonly, assign, nonatomic) CGRect bounds;
-(id)_initWithItem:(id)item;
-(void)dealloc;
-(id)imageWithSize:(CGSize)size;
-(id)imageWithSize:(CGSize)size atPlaybackTime:(double)playbackTime;
-(id)item;
@end

