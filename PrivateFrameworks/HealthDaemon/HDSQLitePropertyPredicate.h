//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthDaemon/HDSQLitePredicate.h>

#import <HealthDaemon/NSCopying-Protocol.h>

@class NSString;

@interface HDSQLitePropertyPredicate : HDSQLitePredicate <NSCopying>
{
    NSString *_property;
}

@property(readonly, nonatomic) NSString *property; // @synthesize property=_property;
- (void).cxx_destruct;
- (_Bool)isCompatibleWithPredicate:(id)arg1;
- (id)SQLJoinClausesForEntityClass:(Class)arg1;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

