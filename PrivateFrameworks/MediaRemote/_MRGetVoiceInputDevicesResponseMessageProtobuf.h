//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaRemote/NSCopying-Protocol.h>

@interface _MRGetVoiceInputDevicesResponseMessageProtobuf : PBCodable <NSCopying>
{
    CDStruct_9f2792e4 _deviceIDs;
    unsigned int _errorCode;
    CDStruct_70a7dc3e _has;
}

@property(nonatomic) unsigned int errorCode; // @synthesize errorCode=_errorCode;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)copyTo:(id)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
@property(nonatomic) _Bool hasErrorCode;
- (void)setDeviceIDs:(unsigned int *)arg1 count:(unsigned long long)arg2;
- (unsigned int)deviceIDsAtIndex:(unsigned long long)arg1;
- (void)addDeviceIDs:(unsigned int)arg1;
- (void)clearDeviceIDs;
@property(readonly, nonatomic) unsigned int *deviceIDs;
@property(readonly, nonatomic) unsigned long long deviceIDsCount;
- (void)dealloc;

@end

