//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/INIntentResponse.h>

@class INImage, NSDate, NSNumber;

@interface INGetAvailableRestaurantReservationBookingDefaultsIntentResponse : INIntentResponse
{
    unsigned long long _defaultPartySize;
    NSDate *_defaultBookingDate;
    NSNumber *_maximumPartySize;
    INImage *_providerImage;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) INImage *providerImage; // @synthesize providerImage=_providerImage;
@property(retain, nonatomic) NSNumber *maximumPartySize; // @synthesize maximumPartySize=_maximumPartySize;
@property(copy, nonatomic) NSDate *defaultBookingDate; // @synthesize defaultBookingDate=_defaultBookingDate;
@property(nonatomic) unsigned long long defaultPartySize; // @synthesize defaultPartySize=_defaultPartySize;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long code;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
