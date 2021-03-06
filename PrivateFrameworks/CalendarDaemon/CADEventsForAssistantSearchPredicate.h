//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CalendarDaemon/CADPredicate.h>

#import <CalendarDaemon/EKDefaultPropertiesLoading-Protocol.h>
#import <CalendarDaemon/NSSecureCoding-Protocol.h>

@class NSArray, NSDate, NSString, NSTimeZone;

@interface CADEventsForAssistantSearchPredicate : CADPredicate <EKDefaultPropertiesLoading, NSSecureCoding>
{
    NSTimeZone *_timeZone;
    NSDate *_startDate;
    NSDate *_endDate;
    NSString *_title;
    NSString *_location;
    NSString *_notes;
    NSArray *_participants;
    long long _limit;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) long long limit; // @synthesize limit=_limit;
@property(copy, nonatomic) NSArray *participants; // @synthesize participants=_participants;
@property(copy, nonatomic) NSString *notes; // @synthesize notes=_notes;
@property(copy, nonatomic) NSString *location; // @synthesize location=_location;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(copy, nonatomic) NSDate *endDate; // @synthesize endDate=_endDate;
@property(copy, nonatomic) NSDate *startDate; // @synthesize startDate=_startDate;
@property(copy, nonatomic) NSTimeZone *timeZone; // @synthesize timeZone=_timeZone;
- (void).cxx_destruct;
- (id)defaultPropertiesToLoad;
- (_Bool)shouldLoadDefaultProperties;
- (id)predicateFormat;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, copy) NSString *description;
- (id)initWithTimeZone:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 title:(id)arg4 location:(id)arg5 notes:(id)arg6 participants:(id)arg7 limit:(long long)arg8;
- (id)copyMatchingItemsWithDatabase:(struct CalDatabase *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

