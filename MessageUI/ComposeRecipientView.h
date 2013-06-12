/**
 * This header is generated by class-dump-z 0.2-1.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/MessageUI.framework/MessageUI
 */

#import "MessageUI-Structs.h"
#import "ABPeoplePickerNavigationControllerDelegate.h"
#import "UITextFieldDelegate.h"
#import "MFComposeHeaderView.h"

@class NSMutableArray, NSMutableDictionary, ComposeRecipientAtom, UIPushButton, NSArray, UIImage, UITextField;

@interface ComposeRecipientView : MFComposeHeaderView <UITextFieldDelegate, ABPeoplePickerNavigationControllerDelegate> {
	NSMutableArray* _recipients;
	NSMutableDictionary* _atoms;
	ComposeRecipientAtom* _opaqueTextAtom;
	UIPushButton* _addButton;
	BOOL _editable;
	BOOL _becomingFirstResponder;
	BOOL _ignoreFirstResponderChanges;
	BOOL _picking;
	NSArray* _properties;
	UIImage* _buttonImage;
	UIImage* _pressedImage;
	int _maxRecipients;
	BOOL _parentIsClosing;
	UITextField* _textField;
}
// inherited: -(id)initWithFrame:(CGRect)frame;
-(int)composeRecipientAtomKeyboardType:(id)type;
// inherited: -(void)setLabel:(id)label;
-(BOOL)editable;
-(void)setEditable:(BOOL)editable;
-(void)clearText;
-(void)setProperty:(int)property;
-(void)setProperties:(id)properties;
-(id)addresses;
-(void)setAddresses:(id)addresses;
-(void)addRecipient:(id)recipient;
-(void)addAddress:(id)address;
-(void)addRecord:(void*)record identifier:(int)identifier;
-(void)addRecord:(void*)record property:(int)property identifier:(int)identifier;
-(void)removeAddressAtIndex:(int)index;
-(BOOL)_addable;
-(void)setMaxRecipients:(int)recipients;
-(int)maxRecipients;
// inherited: -(BOOL)_canBecomeFirstResponder;
-(void)reflow;
-(void)addButtonClicked:(id)clicked;
-(id)addButton;
-(id)textField;
-(BOOL)shouldShowCardForPerson:(void*)person;
-(void)_dismissPicker:(id)picker;
// in a protocol: -(void)peoplePickerNavigationControllerDidCancel:(id)peoplePickerNavigationController;
// in a protocol: -(BOOL)peoplePickerNavigationController:(id)controller shouldContinueAfterSelectingPerson:(void*)person;
// in a protocol: -(BOOL)peoplePickerNavigationController:(id)controller shouldContinueAfterSelectingPerson:(void*)person property:(int)property identifier:(int)identifier;
-(BOOL)textFieldShouldBecomeFirstResponder:(id)textField;
-(void)textFieldDidBecomeFirstResponder:(id)textField;
-(void)textFieldDidResignFirstResponder:(id)textField;
-(void)composeRecipientAtomWillBecomeFirstResponder:(id)composeRecipientAtom;
-(void)composeRecipientAtomDidBecomeFirstResponder:(id)composeRecipientAtom;
-(void)composeRecipientAtomDidResignFirstResponder:(id)composeRecipientAtom;
-(void)composeRecipientAtomDeleteClicked:(id)clicked;
-(id)text;
// inherited: -(BOOL)becomeFirstResponder;
// inherited: -(BOOL)canBecomeFirstResponder;
-(void)textChanged:(id)changed;
-(BOOL)keyboardInput:(id)input shouldInsertText:(id)text isMarkedText:(BOOL)text3;
-(BOOL)keyboardInputShouldDelete:(id)keyboardInput;
-(float)offsetForRowWithTextField;
-(void)showAtoms;
-(void)setIgnoreFirstResponderChanges:(BOOL)changes;
// inherited: -(void)dealloc;
-(id)recipients;
-(void)parentWillClose;
-(void)parentDidClose;
@end
