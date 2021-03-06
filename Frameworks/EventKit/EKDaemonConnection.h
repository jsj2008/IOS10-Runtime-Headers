//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <EventKit/CADClientInterface-Protocol.h>

@class NSMutableDictionary, NSXPCConnection;
@protocol CADInterface, OS_dispatch_queue;

@interface EKDaemonConnection : NSObject <CADClientInterface>
{
    NSObject<OS_dispatch_queue> *_connectionLock;
    id <CADInterface> _remoteOperationProxy;
    NSObject<OS_dispatch_queue> *_replyHandlerLock;
    NSMutableDictionary *_cancellableOperations;
    unsigned int _nextCancellationToken;
    _Bool _registeredForStartNote;
    NSXPCConnection *_xpcConnection;
    id _delegate;
}

+ (void)waitOnSemaphoreWithBlock:(CDUnknownBlockType)arg1;
@property __weak id delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)CADClientReceiveOccurrenceCacheSearchResults:(id)arg1 forSearchToken:(unsigned int)arg2 finished:(_Bool)arg3;
- (void)_finishAllRepliesOnServerDeath;
- (void)cancelRemoteOperation:(unsigned int)arg1;
- (void)removeCancellableRemoteOperation:(unsigned int)arg1;
- (unsigned int)addCancellableRemoteOperation:(id)arg1;
- (void)_daemonRestarted;
@property(readonly, retain, nonatomic) id <CADInterface> CADOperationProxy;
@property(readonly, retain, nonatomic) NSXPCConnection *xpcConnection; // @synthesize xpcConnection=_xpcConnection;
- (void)disconnect;
- (_Bool)_connectToServer;
- (void)dealloc;
- (id)init;

@end

