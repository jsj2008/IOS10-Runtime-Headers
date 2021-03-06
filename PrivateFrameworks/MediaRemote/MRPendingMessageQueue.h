//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface MRPendingMessageQueue : NSObject
{
    NSMutableArray *_messages;
    unsigned long long _lowPriorityMessagesCount;
    unsigned long long _maxLowPriorityMessagesAllowed;
}

- (void)_purge;
- (id)peek;
- (void)pop;
- (void)push:(id)arg1;
- (void)dealloc;
- (id)initWithMaxLowPriorityMessagesAllowed:(unsigned long long)arg1;

@end

