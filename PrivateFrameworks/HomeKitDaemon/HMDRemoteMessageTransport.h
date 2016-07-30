//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFMessageTransport.h>

@class HMDAccountRegistry;

@interface HMDRemoteMessageTransport : HMFMessageTransport
{
    _Bool _secure;
    HMDAccountRegistry *_accountRegistry;
    long long _qualityOfService;
}

+ (id)remoteMessageFromMessage:(id)arg1 accountRegistry:(id)arg2;
@property(readonly, nonatomic) long long qualityOfService; // @synthesize qualityOfService=_qualityOfService;
@property(readonly, nonatomic, getter=isSecure) _Bool secure; // @synthesize secure=_secure;
@property(readonly, nonatomic) HMDAccountRegistry *accountRegistry; // @synthesize accountRegistry=_accountRegistry;
- (void).cxx_destruct;
- (long long)compareCapability:(id)arg1 key:(id)arg2 withCapability:(id)arg3;
- (_Bool)doesResponse:(id)arg1 matchAllCapabilities:(id)arg2;
- (id)matchResponse:(id)arg1 requestedCapabilities:(id)arg2;
- (id)remoteMessageFromMessage:(id)arg1;
- (void)postDidReceiveRemoteMessageWithNoListenerFromDevice:(id)arg1;
- (id)initWithAccountRegistry:(id)arg1;
- (_Bool)canSendMessage:(id)arg1;
- (id)init;

@end
