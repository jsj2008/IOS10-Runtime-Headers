//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <UserNotificationsUIKit/NCNotificationCustomContent-Protocol.h>
#import <UserNotificationsUIKit/NCNotificationCustomContentDelegate-Protocol.h>
#import <UserNotificationsUIKit/NCNotificationTextInputViewDelegate-Protocol.h>

@class NCNotificationRequest, NCNotificationTextInputView, NSString;
@protocol NCNotificationCustomContent, NCNotificationCustomContentDelegate;

@interface NCNotificationContentContainerViewController : UIViewController <NCNotificationCustomContentDelegate, NCNotificationTextInputViewDelegate, NCNotificationCustomContent>
{
    id <NCNotificationCustomContentDelegate> _delegate;
    NCNotificationRequest *_notificationRequest;
    UIViewController<NCNotificationCustomContent> *_contentViewController;
    NCNotificationTextInputView *_inputAccessoryView;
}

@property(retain, nonatomic) NCNotificationTextInputView *inputAccessoryView; // @synthesize inputAccessoryView=_inputAccessoryView;
@property(retain, nonatomic) UIViewController<NCNotificationCustomContent> *contentViewController; // @synthesize contentViewController=_contentViewController;
@property(readonly, nonatomic) NCNotificationRequest *notificationRequest; // @synthesize notificationRequest=_notificationRequest;
@property(nonatomic) __weak id <NCNotificationCustomContentDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)_shouldShowTextInputOnAppearance;
- (void)_removeInputAccessoryView:(id)arg1;
- (id)_textInputActionInNotification:(id)arg1;
- (void)_setupQuickReplyForNotificationAction:(id)arg1;
- (void)_setupQuickReplyForNotificationRequest:(id)arg1;
- (void)_loadContentViewControllerForNotificationRequest:(id)arg1;
- (void)_setupContentViewController:(id)arg1;
- (void)notificationTextInputView:(id)arg1 didConfirmText:(id)arg2 forAction:(id)arg3;
- (unsigned long long)customContentLocation;
- (_Bool)allowManualDismiss;
- (_Bool)defaultContentHidden;
- (_Bool)performAction:(id)arg1 forNotification:(id)arg2;
- (_Bool)performAction:(id)arg1 forNotification:(id)arg2 withUserInfo:(id)arg3;
- (void)didReceiveNotificationRequest:(id)arg1;
- (void)customContent:(id)arg1 forwardAction:(id)arg2 forNotification:(id)arg3 withUserInfo:(id)arg4;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (struct CGSize)sizeForChildContentContainer:(id)arg1 withParentContainerSize:(struct CGSize)arg2;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (_Bool)canBecomeFirstResponder;
- (id)initWithNotificationRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
