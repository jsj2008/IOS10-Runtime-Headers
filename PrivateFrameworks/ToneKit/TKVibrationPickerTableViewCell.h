//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ToneKit/TKPickerTableViewCell.h>

#import <ToneKit/UITextFieldDelegate-Protocol.h>

@class NSString, UIColor, UIFont, UITextField;
@protocol TKVibrationPickerTableViewCellDelegate;

@interface TKVibrationPickerTableViewCell : TKPickerTableViewCell <UITextFieldDelegate>
{
    UITextField *_removableTextField;
    _Bool _editable;
    id <TKVibrationPickerTableViewCellDelegate> _delegate;
    UIColor *_regularTextColor;
}

@property(nonatomic, getter=isEditable) _Bool editable; // @synthesize editable=_editable;
@property(retain, nonatomic) UIColor *regularTextColor; // @synthesize regularTextColor=_regularTextColor;
@property(nonatomic) __weak id <TKVibrationPickerTableViewCellDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)textFieldDidEndEditing:(id)arg1;
- (void)textFieldDidBeginEditing:(id)arg1;
- (_Bool)textFieldShouldReturn:(id)arg1;
- (_Bool)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (void)_makeRemovableTextFieldEditable:(_Bool)arg1;
- (void)willTransitionToState:(unsigned long long)arg1;
- (void)didTransitionToState:(unsigned long long)arg1;
- (void)layoutSubviews;
- (void)_layoutRemovableTextField;
- (void)makeTextFieldResignFirstResponderIfNeeded;
- (_Bool)_isDisplayingRemovableTextField;
@property(nonatomic, getter=isChecked) _Bool checked;
@property(retain, nonatomic) UIColor *highlightedTextColor;
@property(retain, nonatomic) UIFont *regularTextFont;
@property(retain, nonatomic) NSString *placeholderText;
@property(retain, nonatomic) NSString *labelText;
- (id)initWithReuseIdentifier:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

