//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthKit/_HKBaseAchievementPredicateEnvironment.h>

@class NSCalendar, NSDate;

@interface _HKAchievementPredicateDatesEnvironment : _HKBaseAchievementPredicateEnvironment
{
    NSCalendar *_calendar;
    NSDate *_startOfToday;
    NSDate *_endOfToday;
    NSDate *_startOfYesterday;
    long long _firstDayOfFitnessWeek;
    NSDate *_firstWristOnDateToday;
    double _currentTimeZoneOffset;
    long long _dayOfWeekToday;
    long long _dayOfMonthToday;
    long long _numberOfDaysInCurrentMonth;
    NSDate *_startOfCurrentFitnessWeek;
    NSDate *_endOfCurrentFitnessWeek;
    NSDate *_now;
}

@property(readonly, nonatomic) NSDate *now; // @synthesize now=_now;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDate *endOfCurrentFitnessWeek;
@property(readonly, nonatomic) NSDate *startOfCurrentFitnessWeek;
@property(readonly, nonatomic) long long numberOfDaysInCurrentMonth;
@property(readonly, nonatomic) long long dayOfMonthToday;
@property(readonly, nonatomic) long long dayOfWeekToday;
@property(readonly, nonatomic) double currentTimeZoneOffset;
@property(readonly, nonatomic) NSDate *firstWristOnDateToday;
@property(readonly, nonatomic) long long lastDayOfFitnessWeek;
@property(readonly, nonatomic) long long firstDayOfFitnessWeek;
@property(readonly, nonatomic) NSDate *startOfYesterday;
@property(readonly, nonatomic) NSDate *endOfToday;
@property(readonly, nonatomic) NSDate *startOfToday;
- (void)setCalendar:(id)arg1;
- (void)setCurrentDate:(id)arg1;
- (void)_clearDateCaches;
- (id)init;

@end

