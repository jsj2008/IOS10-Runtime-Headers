//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Intents/INIntentResponse.h>

@class INRestaurantReservationUserBooking;

@interface INBookRestaurantReservationIntentResponse : INIntentResponse
{
    INRestaurantReservationUserBooking *_userBooking;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) INRestaurantReservationUserBooking *userBooking; // @synthesize userBooking=_userBooking;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long code;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithCode:(long long)arg1 userActivity:(id)arg2;

@end

