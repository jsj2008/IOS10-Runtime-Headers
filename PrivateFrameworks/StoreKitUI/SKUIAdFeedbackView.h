//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIButton, UIColor, UILabel;

@interface SKUIAdFeedbackView : UIView
{
    UIButton *_yesButton;
    UIButton *_noButton;
    UILabel *_titleLabel;
    UILabel *_detailLabel;
    UIView *_dividerView;
    UIView *_backgroundView;
}

@property(retain, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain, nonatomic) UIView *dividerView; // @synthesize dividerView=_dividerView;
@property(retain, nonatomic) UILabel *detailLabel; // @synthesize detailLabel=_detailLabel;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
@property(retain, nonatomic) UIButton *noButton; // @synthesize noButton=_noButton;
@property(retain, nonatomic) UIButton *yesButton; // @synthesize yesButton=_yesButton;
- (void).cxx_destruct;
- (id)detailString;
- (id)titleString;
- (void)_setupViewWithTitle:(id)arg1 detail:(id)arg2;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
@property(readonly, nonatomic) UIColor *defaultBackgroundColor;
@property(readonly, nonatomic) UIColor *defaultButtonColor;
@property(readonly, nonatomic) UIColor *defaultTextColor;

@end

