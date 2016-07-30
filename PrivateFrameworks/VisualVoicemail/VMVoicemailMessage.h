//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <VisualVoicemail/NSCopying-Protocol.h>

@class NSString, VMAudioMessage;

@interface VMVoicemailMessage : PBCodable <NSCopying>
{
    double _date;
    double _duration;
    VMAudioMessage *_audio;
    NSString *_callbackDestinationID;
    NSString *_dataURL;
    unsigned int _flags;
    unsigned int _identifier;
    unsigned int _protocolVersion;
    unsigned int _remoteUID;
    NSString *_senderDestinationID;
    struct {
        unsigned int date:1;
        unsigned int duration:1;
        unsigned int flags:1;
        unsigned int identifier:1;
        unsigned int protocolVersion:1;
        unsigned int remoteUID:1;
    } _has;
}

@property(nonatomic) unsigned int protocolVersion; // @synthesize protocolVersion=_protocolVersion;
@property(retain, nonatomic) VMAudioMessage *audio; // @synthesize audio=_audio;
@property(nonatomic) unsigned int flags; // @synthesize flags=_flags;
@property(retain, nonatomic) NSString *dataURL; // @synthesize dataURL=_dataURL;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(retain, nonatomic) NSString *callbackDestinationID; // @synthesize callbackDestinationID=_callbackDestinationID;
@property(retain, nonatomic) NSString *senderDestinationID; // @synthesize senderDestinationID=_senderDestinationID;
@property(nonatomic) double date; // @synthesize date=_date;
@property(nonatomic) unsigned int identifier; // @synthesize identifier=_identifier;
@property(nonatomic) unsigned int remoteUID; // @synthesize remoteUID=_remoteUID;
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
@property(nonatomic) _Bool hasProtocolVersion;
@property(readonly, nonatomic) _Bool hasAudio;
@property(nonatomic) _Bool hasFlags;
@property(readonly, nonatomic) _Bool hasDataURL;
@property(nonatomic) _Bool hasDuration;
@property(readonly, nonatomic) _Bool hasCallbackDestinationID;
@property(readonly, nonatomic) _Bool hasSenderDestinationID;
@property(nonatomic) _Bool hasDate;
@property(nonatomic) _Bool hasIdentifier;
@property(nonatomic) _Bool hasRemoteUID;

@end
