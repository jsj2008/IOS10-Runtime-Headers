//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VideoSubscriberAccount/VSAAppDocumentController.h>

#import <VideoSubscriberAccount/VSAAutoAuthenticationViewModelDelegate-Protocol.h>

@class IKViewElement, NSString;

__attribute__((visibility("hidden")))
@interface VSAAutoAuthenticationAppDocumentController : VSAAppDocumentController <VSAAutoAuthenticationViewModelDelegate>
{
    IKViewElement *_buttonLockupElement;
}

@property(retain, nonatomic) IKViewElement *buttonLockupElement; // @synthesize buttonLockupElement=_buttonLockupElement;
- (void).cxx_destruct;
- (_Bool)_updateAutoAuthenticationViewModel:(id)arg1 withTemplate:(id)arg2;
- (_Bool)_updateAutoAuthenticationViewModel:(id)arg1 error:(id *)arg2;
- (id)_autoAuthenticationViewModelWithViewModel:(id)arg1;
- (void)autoAuthenticationViewModelDidSelectFooterButton:(id)arg1;
- (_Bool)_updateViewModel:(id)arg1 error:(id *)arg2;
- (id)_newViewModel;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

