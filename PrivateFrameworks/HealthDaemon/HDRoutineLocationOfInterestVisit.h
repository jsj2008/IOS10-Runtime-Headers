//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate;

@interface HDRoutineLocationOfInterestVisit : NSObject
{
    NSDate *_entryTime;
    NSDate *_exitTime;
}

@property(retain, nonatomic) NSDate *exitTime; // @synthesize exitTime=_exitTime;
@property(retain, nonatomic) NSDate *entryTime; // @synthesize entryTime=_entryTime;
- (void).cxx_destruct;
- (id)initWithLocationOfInterestVisit:(id)arg1;
- (id)initWithCodable:(id)arg1;

@end

