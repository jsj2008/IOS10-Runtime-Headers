//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <IMFoundation/IMInvocationTrampoline.h>

@class NSThread;

@interface IMThreadedInvocationTrampoline : IMInvocationTrampoline
{
    NSThread *_thread;
    _Bool _immediateForMatchingThread;
}

- (void)forwardInvocation:(id)arg1;
- (void)dealloc;
- (id)initWithTarget:(id)arg1 thread:(id)arg2 immediateForMatchingThread:(_Bool)arg3;

@end
