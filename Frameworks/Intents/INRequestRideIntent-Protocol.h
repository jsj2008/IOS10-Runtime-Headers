//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/JSExport-Protocol.h>
#import <Intents/NSObject-Protocol.h>

@class CLPlacemark, NSNumber, NSString;

@protocol INRequestRideIntent <NSObject, JSExport>
@property(copy, nonatomic) NSNumber *usesApplePayForPayment;
@property(copy, nonatomic) NSString *paymentMethodName;
@property(copy, nonatomic) NSNumber *partySize;
@property(copy, nonatomic) NSString *rideOptionName;
@property(copy, nonatomic) CLPlacemark *dropOffLocation;
@property(copy, nonatomic) CLPlacemark *pickupLocation;
@end
