//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIButton, UIKBBackdropView, UILabel;

__attribute__((visibility("hidden")))
@interface UIKeyboardCandidateGridHeader : UIView
{
    UILabel *_inlineTextLabel;
    double _inlineTextRightMargin;
    UIButton *_toggleButton;
    UIKBBackdropView *_backdropView;
}

@property(retain, nonatomic) UIKBBackdropView *backdropView; // @synthesize backdropView=_backdropView;
@property(retain, nonatomic) UIButton *toggleButton; // @synthesize toggleButton=_toggleButton;
@property(nonatomic) double inlineTextRightMargin; // @synthesize inlineTextRightMargin=_inlineTextRightMargin;
@property(retain, nonatomic) UILabel *inlineTextLabel; // @synthesize inlineTextLabel=_inlineTextLabel;
@property(copy, nonatomic) NSString *inlineText;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
