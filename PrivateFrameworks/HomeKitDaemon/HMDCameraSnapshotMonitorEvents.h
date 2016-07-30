//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/HMFMessageReceiver-Protocol.h>
#import <HomeKitDaemon/HMFTimerDelegate-Protocol.h>

@class HMDAccessory, HMDCameraSnapshotManager, HMFMessageDispatcher, NSMutableSet, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDCameraSnapshotMonitorEvents : NSObject <HMFMessageReceiver, HMFLogging, HMFTimerDelegate>
{
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    HMFMessageDispatcher *_msgDispatcher;
    NSUUID *_uniqueIdentifier;
    HMDCameraSnapshotManager *_snapshotManager;
    NSMutableSet *_snapShotNotificationResponseTimers;
    HMDAccessory *_accessory;
    NSString *_bulletinImagesDirectory;
    NSMutableSet *_characteristicsList;
}

+ (id)logCategory;
@property(readonly, nonatomic) NSMutableSet *characteristicsList; // @synthesize characteristicsList=_characteristicsList;
@property(readonly, nonatomic) NSString *bulletinImagesDirectory; // @synthesize bulletinImagesDirectory=_bulletinImagesDirectory;
@property(readonly, nonatomic) __weak HMDAccessory *accessory; // @synthesize accessory=_accessory;
@property(retain, nonatomic) NSMutableSet *snapShotNotificationResponseTimers; // @synthesize snapShotNotificationResponseTimers=_snapShotNotificationResponseTimers;
@property(readonly, nonatomic) __weak HMDCameraSnapshotManager *snapshotManager; // @synthesize snapshotManager=_snapshotManager;
@property(readonly, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(retain, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (void).cxx_destruct;
- (void)timerDidFire:(id)arg1;
- (void)_handleSnapshotResponse:(id)arg1 cameraSessionID:(id)arg2 changedCharacteristics:(id)arg3 response:(id)arg4 responseTimer:(id)arg5;
- (void)_characteristicsUpdated:(id)arg1;
- (void)_handleAccessoryCharacteristicsChangedNotification:(id)arg1;
- (void)_subscribeToNotifications;
- (void)_monitorForEventsForServices:(id)arg1;
- (void)monitorForEventsForServices:(id)arg1;
- (void)dealloc;
- (void)handleAccessoryIsReachable:(id)arg1;
- (void)registerForMessages;
- (id)logIdentifier;
- (id)initWithSnapshotManager:(id)arg1 accessory:(id)arg2 workQueue:(id)arg3 msgDispatcher:(id)arg4;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property(readonly, nonatomic) NSUUID *messageTargetUUID;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
