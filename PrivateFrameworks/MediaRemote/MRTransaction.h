//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol MRTransactionDelegate, OS_dispatch_queue;

@interface MRTransaction : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    struct _MROrigin *_origin;
    id <MRTransactionDelegate> _delegate;
    unsigned long long _name;
}

@property(readonly, nonatomic) unsigned long long name; // @synthesize name=_name;
@property(nonatomic) id <MRTransactionDelegate> delegate; // @synthesize delegate=_delegate;
- (unsigned long long)_calculateMemory;
- (void)_transactionEnded;
- (void)_query:(id)arg1;
- (void)_processMessage:(id)arg1;
- (void)send:(id)arg1 toConnection:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (id)initWithName:(unsigned long long)arg1 fromMessage:(id)arg2;

@end

