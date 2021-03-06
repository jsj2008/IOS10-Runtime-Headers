//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;
@protocol CNQueueingStrategy;

@interface CNQueue : NSObject
{
    NSMutableArray *_buffer;
    id <CNQueueingStrategy> _strategy;
}

+ (id)boundedQueueWithCapacity:(unsigned long long)arg1 overflowHandler:(CDUnknownBlockType)arg2;
+ (id)boundedQueueWithCapacity:(unsigned long long)arg1;
+ (id)priorityQueueWithComparator:(CDUnknownBlockType)arg1;
- (id)drain;
- (void)dequeueObject:(id)arg1;
- (id)dequeue;
- (id)peek;
- (void)enqueue:(id)arg1;
@property(readonly) NSArray *allObjects;
@property(readonly) unsigned long long count;
- (void)dealloc;
- (id)initWithStrategy:(id)arg1;
- (id)init;

@end

