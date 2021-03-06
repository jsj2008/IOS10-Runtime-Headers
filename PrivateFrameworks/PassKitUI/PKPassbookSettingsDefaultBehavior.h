//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitUI/PKPassbookSettingsDataSource-Protocol.h>

@class NSString, PKPassLibraryDefaultDataProvider, PKPaymentDefaultDataProvider, PKPaymentOptionsDefaults;

@interface PKPassbookSettingsDefaultBehavior : NSObject <PKPassbookSettingsDataSource>
{
    PKPassLibraryDefaultDataProvider *_passLibraryDataProvider;
    PKPaymentDefaultDataProvider *_paymentDataProvider;
    PKPaymentOptionsDefaults *_options;
}

- (void).cxx_destruct;
- (_Bool)secureElementIsProductionSigned;
- (id)deviceName;
- (id)secureElementID;
- (_Bool)showPassState;
- (id)optionsDelegate;
- (id)paymentDataProvider;
- (id)passLibraryDataProvider;
- (id)setupDelegate;
- (_Bool)deviceSupportsInAppPayments;
- (_Bool)deviceInRestrictedMode;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

