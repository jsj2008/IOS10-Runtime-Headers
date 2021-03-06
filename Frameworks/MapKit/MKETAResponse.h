//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class MKMapItem, NSArray, NSDate;

@interface MKETAResponse : NSObject
{
    MKMapItem *_source;
    MKMapItem *_destination;
    double _expectedTravelTime;
    double _distance;
    NSArray *_sortedETAs;
    unsigned long long _transportType;
    NSDate *_expectedArrivalDate;
    NSDate *_expectedDepartureDate;
}

@property(retain, nonatomic) NSDate *expectedDepartureDate; // @synthesize expectedDepartureDate=_expectedDepartureDate;
@property(retain, nonatomic) NSDate *expectedArrivalDate; // @synthesize expectedArrivalDate=_expectedArrivalDate;
@property(readonly, nonatomic) unsigned long long transportType; // @synthesize transportType=_transportType;
@property(readonly, nonatomic, getter=_sortedETAs) NSArray *sortedETAs; // @synthesize sortedETAs=_sortedETAs;
@property(readonly, nonatomic) double distance; // @synthesize distance=_distance;
@property(readonly, nonatomic) double expectedTravelTime; // @synthesize expectedTravelTime=_expectedTravelTime;
@property(readonly, nonatomic) MKMapItem *destination; // @synthesize destination=_destination;
@property(readonly, nonatomic) MKMapItem *source; // @synthesize source=_source;
- (void).cxx_destruct;
- (unsigned long long)_transportType:(int)arg1;
- (id)initWithSource:(id)arg1 destination:(id)arg2 expectedTravelTime:(double)arg3 distance:(double)arg4 sortedETAs:(id)arg5;

@end

