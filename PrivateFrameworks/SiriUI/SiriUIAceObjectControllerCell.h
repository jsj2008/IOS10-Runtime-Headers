//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SiriUI/SiriUIClearBackgroundCell.h>

@class SiriUIAceObjectViewController, UIView;

@interface SiriUIAceObjectControllerCell : SiriUIClearBackgroundCell
{
    UIView *_animationView;
    SiriUIAceObjectViewController *_aceViewController;
    long long _insertionAnimationType;
    long long _replacementAnimationType;
    UIView *_replacedView;
}

+ (id)reuseIdentifier;
@property(retain, nonatomic) UIView *replacedView; // @synthesize replacedView=_replacedView;
@property(nonatomic) long long replacementAnimationType; // @synthesize replacementAnimationType=_replacementAnimationType;
@property(nonatomic) long long insertionAnimationType; // @synthesize insertionAnimationType=_insertionAnimationType;
@property(retain, nonatomic) SiriUIAceObjectViewController *aceViewController; // @synthesize aceViewController=_aceViewController;
- (void).cxx_destruct;
- (id)_flyInAnimationForAceViewController:(id)arg1;
- (void)_animateInsertionFlyIn;
- (void)_animateReplacementCrossFade;
- (void)_animateInsertionFadeIn;
- (void)beginAnimation;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)_parentPreviousViewInCell;
- (void)_parentViewInCell;
- (void)configureSubviewsForAnimationType;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (id)initWithFrame:(struct CGRect)arg1;

@end

