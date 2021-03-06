//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVPlayerItem, AVQueuePlayer, NSMutableArray;
@protocol OS_dispatch_queue;

@interface AVPlayerLooperInternal : NSObject
{
    AVQueuePlayer *loopingPlayer;
    AVPlayerItem *loopingItem;
    NSMutableArray *loopingItemCopies;
    CDStruct_e83c9415 loopRange;
    _Bool loopingEnabled;
    long long loopCount;
    NSObject<OS_dispatch_queue> *ivarAccessQueue;
    long long playerOriginalActionAtItemEnd;
    CDStruct_1b6d18a9 forwardPlaybackStartTime;
    AVPlayerItem *lastEnqueuedLoopingItem;
    _Bool waitingForLastLoopingCopyToFinish;
}

@end

