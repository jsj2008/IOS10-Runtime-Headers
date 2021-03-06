//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <IMAVCore/IMSystemMonitorListener-Protocol.h>

@class IMAVChatParticipant, IMAccount, IMHandle, IMPair, IMTimingCollection, NSArray, NSData, NSDate, NSDictionary, NSError, NSMutableArray, NSMutableDictionary, NSNumber, NSString, NSTimer;
@protocol OS_dispatch_queue;

@interface IMAVChat : NSObject <IMSystemMonitorListener>
{
    NSString *_GUID;
    NSString *_conferenceID;
    NSMutableArray *_participants;
    IMHandle *_initiator;
    IMAVChatParticipant *_localParticipant;
    NSMutableDictionary *_conferenceStateCache;
    NSNumber *_natType;
    NSMutableDictionary *_extraServerContext;
    NSDate *_dateCreated;
    NSDate *_dateStartedConnecting;
    NSDate *_dateConnected;
    NSDate *_dateEnded;
    NSDate *_dateReceivedRelayInitiate;
    NSDate *_dateReceivedRelayUpdate;
    NSDate *_interruptionBegan;
    NSDictionary *_pingTestResults;
    NSNumber *_frontCameraCaptureTime;
    NSNumber *_backCameraCaptureTime;
    NSNumber *_dataRate;
    NSNumber *_dataUploaded;
    NSNumber *_dataDownloaded;
    IMTimingCollection *_timingCollection;
    unsigned long long _localNetworkConnectionType;
    unsigned long long _remoteNetworkConnectionType;
    long long _pingTestResult;
    long long _networkCheckResult;
    NSDictionary *_callerProperties;
    NSObject<OS_dispatch_queue> *_conferenceQueue;
    NSData *_relayRemotePrimaryIdentifier;
    id _conferenceController;
    unsigned int _sessionID;
    NSError *_error;
    unsigned int _localState;
    unsigned int _lastPostedState;
    IMPair *_pendingPreemptiveRelayInitate;
    NSString *_callStatisticsGUID;
    double _connectionTimeoutTime;
    double _invitationTimeoutTime;
    _Bool _hasGatheredInfo;
    _Bool _hasReceivedFirstFrame;
    _Bool _hasPendingAccept;
    _Bool _hasPendingInit;
    _Bool _isCaller;
    _Bool _isVideo;
    int _connectionType;
    _Bool _needsVideoRestart;
    _Bool _needsAudioRestart;
    _Bool _isVideoInterrupted;
    _Bool _isAudioInterrupted;
    _Bool _connectionStarted;
    _Bool _relayed;
    _Bool _isCallUpgrade;
    _Bool _terminating;
    _Bool _didRemoteMute;
    _Bool _didRemotePause;
    _Bool _callUpgrade;
    _Bool _airplaneModeEnabled;
    _Bool _metadataFinalized;
    NSTimer *_inviteTimeoutTimer;
    NSDate *_inviteTimeoutTimerStart;
    NSTimer *_firstFrameTimeoutTimer;
    NSTimer *_connectionTimeoutTimer;
    NSTimer *_breakBeforeMakeTimeoutTimer;
    struct CGSize _portraitAspectRatios;
    struct CGSize _landscapeAspectRatios;
}

