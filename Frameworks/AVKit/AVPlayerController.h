//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIResponder.h>

@class AVPlayer, AVValueTiming, NSArray, NSDictionary, NSError, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface AVPlayerController : UIResponder
{
    _Bool _jKeyDown;
    _Bool _kKeyDown;
    _Bool _lKeyDown;
    NSArray *_audioMediaSelectionOptions;
    NSArray *_legibleMediaSelectionOptions;
    float _rate;
    _Bool _isResumed;
    NSObject<OS_dispatch_source> *_seekTimer;
    double _timeOfLastUpdate;
    NSObject<OS_dispatch_queue> *_seekQueue;
    _Bool _ignoreRateKeyValueChange;
    id _updateTimingPeriodicObserverToken;
    id _updateAtMinMaxTimePeriodicObserverToken;
    id _playerItemTimeJumpedObserver;
    id _playerItemDidPlayToEndTimeObserver;
    id _audioSessionInterruptionObserver;
    id _currentLocaleDidChangeObserver;
    _Bool _audioSessionInterrupted;
    _Bool _pictureInPictureInterrupted;
    float _rateBeforeInterruption;
    _Bool _isPictureInPictureSupported;
    _Bool _looping;
    long long _actionAtItemEnd;
    _Bool _pendingSeek;
    CDStruct_1b6d18a9 _toleranceBefore;
    CDStruct_1b6d18a9 _toleranceAfter;
    _Bool _isScanningForward;
    _Bool _isScanningBackward;
    unsigned long long _scanningCount;
    double _preScanningRate;
    _Bool _shouldPlayWhenLikelyToKeepUp;
    _Bool _forceScanning;
    double _rateBeforeForceScanning;
    _Bool _hasDiscoveredVideo;
    _Bool _needsUpdateHasDiscoveredVideo;
    id _deviceBatteryStateDidChangeObserver;
    _Bool _deviceBatteryMonitoringWasEnabled;
    _Bool _playingOnSecondScreen;
    _Bool _atMaxTime;
    _Bool _atMinTime;
    _Bool _scrubbing;
    _Bool _seekingInternal;
    _Bool _seeking;
    _Bool _composable;
    _Bool _hasProtectedContent;
    _Bool _compatibleWithAirPlayVideo;
    _Bool _preventingIdleSystemSleep;
    _Bool _preventingIdleDisplaySleep;
    _Bool _disablingAutomaticTermination;
    _Bool _deviceBatteryChargingOrFull;
    AVPlayer *_player;
    AVValueTiming *_timing;
    double _seekToTime;
    NSDictionary *_metadata;
    NSArray *_contentChapters;
    NSArray *_availableMetadataFormats;
    double _rateBeforeScrubBegan;
    CDStruct_1b6d18a9 _seekToTimeInternal;
}

