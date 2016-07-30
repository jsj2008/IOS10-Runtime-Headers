//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PassKitCore/NSCopying-Protocol.h>

@class NSMutableArray;

@interface PKProtobufPaymentDeviceResponse : PBCodable <NSCopying>
{
    unsigned int _defaultPaymentInstrumentIndex;
    NSMutableArray *_paymentInstruments;
    _Bool _deviceDisabled;
    _Bool _locked;
    _Bool _userDisabled;
    struct {
        unsigned int defaultPaymentInstrumentIndex:1;
        unsigned int deviceDisabled:1;
        unsigned int locked:1;
        unsigned int userDisabled:1;
    } _has;
}

+ (Class)paymentInstrumentsType;
@property(nonatomic) _Bool deviceDisabled; // @synthesize deviceDisabled=_deviceDisabled;
@property(nonatomic) _Bool userDisabled; // @synthesize userDisabled=_userDisabled;
@property(nonatomic) unsigned int defaultPaymentInstrumentIndex; // @synthesize defaultPaymentInstrumentIndex=_defaultPaymentInstrumentIndex;
@property(retain, nonatomic) NSMutableArray *paymentInstruments; // @synthesize paymentInstruments=_paymentInstruments;
@property(nonatomic) _Bool locked; // @synthesize locked=_locked;
- (void).cxx_destruct;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasDeviceDisabled;
@property(nonatomic) _Bool hasUserDisabled;
@property(nonatomic) _Bool hasDefaultPaymentInstrumentIndex;
- (id)paymentInstrumentsAtIndex:(unsigned long long)arg1;
- (unsigned long long)paymentInstrumentsCount;
- (void)addPaymentInstruments:(id)arg1;
- (void)clearPaymentInstruments;
@property(nonatomic) _Bool hasLocked;

@end
