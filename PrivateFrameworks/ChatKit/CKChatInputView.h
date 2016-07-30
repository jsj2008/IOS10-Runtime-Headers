//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIView.h>

#import <ChatKit/CKMessageEntryContentViewDelegate-Protocol.h>

@class CKCollapsableToolbar, CKMessageEntryContentView, NSObject, NSString, UIButton;
@protocol CKChatInputViewDelegate;

@interface CKChatInputView : UIView <CKMessageEntryContentViewDelegate>
{
    NSObject<CKChatInputViewDelegate> *_delegate;
    UIButton *_photoButton;
    UIButton *_balloonButton;
    UIButton *_searchButton;
    UIButton *_sendButton;
    UIButton *_audioButton;
    CKMessageEntryContentView *_contentView;
    CKCollapsableToolbar *_buttonBar;
}

@property(retain, nonatomic) CKCollapsableToolbar *buttonBar; // @synthesize buttonBar=_buttonBar;
@property(retain, nonatomic) CKMessageEntryContentView *contentView; // @synthesize contentView=_contentView;
@property(retain, nonatomic) UIButton *audioButton; // @synthesize audioButton=_audioButton;
@property(retain, nonatomic) UIButton *sendButton; // @synthesize sendButton=_sendButton;
@property(retain, nonatomic) UIButton *searchButton; // @synthesize searchButton=_searchButton;
@property(retain, nonatomic) UIButton *balloonButton; // @synthesize balloonButton=_balloonButton;
@property(retain, nonatomic) UIButton *photoButton; // @synthesize photoButton=_photoButton;
@property(nonatomic) __weak NSObject<CKChatInputViewDelegate> *delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)messageEntryContentViewDidTapHandwritingKey:(id)arg1;
- (void)messageEntryContentView:(id)arg1 didPasteURL:(id)arg2;
- (void)messageEntryContentViewWasTapped:(id)arg1 isLongPress:(_Bool)arg2;
- (void)messageEntryContentView:(id)arg1 didTapMediaObject:(id)arg2;
- (_Bool)messageEntryContentView:(id)arg1 shouldInsertMediaObjects:(id)arg2;
- (void)messageEntryContentViewDidEndEditing:(id)arg1;
- (void)messageEntryContentViewDidBeginEditing:(id)arg1;
- (_Bool)messageEntryContentViewShouldBeginEditing:(id)arg1;
- (void)messageEntryContentViewDidChange:(id)arg1;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithCapabilities:(int)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
