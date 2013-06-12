/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/PhotoLibrary.framework/PhotoLibrary
 */

#import <UIKit/UIView.h>
#import "PhotoLibrary-Structs.h"

@class PLCameraFocusView;

@interface PLPreviewView : UIView {
	CGPoint _touchLocation;
	PLCameraFocusView* _focusView;
	PLCameraFocusView* _autoFocusView;
	UIView* _disabledView;
	unsigned _canShowFocus : 1;
	unsigned _controlsAreVisible : 1;
}
// inherited: -(id)initWithFrame:(CGRect)frame;
-(void)_focusAtPoint:(CGPoint)point;
// inherited: -(void)touchesBegan:(id)began withEvent:(id)event;
// inherited: -(void)touchesCancelled:(id)cancelled withEvent:(id)event;
// inherited: -(void)motionEnded:(int)ended withEvent:(id)event;
-(void)setEnabled:(BOOL)enabled;
// inherited: -(BOOL)canBecomeFirstResponder;
// inherited: -(BOOL)canResignFirstResponder;
// inherited: -(void)dealloc;
-(void)removeFocusView;
-(void)showAutofocusView;
-(void)focusDidEnd;
-(void)setDontShowFocus:(BOOL)focus;
-(void)setControlsAreVisible:(BOOL)visible;
@end

