//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface PXPeopleProgressManager : NSObject
{
    _Bool _monitoringProgress;
    double _updateInterval;
    double _progress;
    unsigned long long _processingStatus;
}

@property unsigned long long processingStatus; // @synthesize processingStatus=_processingStatus;
@property double progress; // @synthesize progress=_progress;
@property(nonatomic) double updateInterval; // @synthesize updateInterval=_updateInterval;
@property(nonatomic, getter=isMonitoringProgress) _Bool monitoringProgress; // @synthesize monitoringProgress=_monitoringProgress;
- (_Bool)_progressComplete:(double)arg1;
- (_Bool)_plusMembersExist;
- (_Bool)_homeMembersExist;
- (void)_handleMonitorUpdateCompleteFeatureEnabled:(_Bool)arg1 progress:(double)arg2;
- (void)_startMonitorUpdates;
- (void)_updateWithStatus:(unsigned long long)arg1 progress:(double)arg2;
- (_Bool)featureUnlocked;
- (id)init;

@end
