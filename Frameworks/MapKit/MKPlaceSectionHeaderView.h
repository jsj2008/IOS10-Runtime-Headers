//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MapKit/MKPlaceSectionItemView.h>

@class NSArray, NSLayoutConstraint, NSString, UIImage, UIView, _MKRightImageButton, _MKUILabel;

__attribute__((visibility("hidden")))
@interface MKPlaceSectionHeaderView : MKPlaceSectionItemView
{
    NSLayoutConstraint *_baselineToTopConstraint;
    NSLayoutConstraint *_baselineToBottomConstraint;
    NSLayoutConstraint *_iconHeightConstraint;
    NSLayoutConstraint *_iconWidthConstraint;
    NSLayoutConstraint *_seeMoreBaselineConstraint;
    NSLayoutConstraint *_seeMoreCenterYConstraint;
    _Bool _showSeeMoreButton;
    _Bool _showSeparator;
    NSString *_providerName;
    NSString *_seeMoreButtonText;
    _MKUILabel *_sectionHeaderLabel;
    _MKRightImageButton *_seeMoreButton;
    UIView *_separator;
    NSArray *_seeMoreButtonConstraints;
    NSArray *_marginConstraints;
    SEL _action;
    id _target;
    struct CGSize _iconDisplaySize;
}

+ (double)intrinsicContentHeightForFont:(id)arg1;
@property(nonatomic) __weak id target; // @synthesize target=_target;
@property(nonatomic) SEL action; // @synthesize action=_action;
@property(retain, nonatomic) NSArray *marginConstraints; // @synthesize marginConstraints=_marginConstraints;
@property(nonatomic) _Bool showSeparator; // @synthesize showSeparator=_showSeparator;
@property(retain, nonatomic) NSArray *seeMoreButtonConstraints; // @synthesize seeMoreButtonConstraints=_seeMoreButtonConstraints;
@property(retain, nonatomic) UIView *separator; // @synthesize separator=_separator;
@property(nonatomic) struct CGSize iconDisplaySize; // @synthesize iconDisplaySize=_iconDisplaySize;
@property(retain, nonatomic) _MKRightImageButton *seeMoreButton; // @synthesize seeMoreButton=_seeMoreButton;
@property(retain, nonatomic) _MKUILabel *sectionHeaderLabel; // @synthesize sectionHeaderLabel=_sectionHeaderLabel;
@property(nonatomic) _Bool showSeeMoreButton; // @synthesize showSeeMoreButton=_showSeeMoreButton;
@property(retain, nonatomic) NSString *providerName; // @synthesize providerName=_providerName;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *title;
- (void)setTarget:(id)arg1 action:(SEL)arg2;
@property(retain, nonatomic) UIImage *icon;
@property(retain, nonatomic) NSString *seeMoreButtonText; // @synthesize seeMoreButtonText=_seeMoreButtonText;
- (void)updateConstraints;
- (void)contentSizeDidChange;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end
