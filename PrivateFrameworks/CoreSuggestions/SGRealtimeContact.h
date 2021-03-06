//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestions/NSCopying-Protocol.h>
#import <CoreSuggestions/NSSecureCoding-Protocol.h>

@class NSString, SGContact;

@interface SGRealtimeContact : NSObject <NSSecureCoding, NSCopying>
{
    _Bool _isHarvested;
    int _state;
    int _abPersonId;
    SGContact *_contact;
    NSString *_cnContactIdentifier;
    unsigned long long _extractionType;
}

+ (id)realtimeContactForFields:(id)arg1 addedToCuratedContact:(int)arg2;
+ (id)realtimeContactForNewContact:(id)arg1;
+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) _Bool isHarvested; // @synthesize isHarvested=_isHarvested;
@property(readonly, nonatomic) unsigned long long extractionType; // @synthesize extractionType=_extractionType;
@property(readonly, nonatomic) NSString *cnContactIdentifier; // @synthesize cnContactIdentifier=_cnContactIdentifier;
@property(readonly, nonatomic) int abPersonId; // @synthesize abPersonId=_abPersonId;
@property(readonly, nonatomic) SGContact *contact; // @synthesize contact=_contact;
@property(readonly, nonatomic) int state; // @synthesize state=_state;
- (void).cxx_destruct;
- (id)description;
- (void)setCnContactIdentifier:(id)arg1;
- (void)setExtractionType;
- (unsigned long long)hash;
- (_Bool)isEqualToRealtimeContact:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)markedAsHarvested;
- (id)initWithState:(int)arg1 contact:(id)arg2 abPersonId:(int)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

