/**
 * This header is generated by class-dump-z 0.1-11o.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 */

#import "UIKit-Structs.h"
#import "UIThreePartButton.h"

@class UIImage, NSString, UIColor;

@interface UIValueButton : UIThreePartButton {
	int _displayStyle;
	NSString* _labelString;
	NSString* _valueString;
	NSString* _valueStyle;
	NSString* _valueHighlightStyle;
	UIImage* _labelBadgeImage;
	float _disclosureAlpha;
	UIColor* _valueColor;
	struct {
		unsigned style : 1;
		unsigned reserved : 31;
	} _valueButtonFlags;
}
+(float)defaultHeight;
+(CGRect)frameRectForOpaqueContentRect:(CGRect)opaqueContentRect;
+(CGRect)opaqueContentRectForFrameRect:(CGRect)frameRect;
-(void)_commonInitValueButton;
-(id)initWithFrame:(CGRect)frame;
-(id)initWithTitle:(id)title;
-(void)dealloc;
-(id)_titleByCombiningLabelAndValue;
-(void)setValue:(id)value;
-(id)value;
-(void)setValueStyle:(id)style;
-(void)setValueHighlightStyle:(id)style;
-(void)setLabel:(id)label;
-(id)label;
-(void)setLabelBadgeImage:(id)image;
-(id)labelBadgeImage;
-(void)setTitle:(id)title;
-(void)setDisplayStyle:(int)style;
-(int)displayStyle;
-(void)setShowsDisclosure:(BOOL)disclosure;
-(BOOL)showsDisclosure;
-(float)rightEndPadding;
-(void)setDisclosureAlpha:(float)alpha;
-(float)disclosureAlpha;
-(float)buttonEdge;
-(void)_drawValueStyleInteriorInRect:(CGRect)rect withValueColor:(id)valueColor valueFont:(id)font isPressed:(BOOL)pressed;
-(void)_drawLabelAndValueStyleInteriorInRect:(CGRect)rect;
-(void)drawButtonPart:(int)part inRect:(CGRect)rect;
-(void)setValueColor:(id)color;
-(void)sizeToFit;
@end

