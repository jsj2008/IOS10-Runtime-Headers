//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface Localization : NSObject
{
}

+ (id)pastTomorrowAtStringWithDayString:(id)arg1 dueDateString:(id)arg2;
+ (id)tomorrowAtStringWithDueDate:(id)arg1;
+ (id)pastTomorrowFromStringWithDay:(id)arg1 startDate:(id)arg2 endDate:(id)arg3;
+ (id)tomorrowFromStringWithStartDate:(id)arg1 endDate:(id)arg2;
+ (id)tomorrowAtTimeSummaryString:(long long)arg1 timeString:(id)arg2;
+ (id)tomorrowSummaryString:(long long)arg1;
+ (id)todayAtTimeSummaryString:(long long)arg1 timeString:(id)arg2;
+ (id)todaySummaryString:(long long)arg1;
+ (id)onDateSummaryString:(long long)arg1 dateString:(id)arg2;
+ (id)summaryString:(long long)arg1;
+ (id)spacedDateAndTitlePairString:(id)arg1 titleString:(id)arg2;
+ (id)andNMoreStringWithCountString:(id)arg1;
+ (id)multipleAlarmsTomorrowStringWithCountString:(id)arg1 fireDateString:(id)arg2;
+ (id)multipleAlarmsStringWithCountString:(id)arg1 fireDateString:(id)arg2;
+ (id)singleAlarmTomorrowStringWithTitle:(id)arg1 fireDateString:(id)arg2;
+ (id)singleAlarmStringWithTitle:(id)arg1 fireDateString:(id)arg2;
+ (id)contentUnavailableString;

@end
