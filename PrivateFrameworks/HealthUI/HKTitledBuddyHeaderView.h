//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSLayoutConstraint, NSString, UIImage, UIImageView, UILabel, UITextView;

@interface HKTitledBuddyHeaderView : UIView
{
    UIImageView *_logoImageView;
    UILabel *_titleLabel;
    UITextView *_bodyTextView;
    NSLayoutConstraint *_logoTitleGapConstraint;
    NSLayoutConstraint *_bodyZeroHeightConstraint;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *bodyText;
@property(retain, nonatomic) NSString *titleText;
@property(retain, nonatomic) UIImage *logoImage;
- (id)initWithTopInset:(double)arg1;

@end
