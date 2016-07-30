//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MusicLibrary/ML3Predicate.h>

@class NSString;

@interface ML3PropertyPredicate : ML3Predicate
{
    NSString *_property;
}

+ (id)predicateWithProperty:(id)arg1;
@property(copy, nonatomic) NSString *property; // @synthesize property=_property;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isDynamicForEntityClass:(Class)arg1;
- (void)appendSQLToMutableString:(id)arg1 entityClass:(Class)arg2;
- (id)SQLJoinClausesForClass:(Class)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithProperty:(id)arg1;

@end