+ (id)keyPathsForValuesAffectingPictureInPicturePossible;
+ (id)keyPathsForValuesAffectingExternalPlaybackAirPlayDeviceLocalizedName;
+ (id)keyPathsForValuesAffectingExternalPlaybackType;
+ (id)keyPathsForValuesAffectingExternalPlaybackActive;
+ (id)keyPathsForValuesAffectingPlayingOnExternalScreen;
+ (id)keyPathsForValuesAffectingAllowsExternalPlayback;
+ (id)keyPathsForValuesAffectingCanSeekChapterBackward;
+ (id)keyPathsForValuesAffectingCanSeekChapterForward;
+ (id)keyPathsForValuesAffectingCanSeekFrameBackward;
+ (id)keyPathsForValuesAffectingCanSeekFrameForward;
+ (id)keyPathsForValuesAffectingCanSeekToEnd;
+ (id)keyPathsForValuesAffectingCanSeekToBeginning;
+ (id)keyPathsForValuesAffectingCanScanBackward;
+ (id)keyPathsForValuesAffectingCanScanForward;
+ (id)keyPathsForValuesAffectingCanSeek;
+ (id)keyPathsForValuesAffectingHasShareableContent;
+ (id)keyPathsForValuesAffectingHasTrimmableContent;
+ (id)keyPathsForValuesAffectingHasLiveStreamingContent;
+ (id)keyPathsForValuesAffectingHasContentChapters;
+ (id)keyPathsForValuesAffectingHasEnabledVideo;
+ (id)keyPathsForValuesAffectingHasEnabledAudio;
+ (id)keyPathsForValuesAffectingLoadedTimeRanges;
+ (id)keyPathsForValuesAffectingCurrentTimeWithinEndTimes;
+ (id)keyPathsForValuesAffectingContentDurationWithinEndTimes;
+ (id)keyPathsForValuesAffectingMaxTime;
+ (id)keyPathsForValuesAffectingMinTime;
+ (id)keyPathsForValuesAffectingCurrentTime;
+ (id)keyPathsForValuesAffectingContentDimensions;
+ (id)keyPathsForValuesAffectingContentDuration;
+ (id)keyPathsForValuesAffectingHasContent;
+ (id)keyPathsForValuesAffectingCanTogglePlayback;
+ (id)keyPathsForValuesAffectingCanPause;
+ (id)keyPathsForValuesAffectingPlaying;
+ (id)keyPathsForValuesAffectingCanPlay;
+ (id)keyPathsForValuesAffectingRate;
+ (id)keyPathsForValuesAffectingShouldPreventIdleDisplaySleep;
+ (id)keyPathsForValuesAffectingCompletelySeekable;
+ (id)keyPathsForValuesAffectingSeekableTimeRanges;
+ (id)keyPathsForValuesAffectingError;
+ (id)keyPathsForValuesAffectingStatus;
+ (void)initialize;
+ (id)keyPathsForValuesAffectingHasLegibleMediaSelectionOptions;
+ (id)keyPathsForValuesAffectingHasAudioMediaSelectionOptions;
+ (id)keyPathsForValuesAffectingHasMediaSelectionOptions;
@property(nonatomic, getter=isDeviceBatteryChargingOrFull) _Bool deviceBatteryChargingOrFull; // @synthesize deviceBatteryChargingOrFull=_deviceBatteryChargingOrFull;
@property(nonatomic, getter=isDisablingAutomaticTermination) _Bool disablingAutomaticTermination; // @synthesize disablingAutomaticTermination=_disablingAutomaticTermination;
@property(nonatomic, getter=isPreventingIdleDisplaySleep) _Bool preventingIdleDisplaySleep; // @synthesize preventingIdleDisplaySleep=_preventingIdleDisplaySleep;
@property(nonatomic, getter=isPreventingIdleSystemSleep) _Bool preventingIdleSystemSleep; // @synthesize preventingIdleSystemSleep=_preventingIdleSystemSleep;
@property(nonatomic) double rateBeforeScrubBegan; // @synthesize rateBeforeScrubBegan=_rateBeforeScrubBegan;
@property(nonatomic, getter=isCompatibleWithAirPlayVideo) _Bool compatibleWithAirPlayVideo; // @synthesize compatibleWithAirPlayVideo=_compatibleWithAirPlayVideo;
@property(retain, nonatomic) NSArray *availableMetadataFormats; // @synthesize availableMetadataFormats=_availableMetadataFormats;
@property(nonatomic) _Bool hasProtectedContent; // @synthesize hasProtectedContent=_hasProtectedContent;
@property(nonatomic, getter=isComposable) _Bool composable; // @synthesize composable=_composable;
@property(retain, nonatomic) NSArray *contentChapters; // @synthesize contentChapters=_contentChapters;
@property(retain, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property(nonatomic) double seekToTime; // @synthesize seekToTime=_seekToTime;
@property CDStruct_1b6d18a9 seekToTimeInternal; // @synthesize seekToTimeInternal=_seekToTimeInternal;
@property(nonatomic, getter=isSeeking) _Bool seeking; // @synthesize seeking=_seeking;
@property(getter=isSeekingInternal) _Bool seekingInternal; // @synthesize seekingInternal=_seekingInternal;
@property(retain, nonatomic) AVValueTiming *timing; // @synthesize timing=_timing;
@property(nonatomic, getter=isScrubbing) _Bool scrubbing; // @synthesize scrubbing=_scrubbing;
@property(nonatomic, getter=isAtMinTime) _Bool atMinTime; // @synthesize atMinTime=_atMinTime;
@property(nonatomic, getter=isAtMaxTime) _Bool atMaxTime; // @synthesize atMaxTime=_atMaxTime;
@property(retain, nonatomic) AVPlayer *player; // @synthesize player=_player;
- (void).cxx_destruct;
- (id)scanningDelays;
- (float)preferredRate;
- (void)_attemptToResumePlaybackAfterInterruption;
- (void)setPictureInPictureInterrupted:(_Bool)arg1;
- (_Bool)isPictureInPictureInterrupted;
- (_Bool)isPictureInPicturePossible;
- (id)externalPlaybackAirPlayDeviceLocalizedName;
- (long long)externalPlaybackType;
@property(nonatomic, getter=isPlayingOnSecondScreen) _Bool playingOnSecondScreen;
- (_Bool)isExternalPlaybackActive;
- (_Bool)isPlayingOnExternalScreen;
- (void)setAllowsExternalPlayback:(_Bool)arg1;
- (_Bool)allowsExternalPlayback;
- (void)updateTiming;
- (void)seekChapterBackward:(id)arg1;
- (_Bool)canSeekChapterBackward;
- (void)seekChapterForward:(id)arg1;
- (_Bool)canSeekChapterForward;
- (void)seekToChapter:(id)arg1;
- (void)endScrubbing:(id)arg1;
- (void)beginScrubbing:(id)arg1;
- (void)gotoEndOfSeekableRanges:(id)arg1;
- (void)skipBackwardThirtySeconds:(id)arg1;
- (void)seekFrameBackward:(id)arg1;
- (_Bool)canSeekFrameBackward;
- (void)seekFrameForward:(id)arg1;
- (_Bool)canSeekFrameForward;
- (void)seekToEnd:(id)arg1;
- (_Bool)canSeekToEnd;
- (void)seekToBeginning:(id)arg1;
- (_Bool)canSeekToBeginning;
- (void)endScanningBackward:(id)arg1;
- (void)_updateScanningBackwardRate;
- (void)beginScanningBackward:(id)arg1;
- (void)scanBackward:(id)arg1;
- (_Bool)canScanBackward;
- (void)endScanningForward:(id)arg1;
- (void)_updateScanningForwardRate;
- (void)beginScanningForward:(id)arg1;
- (void)scanForward:(id)arg1;
- (_Bool)canScanForward;
- (void)seekByTimeInterval:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3;
- (void)seekByTimeInterval:(double)arg1;
- (void)actuallySeekToTime;
- (void)throttledSeekToTime:(CDStruct_1b6d18a9)arg1 toleranceBefore:(CDStruct_1b6d18a9)arg2 toleranceAfter:(CDStruct_1b6d18a9)arg3;
- (void)seekToTime:(double)arg1 toleranceBefore:(double)arg2 toleranceAfter:(double)arg3;
- (void)endScrubbing;
- (void)beginScrubbing;
- (void)seekToTime:(double)arg1;
- (_Bool)canSeek;
- (void)_updateHasDiscoveredVideoIfNeeded;
- (void)_setNeedsUpdateHasDiscoveredVideo;
- (_Bool)_isMarkedNotSerializablePlayerItem:(id)arg1;
- (_Bool)_isRestrictedFromSavingPlayerItem:(id)arg1;
- (_Bool)hasShareableContent;
- (_Bool)hasTrimmableContent;
- (_Bool)hasLiveStreamingContent;
- (_Bool)hasContentChapters;
- (_Bool)hasEnabledVideo;
- (_Bool)hasEnabledAudio;
- (id)loadedTimeRanges;
- (double)currentTimeWithinEndTimes;
- (double)contentDurationWithinEndTimes;
- (void)setMaxTime:(double)arg1;
- (double)maxTime;
- (void)setMinTime:(double)arg1;
- (double)minTime;
- (double)currentTime;
- (struct CGSize)contentDimensions;
@property(readonly, nonatomic) float nominalFrameRate;
- (double)contentDuration;
- (_Bool)hasContent;
- (void)toggleMuted:(id)arg1;
- (void)changeVolumeToMaximum:(id)arg1;
- (void)changeVolumeToMinimum:(id)arg1;
- (void)decreaseVolume:(id)arg1;
- (void)increaseVolume:(id)arg1;
- (void)setVolume:(double)arg1;
- (double)volume;
- (void)updateAtMinMaxTime;
- (void)setLooping:(_Bool)arg1;
- (_Bool)isLooping;
- (void)togglePlaybackEvenWhenInBackground:(id)arg1;
- (void)togglePlayback:(id)arg1;
- (_Bool)canTogglePlayback;
- (void)pause:(id)arg1;
- (_Bool)canPause;
- (void)autoplay:(id)arg1;
- (void)play:(id)arg1;
- (void)setPlaying:(_Bool)arg1;
- (_Bool)isPlaying;
- (_Bool)canPlay;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *seekTimer;
- (void)setRate:(double)arg1;
- (double)rate;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
@property(readonly, nonatomic) _Bool shouldPreventIdleDisplaySleep;
- (_Bool)isCompletelySeekable;
- (id)seekableTimeRanges;
@property(readonly, nonatomic) NSError *error;
@property(readonly, nonatomic) long long status;
- (id)_queuePlayer;
- (void)dealloc;
- (id)init;
- (id)initWithPlayer:(id)arg1;
- (id)_selectedMediaOptionWithMediaCharacteristic:(id)arg1;
- (void)_setMediaOption:(id)arg1 mediaCharacteristic:(id)arg2;
- (void)_enableAutoMediaSelection:(id)arg1;
- (void)_disableLegibleMediaSelectionOptions:(id)arg1;
- (id)legibleOptions;
- (id)audioOptions;
- (void)reloadLegibleOptions;
- (void)reloadAudioOptions;
- (void)reloadOptions;
- (id)mediaSelectionGroupForMediaCharacteristic:(id)arg1;
- (void)setCurrentLegibleMediaSelectionOption:(id)arg1;
- (id)keyPathsForValuesAffectingCurrentLegibleMediaSelectionOption;
- (id)currentLegibleMediaSelectionOption;
- (void)setLegibleMediaSelectionOptions:(id)arg1;
- (id)legibleMediaSelectionOptions;
- (_Bool)hasLegibleMediaSelectionOptions;
- (void)setCurrentAudioMediaSelectionOption:(id)arg1;
- (id)keyPathsForValuesAffectingCurrentAudioMediaSelectionOption;
- (id)currentAudioMediaSelectionOption;
- (void)setAudioMediaSelectionOptions:(id)arg1;
- (id)audioMediaSelectionOptions;
- (_Bool)hasAudioMediaSelectionOptions;
- (_Bool)hasMediaSelectionOptions;
- (void)setRateWithForce:(double)arg1;
@property(nonatomic) _Bool CALayerDestinationIsTVOut;
@property(readonly, nonatomic) _Bool hasDiscoveredVideo;

@end

