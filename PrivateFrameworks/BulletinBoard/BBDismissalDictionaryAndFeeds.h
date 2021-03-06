//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BulletinBoard/BBDismissalItem.h>

@class NSString;

@interface BBDismissalDictionaryAndFeeds : BBDismissalItem
{
    double _dismissalTimeInterval;
    NSString *_dismissalHash;
}

@property(readonly, copy, nonatomic) NSString *dismissalHash; // @synthesize dismissalHash=_dismissalHash;
@property(readonly, nonatomic) double dismissalTimeInterval; // @synthesize dismissalTimeInterval=_dismissalTimeInterval;
- (void).cxx_destruct;
- (id)description;
- (_Bool)matchDismissalDictionary:(id)arg1;
- (id)initWithDismissalDictionary:(id)arg1 andFeeds:(unsigned long long)arg2;

@end

