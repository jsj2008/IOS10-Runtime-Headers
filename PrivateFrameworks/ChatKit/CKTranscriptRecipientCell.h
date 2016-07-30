//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class CKAvatarView, UILabel;

@interface CKTranscriptRecipientCell : UITableViewCell
{
    CKAvatarView *_contactAvatarView;
    double _margin;
    UILabel *_nameLabel;
    UILabel *_handleLabel;
}

+ (double)marginWidth;
+ (double)preferredHeight;
+ (id)identifier;
@property(retain, nonatomic) UILabel *handleLabel; // @synthesize handleLabel=_handleLabel;
@property(retain, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property(nonatomic) double margin; // @synthesize margin=_margin;
@property(retain, nonatomic) CKAvatarView *contactAvatarView; // @synthesize contactAvatarView=_contactAvatarView;
- (void).cxx_destruct;
- (void)configureWithEntity:(id)arg1;
- (void)layoutSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end
