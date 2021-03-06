//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClockKit/NSXPCListenerDelegate-Protocol.h>

@class BKSApplicationStateMonitor, NSMutableDictionary, NSMutableSet, NSString;

@interface CLKComplicationClientManager : NSObject <NSXPCListenerDelegate>
{
    NSMutableDictionary *_clientsByIdentifier;
    NSMutableDictionary *_waitForClientRegistriesByIdentifier;
    NSMutableSet *_anonymousClients;
    NSMutableSet *_clientPIDs;
    BKSApplicationStateMonitor *_applicationStateMonitor;
    unsigned long long _nextWaitForClientTokenValue;
    CDUnknownBlockType _clientRegistrationHandler;
    CDUnknownBlockType _clientUnregistrationHandler;
}

+ (id)sharedClientManager;
@property(copy, nonatomic) CDUnknownBlockType clientUnregistrationHandler; // @synthesize clientUnregistrationHandler=_clientUnregistrationHandler;
@property(copy, nonatomic) CDUnknownBlockType clientRegistrationHandler; // @synthesize clientRegistrationHandler=_clientRegistrationHandler;
- (void).cxx_destruct;
- (void)_handleApplicationStateChange:(id)arg1;
- (void)_removeClient:(id)arg1;
- (void)_addClient:(id)arg1;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)stopWaitingForClientWithIdentifier:(id)arg1 forToken:(struct NSNumber *)arg2;
- (struct NSNumber *)waitForClientWithIdentifier:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)enumerateClientsWithBlock:(CDUnknownBlockType)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

