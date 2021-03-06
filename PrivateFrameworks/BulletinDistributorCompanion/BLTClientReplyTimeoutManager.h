//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, PCPersistentTimer;
@protocol OS_dispatch_queue;

@interface BLTClientReplyTimeoutManager : NSObject
{
    PCPersistentTimer *_clientReplyTimeoutTimer;
    NSMutableArray *_clientReplyTimeouts;
    NSObject<OS_dispatch_queue> *_queue;
}

- (void).cxx_destruct;
- (id)addClientReplyTimeoutForBulletin:(id)arg1 sectionID:(id)arg2 timeout:(double)arg3 handler:(CDUnknownBlockType)arg4;
- (void)_handleClientReplyTimeout;
- (_Bool)invalidateClientReplyTimeout:(id)arg1;
- (void)_invalidateClientReplyTimer;
- (void)_startClientReplyTimerWithFireDate:(id)arg1;
- (void)_startNextClientReplyTimer;
- (id)initWithQueue:(id)arg1;

@end

