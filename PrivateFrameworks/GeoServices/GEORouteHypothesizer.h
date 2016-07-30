//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class GEOPlannedDestination, GEORouteHypothesis, NSError, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface GEORouteHypothesizer : NSObject
{
    GEOPlannedDestination *_plannedDestination;
    unsigned long long _state;
    _Bool _unableToFindRouteForOriginalTransportType;
    GEORouteHypothesis *_currentHypothesis;
    NSError *_currentError;
    CDUnknownBlockType _updateHandler;
    NSString *_activityIdentifier;
    NSUUID *_uuid;
    NSObject<OS_dispatch_queue> *_serialQueue;
}

+ (id)hypothesizerForPlannedDestination:(id)arg1;
@property(readonly, nonatomic) _Bool unableToFindRouteForOriginalTransportType; // @synthesize unableToFindRouteForOriginalTransportType=_unableToFindRouteForOriginalTransportType;
@property(readonly, nonatomic) NSError *currentError; // @synthesize currentError=_currentError;
@property(readonly, nonatomic) GEOPlannedDestination *plannedDestination; // @synthesize plannedDestination=_plannedDestination;
@property(readonly, nonatomic) GEORouteHypothesis *currentHypothesis; // @synthesize currentHypothesis=_currentHypothesis;
@property(nonatomic) unsigned long long state; // @synthesize state=_state;
- (id)description;
- (void)dealloc;
- (void)didPostUINotification:(unsigned long long)arg1;
- (void)onlyPerformLocalUpdates;
- (void)stopHypothesizing;
- (void)requestRefresh;
- (void)startHypothesizingWithUpdateHandler:(CDUnknownBlockType)arg1;
- (void)delayStarting;
- (_Bool)_wontHypothesizeAgain;
@property(readonly, nonatomic) double willEndHypothesizingInterval;
@property(readonly, nonatomic) double willBeginHypothesizingInterval;
- (id)initWithPlannedDestination:(id)arg1;

@end
