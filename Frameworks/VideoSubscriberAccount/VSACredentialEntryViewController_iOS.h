//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AccountsUI/ACUIViewController.h>

#import <VideoSubscriberAccount/VSACredentialEntryViewController-Protocol.h>

@class NSArray, NSString, UIButton, UIProgressHUD, VSACredentialEntryViewModel, VSAIdentityProviderLogoView;
@protocol VSACredentialEntryViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface VSACredentialEntryViewController_iOS : ACUIViewController <VSACredentialEntryViewController>
{
    _Bool _cancellationAllowed;
    VSACredentialEntryViewModel *_viewModel;
    id <VSACredentialEntryViewControllerDelegate> _delegate;
    VSAIdentityProviderLogoView *_logoView;
    UIButton *_linkButton;
    UIProgressHUD *_deletingAccountHUD;
    NSArray *_credentialEntryFieldSpecifiers;
    id _textFieldTextDidChangeObserver;
}

@property(nonatomic) __weak id textFieldTextDidChangeObserver; // @synthesize textFieldTextDidChangeObserver=_textFieldTextDidChangeObserver;
@property(retain, nonatomic) NSArray *credentialEntryFieldSpecifiers; // @synthesize credentialEntryFieldSpecifiers=_credentialEntryFieldSpecifiers;
@property(retain, nonatomic) UIProgressHUD *deletingAccountHUD; // @synthesize deletingAccountHUD=_deletingAccountHUD;
@property(retain, nonatomic) UIButton *linkButton; // @synthesize linkButton=_linkButton;
@property(retain, nonatomic) VSAIdentityProviderLogoView *logoView; // @synthesize logoView=_logoView;
@property(nonatomic) __weak id <VSACredentialEntryViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) VSACredentialEntryViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(nonatomic, getter=isCancellationAllowed) _Bool cancellationAllowed; // @synthesize cancellationAllowed=_cancellationAllowed;
- (void).cxx_destruct;
- (void)scrollViewDidScroll:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)_updateLinkButtonLayout;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)doneButtonPressed:(id)arg1;
- (void)cancelButtonTapped:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(readonly, nonatomic) struct CGSize preferredLogoSize;
- (void)_showNavigationBarButtons;
- (void)_stopValidationAndShowButtons:(_Bool)arg1;
- (void)_startValidation;
- (id)_identityProviderDisplayName;
- (void)_hideDeletingAccountHUD;
- (void)_showDeletingAccountHUD;
- (void)_deleteAccountButtonTapped:(id)arg1;
- (void)_linkButtonTapped:(id)arg1;
- (id)_linkURL;
- (void)_setText:(id)arg1 forSpecifier:(id)arg2;
- (id)_textForSpecifier:(id)arg1;
- (id)_credentialEntryFieldForSpecifier:(id)arg1;
- (id)_textFieldForSpecifier:(id)arg1;
- (id)_specifierForTextField:(id)arg1;
- (void)_showDeleteAlertForError:(id)arg1;
- (void)_showValidationAlertForError:(id)arg1;
- (void)dealloc;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

