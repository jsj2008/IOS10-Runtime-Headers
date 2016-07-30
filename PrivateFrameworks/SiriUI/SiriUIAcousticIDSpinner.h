//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class UIImageView, UIVisualEffectView;
@protocol SiriUIAcousticIDSpinnerDelegate;

@interface SiriUIAcousticIDSpinner : UIView
{
    UIImageView *_musicNoteView;
    UIImageView *_spinnerView;
    UIVisualEffectView *_vibrancyView;
    id <SiriUIAcousticIDSpinnerDelegate> _delegate;
}

@property(nonatomic) __weak id <SiriUIAcousticIDSpinnerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)animateOut;
- (void)animateIn;
- (_Bool)isShowing;
- (id)_imageForSpinner;
- (id)_spinningAnimation;
- (id)initWithFrame:(struct CGRect)arg1;

@end
