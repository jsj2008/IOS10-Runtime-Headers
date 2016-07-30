//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDDataObserver-Protocol.h>
#import <HealthDaemon/HDDatabaseProtectedDataObserver-Protocol.h>
#import <HealthDaemon/HDFitnessFriendsCloudKitManagerChangesObserver-Protocol.h>
#import <HealthDaemon/HDFitnessFriendsManagerReadyObserver-Protocol.h>

@class HDFitnessFriendsManager, NSArray, NSNumber, NSString;
@protocol HDFitnessFriendsActivityDataManagerDelegate, OS_dispatch_queue;

@interface HDFitnessFriendsActivityDataManager : NSObject <HDFitnessFriendsCloudKitManagerChangesObserver, HDDataObserver, HDDatabaseProtectedDataObserver, HDFitnessFriendsManagerReadyObserver>
{
    NSObject<OS_dispatch_queue> *_cloudKitManagerObserverQueue;
    NSArray *_newSnapshots;
    NSArray *_newWorkouts;
    NSArray *_newAchievements;
    NSNumber *_workoutAnchor;
    NSObject<OS_dispatch_queue> *_healthDataQueue;
    _Bool _hasInitialProtectedDataFetchBeenPerformed;
    id <HDFitnessFriendsActivityDataManagerDelegate> _delegate;
    HDFitnessFriendsManager *_fitnessFriendsManager;
}

@property(nonatomic) _Bool hasInitialProtectedDataFetchBeenPerformed; // @synthesize hasInitialProtectedDataFetchBeenPerformed=_hasInitialProtectedDataFetchBeenPerformed;
@property(nonatomic) __weak HDFitnessFriendsManager *fitnessFriendsManager; // @synthesize fitnessFriendsManager=_fitnessFriendsManager;
@property(nonatomic) __weak id <HDFitnessFriendsActivityDataManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)cloudKitManager:(id)arg1 didRecieveNewFriendAchievements:(id)arg2 moreComing:(_Bool)arg3 changesProcessedHandler:(CDUnknownBlockType)arg4;
- (void)cloudKitManager:(id)arg1 didRecieveNewFriendWorkouts:(id)arg2 moreComing:(_Bool)arg3 changesProcessedHandler:(CDUnknownBlockType)arg4;
- (void)cloudKitManager:(id)arg1 didRecieveNewActivitySnapshots:(id)arg2 moreComing:(_Bool)arg3 changesProcessedHandler:(CDUnknownBlockType)arg4;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(_Bool)arg2;
- (_Bool)_queue_getAllFitnessFriendsDataAndNotifyDelegate;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)_queue_samplesAdded:(id)arg1;
- (void)_queue_notifyDelegateOfNewSnapshots:(id)arg1 workouts:(id)arg2 achievements:(id)arg3;
- (_Bool)deleteAllFitnessFriendData;
- (_Bool)_queue_deleteAllFitnessFriendData;
- (id)_unhiddenSamplesInFilterableSamples:(id)arg1;
- (void)saveFitnessFriendActivitySnapshots:(id)arg1 workouts:(id)arg2 achievements:(id)arg3;
- (void)_queue_saveFitnessFriendActivitySnapshots:(id)arg1 workouts:(id)arg2 achievements:(id)arg3;
- (id)achievementsForActivitySnapshot:(id)arg1;
- (id)_workoutsAfterAnchor:(id *)arg1 withPredicate:(id)arg2 profile:(id)arg3;
- (id)workoutsForActivitySnapshot:(id)arg1;
- (id)_healthDataManager;
- (void)dealloc;
- (void)fitnessFriendsManagerReady:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
