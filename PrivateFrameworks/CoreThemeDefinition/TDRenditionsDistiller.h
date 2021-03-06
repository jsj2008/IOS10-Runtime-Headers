//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CoreThemeDocument, NSConditionLock, NSMutableArray, TDLogger;

@interface TDRenditionsDistiller : NSObject
{
    CoreThemeDocument *document;
    NSMutableArray *renditionInQueue;
    NSMutableArray *psiDataInfoOutQueue;
    NSConditionLock *inQueueLock;
    NSConditionLock *outQueueLock;
    _Bool shouldCompressCSIDataFlag;
    _Bool noMoreCSIDataInfo;
    _Bool noMoreRenditions;
    TDLogger *_logger;
}

@property(retain) TDLogger *logger; // @synthesize logger=_logger;
- (id)nextCSIDataInfoFromQueue;
- (void)enqueueRenditionSpec:(id)arg1;
- (void)enqueueAbortFlag;
- (void)enqueueLastRenditionFlag;
- (void)detachDistillationThread;
- (void)_distill:(id)arg1;
- (id)_nextObjectFromInQueue;
- (void)_enqueueDistillingAbortedInfo;
- (void)_enqueueLastCSIDataInfoFlag;
- (void)_enqueueCSIDataInfo:(id)arg1;
- (void)_enqueueOnOutQueueTheObject:(id)arg1;
- (void)_enqueueOnInQueueTheObject:(id)arg1;
- (void)_enqueueOnQueue:(id)arg1 withQueueLock:(id)arg2 object:(id)arg3;
- (void)dealloc;
- (id)initWithDocument:(id)arg1 shouldCompressCSIDataFlag:(_Bool)arg2;

@end

