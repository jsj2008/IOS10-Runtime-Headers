//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthKit/HKQuery.h>

@interface HKActivitySummaryQuery : HKQuery
{
    _Bool _initialHandlerCalled;
    CDUnknownBlockType _completionHandler;
    CDUnknownBlockType _updateHandler;
}

@property(copy, nonatomic) CDUnknownBlockType updateHandler; // @synthesize updateHandler=_updateHandler;
- (void).cxx_destruct;
- (_Bool)_requiresValidSampleType;
- (_Bool)_queue_shouldStayAliveAfterInitialResults;
- (CDUnknownBlockType)_queue_errorHandler;
- (void)_queue_validate;
- (void)_queue_cleanupAfterDeactivation;
- (void)deliverActivitySummaries:(id)arg1 queryUUID:(id)arg2;
- (id)initWithPredicate:(id)arg1 resultsHandler:(CDUnknownBlockType)arg2;

@end

