//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MIME/MFMessageBody.h>

#import <Message/MFCollectingDataConsumer-Protocol.h>

@class MFBufferedDataConsumer, NSData, NSString;

@interface _MFOutgoingMessageBody : MFMessageBody <MFCollectingDataConsumer>
{
    MFBufferedDataConsumer *_consumer;
    NSData *_rawData;
    unsigned long long _count;
    _Bool _lastNewLine;
}

- (id)data;
- (void)done;
- (long long)appendData:(id)arg1;
- (id)rawData;
- (_Bool)isLastCharacterNewLine;
- (unsigned long long)count;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

