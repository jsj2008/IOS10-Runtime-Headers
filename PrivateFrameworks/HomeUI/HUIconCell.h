//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import <HomeUI/HUCellProtocol-Protocol.h>
#import <HomeUI/HUDisableableCellProtocol-Protocol.h>

@class HFItem, HUIconView, NSArray, NSString, UIColor, UILabel, UIView;

@interface HUIconCell : UITableViewCell <HUCellProtocol, HUDisableableCellProtocol>
{
    _Bool _disabled;
    _Bool _hideIcon;
    _Bool _iconForegroundColorFollowsTintColor;
    HFItem *_item;
    UIColor *_iconForegroundColor;
    unsigned long long _iconDisplayStyle;
    NSArray *_dynamicConstraints;
    UIView *_containerView;
    UIView *_iconContainerView;
    HUIconView *_iconView;
    struct CGSize _iconSize;
}

@property(retain, nonatomic) HUIconView *iconView; // @synthesize iconView=_iconView;
@property(retain, nonatomic) UIView *iconContainerView; // @synthesize iconContainerView=_iconContainerView;
@property(retain, nonatomic) UIView *containerView; // @synthesize containerView=_containerView;
@property(retain, nonatomic) NSArray *dynamicConstraints; // @synthesize dynamicConstraints=_dynamicConstraints;
@property(nonatomic) unsigned long long iconDisplayStyle; // @synthesize iconDisplayStyle=_iconDisplayStyle;
@property(nonatomic) struct CGSize iconSize; // @synthesize iconSize=_iconSize;
@property(nonatomic) _Bool iconForegroundColorFollowsTintColor; // @synthesize iconForegroundColorFollowsTintColor=_iconForegroundColorFollowsTintColor;
@property(retain, nonatomic) UIColor *iconForegroundColor; // @synthesize iconForegroundColor=_iconForegroundColor;
@property(nonatomic) _Bool hideIcon; // @synthesize hideIcon=_hideIcon;
@property(nonatomic, getter=isDisabled) _Bool disabled; // @synthesize disabled=_disabled;
@property(retain, nonatomic) HFItem *item; // @synthesize item=_item;
- (void).cxx_destruct;
- (void)updateIcon;
- (void)createIconViews;
- (void)updateUIWithAnimation:(_Bool)arg1;
- (void)updateConstraints;
- (void)prepareForReuse;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) UILabel *detailTextLabel; // @dynamic detailTextLabel;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, nonatomic) UILabel *textLabel; // @dynamic textLabel;

@end

