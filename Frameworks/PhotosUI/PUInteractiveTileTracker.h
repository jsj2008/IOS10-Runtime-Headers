//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PUTileController, PUTileHider, PUTilingView;
@protocol PUInteractiveTileTrackerDelegate;

__attribute__((visibility("hidden")))
@interface PUInteractiveTileTracker : NSObject
{
    struct {
        _Bool respondsToWillStartTrackingTileController;
        _Bool respondsToDidStopTrackingTileController;
    } _delegateFlags;
    _Bool _shouldEnd;
    _Bool _shouldFinish;
    PUTilingView *_tilingView;
    id <PUInteractiveTileTrackerDelegate> _delegate;
    double _progress;
    long long __state;
    PUTileHider *__tileHider;
    PUTileController *_trackedTileController;
    struct PUDisplayVelocity _currentVelocity;
}

@property(readonly, nonatomic) PUTileController *trackedTileController; // @synthesize trackedTileController=_trackedTileController;
@property(retain, nonatomic, setter=_setTileHider:) PUTileHider *_tileHider; // @synthesize _tileHider=__tileHider;
@property(nonatomic, setter=_setState:) long long _state; // @synthesize _state=__state;
@property(nonatomic) struct PUDisplayVelocity currentVelocity; // @synthesize currentVelocity=_currentVelocity;
@property(nonatomic) _Bool shouldFinish; // @synthesize shouldFinish=_shouldFinish;
@property(nonatomic) _Bool shouldEnd; // @synthesize shouldEnd=_shouldEnd;
@property(nonatomic) double progress; // @synthesize progress=_progress;
@property(nonatomic) __weak id <PUInteractiveTileTrackerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) PUTilingView *tilingView; // @synthesize tilingView=_tilingView;
- (void).cxx_destruct;
- (void)_setTrackedTileController:(id)arg1;
- (void)_updateTrackedTileController;
- (id)tileControllerToTrack;
- (void)configureTileReattachmentContext:(id)arg1;
- (void)completeTracking;
- (void)stopTileControllerTracking;
- (void)updateTileControllerTracking;
- (void)startTileControllerTracking;
- (void)updateGestureRecognizerTracking;
- (void)update;
- (id)initWithTilingView:(id)arg1;
- (id)init;

@end
