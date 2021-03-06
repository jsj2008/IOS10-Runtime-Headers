//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class INIntent, INIntentResponse, NSDate, NSDateInterval, NSString;

@interface INInteraction : NSObject <NSSecureCoding, NSCopying>
{
    INIntent *_intent;
    INIntentResponse *_intentResponse;
    long long _intentHandlingStatus;
    long long _direction;
    NSDateInterval *_dateInterval;
    NSString *_identifier;
    NSString *_groupIdentifier;
}

+ (void)deleteInteractionsWithGroupIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)deleteInteractionsWithIdentifiers:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)deleteAllInteractionsWithCompletion:(CDUnknownBlockType)arg1;
+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *groupIdentifier; // @synthesize groupIdentifier=_groupIdentifier;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(copy, nonatomic) NSDateInterval *dateInterval; // @synthesize dateInterval=_dateInterval;
@property(nonatomic) long long direction; // @synthesize direction=_direction;
@property(nonatomic) long long intentHandlingStatus; // @synthesize intentHandlingStatus=_intentHandlingStatus;
@property(readonly, copy, nonatomic) INIntentResponse *intentResponse; // @synthesize intentResponse=_intentResponse;
@property(readonly, copy, nonatomic) INIntent *intent; // @synthesize intent=_intent;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)donateInteractionWithCompletion:(CDUnknownBlockType)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIntent:(id)arg1 response:(id)arg2;
@property(copy, nonatomic) NSString *domainIdentifier;
@property(nonatomic) double duration;
@property(retain, nonatomic) NSDate *date;

@end

