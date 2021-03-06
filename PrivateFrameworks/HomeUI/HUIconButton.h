//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIControl.h>

@class HUIconView;
@protocol HFIconDescriptor;

@interface HUIconButton : UIControl
{
    HUIconView *_iconView;
    struct UIEdgeInsets _imageEdgeInsets;
}

@property(retain, nonatomic) HUIconView *iconView; // @synthesize iconView=_iconView;
@property(nonatomic) struct UIEdgeInsets imageEdgeInsets; // @synthesize imageEdgeInsets=_imageEdgeInsets;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <HFIconDescriptor> iconDescriptor;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)updateWithIconDescriptor:(id)arg1 animated:(_Bool)arg2;
- (void)setSelected:(_Bool)arg1;
- (void)tintColorDidChange;
- (id)initWithFrame:(struct CGRect)arg1;

@end

