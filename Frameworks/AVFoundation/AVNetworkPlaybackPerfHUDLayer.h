//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CATextLayer.h>

@class AVPlayer, AVWeakReference, NSMutableDictionary, NSObject;
@protocol OS_dispatch_source;

@interface AVNetworkPlaybackPerfHUDLayer : CATextLayer
{
    NSObject<OS_dispatch_source> *_hudTimer;
    AVPlayer *_player;
    _Bool _showHud;
    int _hudXoffset;
    int _hudYoffset;
    unsigned long long _hudUpdateInterval;
    _Bool _showCompleteURI;
    AVWeakReference *_playerLayerWeakReference;
    NSMutableDictionary *_loadingStatusCache;
}

+ (id)convertBitrate:(double)arg1;
+ (_Bool)runningAnInternalBuild;
- (void)_hudUpdate;
- (_Bool)valueLoadedForKey:(id)arg1 onObject:(id)arg2;
- (id)getTrackFormatDesc:(id)arg1;
- (void)setPlayerLayer:(id)arg1;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)setPlayer:(id)arg1;
- (void)dealloc;
- (void)removeObserversFromPlayer;
- (void)startDispatchTimer;
- (void)getHudSetting;
- (void)setColor:(int)arg1;
- (void)updateBounds:(struct CGRect)arg1;
- (id)init;
- (_Bool)hudEnabled;

@end