+ (int)systemSupportsNewOutgoingConferenceTo:(id)arg1 isVideo:(_Bool)arg2;
+ (void)setDefaultConnectionTimeoutTime:(double)arg1;
+ (double)defaultConnectionTimeoutTime;
+ (void)setDefaultInvitationTimeoutTime:(double)arg1;
+ (double)defaultInvitationTimeoutTime;
+ (id)_avChatWithMatchingIMHandles:(id)arg1 video:(_Bool)arg2;
+ (id)_avChatConnectingFromIMHandle:(id)arg1;
+ (id)_avChatWaitingForReplyFromIMHandle:(id)arg1 orConferenceID:(id)arg2;
+ (id)_avChatInvitedByIMHandle:(id)arg1 orConferenceID:(id)arg2;
+ (id)_bestGuessAVChatWithIMHandle:(id)arg1 conferenceID:(id)arg2 sessionID:(unsigned int)arg3 properties:(id)arg4;
+ (id)_chatsWithIMAVChatState:(unsigned int)arg1;
+ (id)_acceptedChats;
+ (id)_connectedChats;
+ (id)_connectingChats;
+ (id)_outgoingInvitations;
+ (id)_incomingInvitations;
+ (id)_avChatWithGUID:(id)arg1;
+ (id)_avChatWithConferenceID:(id)arg1;
+ (id)_chatListLock;
+ (id)_nonFinalChat;
+ (id)_activeChat;
+ (id)_connectedChat;
+ (id)_chatList;
+ (id)_chatWithSessionID:(unsigned int)arg1;
+ (id)_avChatArray;
+ (id)avChatWithGUID:(id)arg1;
+ (id)chatsWithIMAVChatState:(unsigned int)arg1;
+ (id)acceptedChats;
+ (id)connectedChats;
+ (id)connectingChats;
+ (id)outgoingInvitations;
+ (id)incomingInvitations;
+ (id)nonFinalChat;
+ (id)activeChat;
+ (id)connectedChat;
+ (id)chatList;
+ (id)_proxyRepresentationForIMHandle:(id)arg1;
+ (id)_imHandleFromProxyRepresentation:(id)arg1;
@property(nonatomic, setter=_setMetadataFinalized:) _Bool metadataFinalized; // @synthesize metadataFinalized=_metadataFinalized;
@property(nonatomic, setter=_setAirplaneModeEnabled:) _Bool airplaneModeEnabled; // @synthesize airplaneModeEnabled=_airplaneModeEnabled;
@property(nonatomic, getter=isCallUpgrade, setter=_setCallUpgrade:) _Bool callUpgrade; // @synthesize callUpgrade=_callUpgrade;
@property(nonatomic, setter=_setDidRemotePause:) _Bool didRemotePause; // @synthesize didRemotePause=_didRemotePause;
@property(nonatomic, setter=_setDidRemoteMute:) _Bool didRemoteMute; // @synthesize didRemoteMute=_didRemoteMute;
@property(nonatomic, getter=isTerminating, setter=_setTerminating:) _Bool terminating; // @synthesize terminating=_terminating;
@property(nonatomic, setter=_setLandscapeAspectRatios:) struct CGSize landscapeAspectRatios; // @synthesize landscapeAspectRatios=_landscapeAspectRatios;
@property(nonatomic, setter=_setPortraitAspectRatios:) struct CGSize portraitAspectRatios; // @synthesize portraitAspectRatios=_portraitAspectRatios;
@property(retain, nonatomic, setter=_setBreakBeforeMakeTimeoutTimer:) NSTimer *breakBeforeMakeTimeoutTimer; // @synthesize breakBeforeMakeTimeoutTimer=_breakBeforeMakeTimeoutTimer;
@property(retain, nonatomic, setter=_setConnectionTimeoutTimer:) NSTimer *connectionTimeoutTimer; // @synthesize connectionTimeoutTimer=_connectionTimeoutTimer;
@property(retain, nonatomic, setter=_setFirstFrameTimeoutTimer:) NSTimer *firstFrameTimeoutTimer; // @synthesize firstFrameTimeoutTimer=_firstFrameTimeoutTimer;
@property(retain, nonatomic, setter=_setInviteTimeoutTimerStart:) NSDate *inviteTimeoutTimerStart; // @synthesize inviteTimeoutTimerStart=_inviteTimeoutTimerStart;
@property(retain, nonatomic, setter=_setInviteTimeoutTimer:) NSTimer *inviteTimeoutTimer; // @synthesize inviteTimeoutTimer=_inviteTimeoutTimer;
@property(nonatomic, setter=_setNetworkCheckResult:) long long _networkCheckResult; // @synthesize _networkCheckResult;
@property(nonatomic, setter=_setPingTestResult:) long long _pingTestResult; // @synthesize _pingTestResult;
@property(retain, nonatomic, setter=_setPingTestResults:) NSDictionary *_pingTestResults; // @synthesize _pingTestResults;
@property(readonly, retain) NSDictionary *_extraServerContext; // @synthesize _extraServerContext;
@property(readonly, retain, nonatomic) NSArray *participants; // @synthesize participants=_participants;
@property(readonly, retain, nonatomic) IMAVChatParticipant *localParticipant; // @synthesize localParticipant=_localParticipant;
@property(readonly, nonatomic) unsigned int state; // @synthesize state=_localState;
@property(readonly, retain, nonatomic) NSDate *dateEnded; // @synthesize dateEnded=_dateEnded;
@property(readonly, retain, nonatomic) NSDate *dateCreated; // @synthesize dateCreated=_dateCreated;
@property(readonly, retain, nonatomic) NSDate *dateConnected; // @synthesize dateConnected=_dateConnected;
@property(nonatomic, setter=_setConferenceController:) id _conferenceController; // @synthesize _conferenceController;
@property(retain, nonatomic, setter=_setGUID:) NSString *GUID; // @synthesize GUID=_GUID;
@property(retain, nonatomic, setter=_setConferenceID:) NSString *conferenceID; // @synthesize conferenceID=_conferenceID;
@property(readonly, nonatomic) _Bool isCaller; // @synthesize isCaller=_isCaller;
@property(nonatomic, getter=isRelayed) _Bool relayed; // @synthesize relayed=_relayed;
@property(retain, nonatomic, setter=_setRelayRemotePrimaryIdentifier:) NSData *_relayRemotePrimaryIdentifier; // @synthesize _relayRemotePrimaryIdentifier;
@property(nonatomic, setter=_setConnectionStarted:) _Bool _connectionStarted; // @synthesize _connectionStarted;
@property(nonatomic, setter=_setIsAudioInterrupted:) _Bool _isAudioInterrupted; // @synthesize _isAudioInterrupted;
@property(nonatomic, setter=_setIsVideoInterrupted:) _Bool _isVideoInterrupted; // @synthesize _isVideoInterrupted;
@property(retain, nonatomic, setter=setDataDownloaded:) NSNumber *dataDownloaded; // @synthesize dataDownloaded=_dataDownloaded;
@property(retain, nonatomic, setter=setDataUploaded:) NSNumber *dataUploaded; // @synthesize dataUploaded=_dataUploaded;
@property(retain, nonatomic, setter=setDataRate:) NSNumber *dataRate; // @synthesize dataRate=_dataRate;
@property(retain, nonatomic, setter=_setBackCameraCaptureTime:) NSNumber *_backCameraCaptureTime; // @synthesize _backCameraCaptureTime;
@property(retain, nonatomic, setter=_setFrontCameraCaptureTime:) NSNumber *_frontCameraCaptureTime; // @synthesize _frontCameraCaptureTime;
@property(retain, nonatomic, setter=_setInterruptionBegan:) NSDate *_interruptionBegan; // @synthesize _interruptionBegan;
@property(readonly, nonatomic) _Bool isVideo; // @synthesize isVideo=_isVideo;
@property(nonatomic, setter=_setNeedsVideoRestart:) _Bool _needsVideoRestart; // @synthesize _needsVideoRestart;
@property(nonatomic, setter=_setNeedsAudioRestart:) _Bool _needsAudioRestart; // @synthesize _needsAudioRestart;
@property(nonatomic, setter=_setRemoteNetworkConnectionType:) unsigned long long _remoteNetworkConnectionType; // @synthesize _remoteNetworkConnectionType;
@property(nonatomic, setter=_setLocalNetworkConnectionType:) unsigned long long _localNetworkConnectionType; // @synthesize _localNetworkConnectionType;
@property(retain, nonatomic, setter=_setNatType:) NSNumber *_natType; // @synthesize _natType;
@property(readonly, retain, nonatomic) IMHandle *initiatorIMHandle; // @synthesize initiatorIMHandle=_initiator;
@property(retain, nonatomic, setter=_setCallerProperties:) NSDictionary *callerProperties; // @synthesize callerProperties=_callerProperties;
@property(readonly, nonatomic) unsigned int sessionID; // @synthesize sessionID=_sessionID;
@property(nonatomic, setter=_setIsCallUpgrade:) _Bool _isCallUpgrade; // @synthesize _isCallUpgrade;
@property(retain, nonatomic, setter=_setCallStatisticsGUID:) NSString *_callStatisticsGUID; // @synthesize _callStatisticsGUID;
@property(nonatomic, setter=_setConnectionType:) int _connectionType; // @synthesize _connectionType;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *_conferenceQueue; // @synthesize _conferenceQueue;
- (_Bool)_cachedBoolForKey:(id)arg1;
- (_Bool)_hasCachedBoolForKey:(id)arg1;
- (void)_cacheBool:(_Bool)arg1 forKey:(id)arg2;
- (void)_clearCache;
- (id)_timings;
- (void)_noteFirstFrame;
- (void)_postNotificationName:(id)arg1 participant:(id)arg2 userInfo:(id)arg3;
- (void)_postNotificationName:(id)arg1 userInfo:(id)arg2;
- (void)_handleAVError:(id)arg1;
@property(readonly, retain, nonatomic) NSArray *_imHandles;
@property(readonly, nonatomic) _Bool isUsingWifi;
@property(readonly, nonatomic) _Bool _usesRelay;
@property(readonly, nonatomic) NSNumber *_relayConnectDuration;
@property(readonly, nonatomic) NSNumber *_callDuration;
@property(readonly, nonatomic) NSNumber *_connectDuration;
@property(readonly, nonatomic) NSNumber *_currentNatType;
@property(readonly, nonatomic) NSNumber *_remoteNatType;
- (_Bool)isConferenceSilent;
@property(readonly, nonatomic) long long _bustedCallID;
- (void)_setDateConnected;
- (void)_setCreationDate;
@property(readonly, nonatomic) unsigned int endedReason;
@property(readonly, nonatomic) int endedError;
@property(readonly, retain, nonatomic) IMAccount *account;
@property(readonly, nonatomic) _Bool _isProxy;
@property(readonly, retain, nonatomic) IMHandle *otherIMHandle;
- (id)participantMatchingIMHandle:(id)arg1;
- (id)vcPartyIDForIMHandle:(id)arg1;
- (id)participantWithID:(id)arg1;
- (id)participantWithAVConferenceCallID:(long long)arg1;
- (void)_applicationWillTerminate:(id)arg1;
- (void)handleGenericAVMessageFromParticipant:(id)arg1 type:(unsigned int)arg2 userInfo:(id)arg3;
- (void)_handleGenericAVMessageFromParticipant:(id)arg1 type:(unsigned int)arg2 userInfo:(id)arg3 handled:(_Bool)arg4;
- (void)_responseToVCInvite:(id)arg1;
- (void)__responseToVCInvite:(id)arg1;
- (_Bool)_processVCResponseDict:(id)arg1;
- (void)_setStateDisconnected;
- (void)declineInvitation;
- (void)declineInvitationWithResponse:(unsigned int)arg1;
- (void)acceptInvitation;
- (void)invite:(id)arg1;
- (void)invite:(id)arg1 additionalPeers:(id)arg2;
- (void)invite:(id)arg1 additionalPeers:(id)arg2 excludingPushTokens:(id)arg3;
- (void)cancelInvitation;
- (void)_cancelInvitationWithReason:(unsigned int)arg1 error:(int)arg2;
- (void)inviteAll;
- (void)_breakCallsIfNecessary:(_Bool)arg1;
- (_Bool)_isVideoUpgradeTo:(id)arg1;
- (_Bool)_isCallUpgradeTo:(id)arg1;
- (id)inviteesInfo;
- (void)_endChatWithReason:(unsigned int)arg1 andError:(int)arg2;
- (void)endChatWithReason:(unsigned int)arg1 error:(int)arg2;
- (void)endChatWithError:(int)arg1;
- (void)endChatWithReason:(unsigned int)arg1;
- (void)endChat;
- (void)beginChat;
- (id)description;
- (void)dealloc;
- (id)initOutgoingTo:(id)arg1 isVideo:(_Bool)arg2 isRelayed:(_Bool)arg3 GUID:(id)arg4;
- (id)initOutgoingTo:(id)arg1 isVideo:(_Bool)arg2 isRelayed:(_Bool)arg3;
- (id)initOutgoingTo:(id)arg1 isVideo:(_Bool)arg2;
- (id)_initOutgoingTo:(id)arg1 isVideo:(_Bool)arg2 isRelayed:(_Bool)arg3 GUID:(id)arg4;
- (id)initIncomingFrom:(id)arg1 isVideo:(_Bool)arg2 callerProperties:(id)arg3;
- (id)_initWith:(id)arg1 invitedBy:(id)arg2 sessionID:(unsigned int)arg3 isRelayed:(_Bool)arg4 GUID:(id)arg5 video:(_Bool)arg6 extraProperties:(id)arg7;
- (id)_initWith:(id)arg1 invitedBy:(id)arg2 sessionID:(unsigned int)arg3 GUID:(id)arg4 video:(_Bool)arg5 extraProperties:(id)arg6;
- (void)setRemoteVideoPresentationState:(unsigned int)arg1;
- (void)setRemoteVideoPresentationSize:(struct CGSize)arg1;
@property(nonatomic) void *localVideoBackLayer;
@property(nonatomic) void *localVideoLayer;
- (void)setLocalAspectRatio:(struct CGSize)arg1 cameraOrientation:(unsigned int)arg2 cameraType:(unsigned int)arg3;
- (struct CGSize)localAspectRatioForCameraOrientation:(unsigned int)arg1 cameraType:(unsigned int)arg2;
@property(nonatomic) unsigned int cameraOrientation;
@property(nonatomic) unsigned int cameraType;
- (void)_postParticipantMediaChangeNotification:(id)arg1 cameraChanged:(_Bool)arg2 orientationChanged:(_Bool)arg3 aspectChanged:(_Bool)arg4 cameraWillSwitch:(_Bool)arg5 camera:(unsigned int)arg6 orientation:(unsigned int)arg7 aspect:(struct CGSize)arg8;
- (_Bool)stopPreview;
- (_Bool)startPreviewWithError:(id *)arg1;
@property(nonatomic) double connectionTimeoutTime;
@property(nonatomic) double invitationTimeoutTime;
- (void)_breakBeforeMakeTimer:(id)arg1;
- (void)_setBreakBeforeMakeTimer;
- (void)_clearBreakBeforeMakeTimer;
- (void)_firstFrameTimeout:(id)arg1;
- (void)_setFirstFrameTimeoutTimer;
- (void)_clearFirstFrameTimeoutTimer;
- (void)_reduceInvitationTimeoutTime;
- (void)_invitationTimeout:(id)arg1;
- (void)_setInvitationTimeoutTimer;
- (void)_clearInvitationTimeoutTimer;
- (void)_connectionTimeout:(id)arg1;
- (void)_setConnectionTimeoutTimer;
- (void)_clearConnectionTimeoutTimer;
- (void)conferencePersonWithID:(id)arg1 localIPDidChange:(id)arg2;
- (void)conferencePersonWithID:(id)arg1 sendRelayCancel:(id)arg2;
- (void)conferencePersonWithID:(id)arg1 sendRelayUpdate:(id)arg2;
- (void)conferencePersonWithID:(id)arg1 sendRelayRequest:(id)arg2;
- (void)conferencePersonWithID:(id)arg1 mediaDidStall:(_Bool)arg2;
- (void)conferencePersonWithID:(id)arg1 didDegrade:(_Bool)arg2;
- (void)conferencePersonWithID:(id)arg1 didPause:(_Bool)arg2;
- (void)conferencePersonWithID:(id)arg1 didMute:(_Bool)arg2;
- (void)_conferenceOtherParticipant:(id)arg1 didConnect:(_Bool)arg2;
- (void)conferenceAVConferenceCallID:(long long)arg1 didConnect:(_Bool)arg2;
- (void)conferenceDidPauseAudioWithCallID:(long long)arg1 didPauseAudio:(_Bool)arg2;
- (void)conferenceDidStopWithCallID:(long long)arg1 error:(id)arg2;
- (void)_vccInitDidFinish:(id)arg1;
@property(nonatomic) _Bool isSendingAudio;
@property(nonatomic, setter=setRemoteMute:) _Bool isRemoteMute;
- (void)toggleMute;
@property(nonatomic, setter=setMute:) _Bool isMute;
@property(nonatomic) _Bool isSendingVideo;
- (void)togglePaused;
@property(nonatomic, setter=setPaused:) _Bool isPaused;
@property(readonly, nonatomic) _Bool hasReceivedFirstFrame;
- (void)_handleRelayCancel:(id)arg1 fromParticipant:(id)arg2;
- (void)_handleRelayUpdate:(id)arg1 fromParticipant:(id)arg2;
- (void)_handleRelayInitate:(id)arg1 fromParticipant:(id)arg2;
- (void)_entitlementsChanged:(id)arg1;
- (void)_airplaneModeChanged:(id)arg1;
- (void)systemWillShutdown;
- (void)notificationCenterDidDisappear;
- (void)notificationCenterWillAppear;
- (void)systemApplicationDidResumeForEventsOnly;
- (void)systemApplicationDidResume;
- (void)systemApplicationDidSuspend;
- (void)systemApplicationWillEnterForeground;
- (void)systemApplicationDidEnterBackground;
- (void)systemApplicationDidBecomeActive;
- (void)_resumeVideoState;
- (void)_resumeAudioState;
- (void)_saveVideoRestartState;
- (void)_saveAudioRestartState;
- (void)systemDidFastUserSwitchOut;
- (void)_postStateToDelegateIfNecessary;
- (void)participant:(id)arg1 changedFromState:(unsigned int)arg2 toState:(unsigned int)arg3;
- (void)_setActiveConference;
@property(readonly, nonatomic) _Bool isActive; // @dynamic isActive;
@property(readonly, nonatomic) _Bool isStateFinal; // @dynamic isStateFinal;
- (id)_participantMatchingVCPartyID:(id)arg1;
@property(readonly, nonatomic) _Bool _allParticipantsUsingICE;
@property(readonly, retain, nonatomic) NSArray *remoteParticipants; // @dynamic remoteParticipants;
@property(readonly, retain, nonatomic) IMAVChatParticipant *initiatorParticipant; // @dynamic initiatorParticipant;
- (_Bool)_participantsCheckOut;
- (void)_initParticipantsWithIMHandles:(id)arg1;
- (_Bool)_moveVCPartyID:(id)arg1 toIndex:(unsigned int)arg2 inCount:(unsigned int)arg3;
- (void)_insertRemoteParticipant:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)_updateIMHandleInBuddyList:(id)arg1;
- (void)_peerID:(id)arg1 changedTo:(id)arg2;
- (void)setMetadataFinalized;
- (id)_proxyRepresentation;
- (id)_proxyRepresentationForIMAVChatParticipant:(id)arg1;
- (void)_submitCallEndedLoggingWithReason:(unsigned int)arg1 andError:(int)arg2;
- (void)__sendEndCallMetricToAWDWithReason:(unsigned int)arg1 andError:(int)arg2;
- (void)__sendEndCallMetricToViceroyWithReason:(unsigned int)arg1 andError:(int)arg2;
- (void)_submitCallInterruptionEndedLogging;
- (void)_submitCallInterruptionBeganLogging;
- (void)_submitCallConnectedLogging;
- (void)_submitCallStartedLoggingWithRecipientID:(id)arg1 isCaller:(_Bool)arg2 isVideo:(_Bool)arg3;

@end

