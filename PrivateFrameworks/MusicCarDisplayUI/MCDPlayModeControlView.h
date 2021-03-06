//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

@class MCDPlayModeButton, MCDRepeatButton, NSArray;

@interface MCDPlayModeControlView : UIView
{
    MCDRepeatButton *_repeatButton;
    MCDPlayModeButton *_moreButton;
    MCDPlayModeButton *_shuffleButton;
    MCDPlayModeButton *_addToLibraryButton;
    NSArray *_activeButtonLayoutConstraints;
}

@property(retain, nonatomic) NSArray *activeButtonLayoutConstraints; // @synthesize activeButtonLayoutConstraints=_activeButtonLayoutConstraints;
@property(readonly, nonatomic) MCDPlayModeButton *addToLibraryButton; // @synthesize addToLibraryButton=_addToLibraryButton;
@property(readonly, nonatomic) MCDPlayModeButton *shuffleButton; // @synthesize shuffleButton=_shuffleButton;
@property(readonly, nonatomic) MCDPlayModeButton *moreButton; // @synthesize moreButton=_moreButton;
@property(readonly, nonatomic) MCDRepeatButton *repeatButton; // @synthesize repeatButton=_repeatButton;
- (void).cxx_destruct;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
- (void)_updateConstraintsForAddToLibrary;
- (void)_addConstraints;
- (id)initWithFrame:(struct CGRect)arg1;

@end

