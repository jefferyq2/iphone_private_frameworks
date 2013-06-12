/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "UIKit-Structs.h"
#import <UIKit/UIView.h>

@class UITextRangeView, UISelectionGrabberDot;

@interface UISelectionGrabber : UIView {
	UISelectionGrabberDot* m_dotView;
	BOOL m_isDotted;
	BOOL m_isStart;
	BOOL m_activeFlattened;
	BOOL m_alertFlattened;
	BOOL m_navigationTransitionFlattened;
	BOOL m_animating;
}
@property(assign, nonatomic) BOOL isDotted;
@property(assign, nonatomic) BOOL isStart;
@property(assign, nonatomic) BOOL alertFlattened;
@property(assign, nonatomic) BOOL activeFlattened;
@property(assign, nonatomic) BOOL navigationTransitionFlattened;
@property(assign, nonatomic) BOOL animating;
@property(readonly, assign, nonatomic) UITextRangeView* hostView;
-(id)initWithFrame:(CGRect)frame;
-(void)dealloc;
-(void)mustFlattenForAlert:(id)alert;
-(void)canExpandAfterAlert:(id)alert;
-(void)mustFlattenForResignActive:(id)resignActive;
-(void)canExpandAfterBecomeActive:(id)active;
-(void)mustFlattenForNavigationTransition:(id)navigationTransition;
-(void)canExpandAfterNavigationTransition:(id)transition;
-(BOOL)isScrolling;
-(BOOL)isScaling;
-(BOOL)isRotating;
-(BOOL)autoscrolled;
-(id)enabledScroller;
-(void)setHidden:(BOOL)hidden;
-(void)removeFromSuperview;
-(void)updateDot;
-(void)didMoveToSuperview;
-(void)setFrame:(CGRect)frame;
-(void)drawRect:(CGRect)rect;
@end
