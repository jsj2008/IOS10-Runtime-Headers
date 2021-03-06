//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <AppleAccountUI/DevicePINControllerDelegate-Protocol.h>

@class AAUICDPHelper, NSString, PSSetupController, UIBarButtonItem;

@interface AAUICDPStingrayController : NSObject <DevicePINControllerDelegate>
{
    AAUICDPHelper *_helper;
    PSSetupController *_navController;
    NSString *_previousTitle;
    UIBarButtonItem *_previousRightButton;
    NSString *_stingrayPendingState;
    CDUnknownBlockType __passcodeValidationCompletion;
}

+ (_Bool)isValidStingrayIndicator:(id)arg1;
+ (id)stingrayControllerWithPresenter:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType _passcodeValidationCompletion; // @synthesize _passcodeValidationCompletion=__passcodeValidationCompletion;
@property(retain, nonatomic) NSString *stingrayPendingState; // @synthesize stingrayPendingState=_stingrayPendingState;
- (void).cxx_destruct;
- (void)enableUserInteractionAndStopSpinner;
- (void)disableUserInteractionAndStartSpinner;
- (void)devicePINController:(id)arg1 didAcceptSetPIN:(id)arg2;
- (void)didCancelEnteringPIN;
- (void)didAcceptEnteredPIN;
- (id)_specifierForMode:(int)arg1;
- (void)_setupNavController;
- (id)_presentingViewController;
- (void)_showPasscodePromptWithMode:(int)arg1;
- (void)validateStingrayPasscodeStateWithCompletion:(CDUnknownBlockType)arg1;
- (id)stingrayRefreshRequestWithInfo:(id)arg1 serverInfo:(id)arg2 attributes:(id)arg3;
- (void)addStingrayHeadersToRequest:(id)arg1;
- (void)updateStingrayStateToEnabled:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updateStingrayStateWithKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

