//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CIContext, NSHashTable, NSLock;

@interface CVMLImageBufferManager : NSObject
{
    CIContext *mainCIContext;
    CIContext *lowPriorityCIContext;
    NSHashTable *activeImageBuffers;
    NSLock *bufferTableLock;
}

+ (id)manager;
- (void).cxx_destruct;
- (id)sharedCIContextWithOptions:(id)arg1;
- (void)removeBuffer:(id)arg1;
- (void)addImageBuffer:(id)arg1;
- (void)purgeAllCaches;
- (void)dealloc;
- (id)init;

@end
