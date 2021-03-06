//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <UIKit/UIInterfaceActionVisualBackgroundDisplaying-Protocol.h>
#import <UIKit/UIInterfaceActionVisualGroupBackgroundDisplaying-Protocol.h>

@class NSMutableDictionary, NSString, _UIFloatingShadowView;

__attribute__((visibility("hidden")))
@interface _UIAlertControllerTVBackgroundView : UIView <UIInterfaceActionVisualBackgroundDisplaying, UIInterfaceActionVisualGroupBackgroundDisplaying>
{
    _Bool _isHighlighted;
    _Bool _isPressed;
    UIView *_backgroundView;
    _UIFloatingShadowView *_shadowView;
    NSMutableDictionary *_alphas;
    _Bool _shouldUseTintColorAsBackgroundColor;
    _Bool _shouldShowShadow;
}

+ (struct CGSize)backgroundInsetAmount;
@property(nonatomic) _Bool shouldShowShadow; // @synthesize shouldShowShadow=_shouldShowShadow;
@property(nonatomic) _Bool shouldUseTintColorAsBackgroundColor; // @synthesize shouldUseTintColorAsBackgroundColor=_shouldUseTintColorAsBackgroundColor;
- (void).cxx_destruct;
- (double)_alphaForHighlighted:(_Bool)arg1 pressed:(_Bool)arg2;
- (void)setPressed:(_Bool)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)setCornerRadius:(double)arg1;
- (double)alphaForState:(unsigned long long)arg1;
- (void)setAlpha:(double)arg1 forState:(unsigned long long)arg2;
- (void)tintColorDidChange;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

