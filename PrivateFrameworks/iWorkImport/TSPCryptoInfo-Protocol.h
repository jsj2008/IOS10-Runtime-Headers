//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <iWorkImport/NSObject-Protocol.h>

@class NSArray, SFUCryptoKey;
@protocol TSPMutableCryptoInfo;

@protocol TSPCryptoInfo <NSObject>
@property(readonly, nonatomic) unsigned long long decodedLength;
@property(readonly, nonatomic) NSArray *blockInfos;
@property(readonly, nonatomic) unsigned long long preferredBlockSize;
@property(readonly, nonatomic) SFUCryptoKey *cryptoKey;
- (id <TSPMutableCryptoInfo>)mutableCryptoInfoCopy;
@end
