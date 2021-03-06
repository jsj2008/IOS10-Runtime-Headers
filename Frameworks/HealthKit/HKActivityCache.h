//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthKit/HKSample.h>

#import <HealthKit/NSCopying-Protocol.h>

@class HKQuantity, NSDate, NSDateComponents;

@interface HKActivityCache : HKSample <NSCopying>
{
    long long _cacheIndex;
    NSDateComponents *_dateComponents;
    long long _stepCount;
    long long _pushCount;
    long long _wheelchairUse;
    double _deepBreathingDuration;
    HKQuantity *_energyBurned;
    double _briskMinutes;
    double _activeHours;
    HKQuantity *_energyBurnedGoal;
    NSDate *_energyBurnedGoalDate;
    HKQuantity *_walkingAndRunningDistance;
    long long _flightsClimbed;
    long long _activeEnergyBurnedAnchor;
    long long _activeHoursAnchor;
    long long _briskMinutesAnchor;
    long long _energyBurnedGoalAnchor;
    long long _stepCountAnchor;
    long long _walkingAndRunningDistanceAnchor;
    long long _pushCountAnchor;
    long long _flightsClimbedAnchor;
    long long _workoutAnchor;
    long long _deepBreathingSessionAnchor;
    unsigned long long _knownFields;
}

+ (_Bool)supportsSecureCoding;
+ (_Bool)_isConcreteObjectClass;
+ (id)_newActivityCacheWithUUID:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 dateComponents:(id)arg4;
+ (id)_newActivityCacheWithStartDate:(id)arg1 endDate:(id)arg2 dateComponents:(id)arg3 energyBurned:(id)arg4 energyBurnedGoal:(id)arg5 walkingAndRunningDistance:(id)arg6 metadata:(id)arg7;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (double)_walkingAndRunningDistanceInMeters;
- (double)_energyBurnedGoalInKilocalories;
- (double)_energyBurnedInKilocalories;
- (void)reset;
@property(setter=_setKnownFields:) unsigned long long knownFields;
- (void)_setCategoryAnchor:(long long)arg1;
- (void)_setQuantityAnchor:(long long)arg1;
- (long long)_minCategoryAnchor;
- (long long)_minQuantityAnchor;
@property(setter=_setDeepBreathingSessionAnchor:) long long deepBreathingSessionAnchor;
@property(setter=_setWorkoutAnchor:) long long workoutAnchor;
@property(setter=_setFlightsClimbedAnchor:) long long flightsClimbedAnchor;
@property(setter=_setPushCountAnchor:) long long pushCountAnchor;
@property(setter=_setWalkingAndRunningDistanceAnchor:) long long walkingAndRunningDistanceAnchor;
@property(setter=_setStepCountAnchor:) long long stepCountAnchor;
@property(setter=_setEnergyBurnedGoalAnchor:) long long energyBurnedGoalAnchor;
@property(setter=_setBriskMinutesAnchor:) long long briskMinutesAnchor;
@property(setter=_setActiveHoursAnchor:) long long activeHoursAnchor;
@property(setter=_setActiveEnergyBurnedAnchor:) long long activeEnergyBurnedAnchor;
@property(readonly) _Bool hasFlightsClimbed;
@property(setter=_setFlightsClimbed:) long long flightsClimbed;
@property(readonly) _Bool hasWalkingAndRunningDistance;
@property(retain, setter=_setWalkingAndRunningDistance:) HKQuantity *walkingAndRunningDistance;
@property(readonly) _Bool hasDeepBreathingDuration;
@property(setter=_setDeepBreathingDuration:) double deepBreathingDuration;
@property(readonly) _Bool hasWheelchairUse;
@property(setter=_setWheelchairUse:) long long wheelchairUse;
@property(readonly) _Bool hasPushCount;
@property(setter=_setPushCount:) long long pushCount;
@property(readonly) _Bool hasStepCount;
@property(setter=_setStepCount:) long long stepCount;
@property(readonly) _Bool hasDateComponents;
@property(readonly) NSDateComponents *dateComponents;
@property(setter=_setCacheIndex:) long long cacheIndex;
@property(readonly) _Bool hasActiveHoursGoalPercentage;
@property(readonly) double activeHoursGoalPercentage;
@property(readonly) _Bool hasBriskMinutesGoalPercentage;
@property(readonly) double briskMinutesGoalPercentage;
@property(readonly) _Bool hasEnergyBurnedGoalPercentage;
@property(readonly) double energyBurnedGoalPercentage;
@property(readonly) _Bool hasActiveHoursGoal;
@property(readonly) double activeHoursGoal;
@property(readonly) _Bool hasBriskMinutesGoal;
@property(readonly) double briskMinutesGoal;
@property(readonly) _Bool hasEnergyBurnedGoal;
- (void)_setEnergyBurnedGoalDateOnly:(id)arg1;
- (void)_setEnergyBurnedGoalOnly:(id)arg1;
- (void)_setEnergyBurnedGoal:(id)arg1 date:(id)arg2;
@property(retain, setter=_setEnergyBurnedGoal:) HKQuantity *energyBurnedGoal;
@property(readonly) NSDate *energyBurnedGoalDate;
@property(readonly) _Bool hasActiveHours;
@property(setter=_setActiveHours:) double activeHours;
@property(readonly) _Bool hasBriskMinutes;
@property(setter=_setBriskMinutes:) double briskMinutes;
@property(readonly) _Bool hasEnergyBurned;
@property(retain, setter=_setEnergyBurned:) HKQuantity *energyBurned;
- (_Bool)_isEqualToActivityCache:(id)arg1;
- (id)_valueDescription;

@end

