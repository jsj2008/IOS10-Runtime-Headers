//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSMutableArray, NTPBRecordBase;

@interface NTPBArticleListRecord : PBCodable <NSCopying>
{
    NSMutableArray *_articleIds;
    NTPBRecordBase *_base;
}

+ (Class)articleIdsType;
@property(retain, nonatomic) NSMutableArray *articleIds; // @synthesize articleIds=_articleIds;
@property(retain, nonatomic) NTPBRecordBase *base; // @synthesize base=_base;
- (void)mergeFrom:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)writeTo:(id)arg1;
- (_Bool)readFrom:(id)arg1;
- (id)dictionaryRepresentation;
- (id)description;
- (id)articleIdsAtIndex:(unsigned long long)arg1;
- (unsigned long long)articleIdsCount;
- (void)addArticleIds:(id)arg1;
- (void)clearArticleIds;
@property(readonly, nonatomic) _Bool hasBase;
- (void)dealloc;

@end
