/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/QuartzCore.framework/QuartzCore
 */

#import "QuartzCore-Structs.h"
#import <QuartzCore/CAAnimation.h>

@class NSString, NSArray, CALayer;

@interface CAMatchMoveAnimation : CAAnimation {
}
@property(assign, getter=isAdditive) BOOL additive;
@property(assign) BOOL appliesRotation;
@property(assign) BOOL appliesScale;
@property(assign) BOOL appliesY;
@property(assign) BOOL appliesX;
@property(copy) NSArray* sourcePoints;
@property(assign) BOOL targetsSuperlayer;
@property(copy) NSString* keyPath;
@property(retain) CALayer* sourceLayer;
// inherited: +(id)defaultValueForKey:(id)key;
-(void)applyForTime:(double)time presentationObject:(id)object modelObject:(id)object3;
-(Animation*)_copyRenderAnimationForLayer:(id)layer;
// inherited: -(unsigned)_propertyFlagsForLayer:(id)layer;
@end

