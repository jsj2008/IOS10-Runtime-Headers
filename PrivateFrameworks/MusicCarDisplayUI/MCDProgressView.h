//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MCDProgressBarView, NSLayoutConstraint, UILabel;

@interface MCDProgressView : UIView
{
    _Bool _progressActive;
    UILabel *_timeLabel;
    UILabel *_timeRemainingLabel;
    UILabel *_liveLabel;
    MCDProgressBarView *_progressBarView;
    NSLayoutConstraint *_leftConstant;
    NSLayoutConstraint *_rightConstant;
    float _progress;
    _Bool _isLiveStream;
}

@property(nonatomic) _Bool isLiveStream; // @synthesize isLiveStream=_isLiveStream;
- (void).cxx_destruct;
- (void)setPlaybackTime:(double)arg1 duration:(double)arg2;
- (void)layoutSubviews;
- (void)_addConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

@end

