//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <KeyboardServices/APSConnectionDelegate-Protocol.h>
#import <KeyboardServices/NSXPCListenerDelegate-Protocol.h>
#import <KeyboardServices/_KSTextReplacementCancellation-Protocol.h>
#import <KeyboardServices/_KSTextReplacementServiceProtocol-Protocol.h>
#import <KeyboardServices/_KSTextReplacementStoreProtocol-Protocol.h>

@class APSConnection, NSMutableDictionary, NSMutableSet, NSString, NSXPCListener, _KSTextReplacementManager;
@protocol OS_dispatch_queue;

@interface _KSTextReplacementServer : NSObject <_KSTextReplacementServiceProtocol, NSXPCListenerDelegate, APSConnectionDelegate, _KSTextReplacementStoreProtocol, _KSTextReplacementCancellation>
{
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_clientQueue;
    _Bool _setupAssistanceRunning;
    _KSTextReplacementManager *_textReplacementManager;
    APSConnection *_pushConnection;
    NSXPCListener *_listener;
    NSMutableDictionary *_clientsMap;
    NSMutableSet *_clientsWithReadAccess;
    NSString *_directoryPath;
}

+ (_Bool)isBlackListed:(unsigned int)arg1;
+ (id)_keyForConnection:(id)arg1;
+ (id)textReplacementServer;
@property(nonatomic) _Bool setupAssistanceRunning; // @synthesize setupAssistanceRunning=_setupAssistanceRunning;
@property(copy, nonatomic) NSString *directoryPath; // @synthesize directoryPath=_directoryPath;
@property(retain, nonatomic) NSMutableSet *clientsWithReadAccess; // @synthesize clientsWithReadAccess=_clientsWithReadAccess;
@property(retain, nonatomic) NSMutableDictionary *clientsMap; // @synthesize clientsMap=_clientsMap;
@property(retain, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
@property(retain, nonatomic) APSConnection *pushConnection; // @synthesize pushConnection=_pushConnection;
- (void).cxx_destruct;
- (void)requestSyncWithCallback:(CDUnknownBlockType)arg1;
- (void)forceCloudKitSync:(_Bool)arg1;
- (void)importSampleShortcuts;
- (id)appleLanguagesPreference;
- (_Bool)sampleShortcutWasImported;
- (void)importSampleShortcutsIfNecessary;
- (void)buddySetupDidFinish;
- (void)connection:(id)arg1 didReceiveToken:(id)arg2 forTopic:(id)arg3 identifier:(id)arg4;
- (void)connection:(id)arg1 didReceivePublicToken:(id)arg2;
- (void)connection:(id)arg1 didReceiveIncomingMessage:(id)arg2;
- (void)registerForPushNotifications;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)cancelPendingUpdatesWithReply:(CDUnknownBlockType)arg1;
- (_Bool)clientHasReadAccess;
- (void)queryTextReplacementsWithPredicate:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)queryTextReplacementEntriesWithReply:(CDUnknownBlockType)arg1;
- (void)requestSyncWithReply:(CDUnknownBlockType)arg1;
- (void)addEntries:(id)arg1 removeEntries:(id)arg2 withReply:(CDUnknownBlockType)arg3;
- (void)queryTextReplacementsWithPredicate:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)queryTextReplacementsWithCallback:(CDUnknownBlockType)arg1;
- (id)textReplacementEntries;
- (_Bool)_cancelPendingUpdateForClient:(id)arg1;
- (void)requestSyncWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)cancelPendingUpdates;
- (void)removeAllEntries;
- (void)addEntries:(id)arg1 removeEntries:(id)arg2 forClient:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
- (void)addEntries:(id)arg1 removeEntries:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)shutdown;
- (void)start;
- (void)cleanup;
@property(retain, nonatomic) _KSTextReplacementManager *textReplacementManager; // @synthesize textReplacementManager=_textReplacementManager;
- (_Bool)isSetupAssistantRunning;
- (void)dealloc;
- (id)initWithDatabaseDirectoryPath:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

