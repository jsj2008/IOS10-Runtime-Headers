//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaServices/NSObject-Protocol.h>

@class MSVOperationQueue, NSArray, NSOperation;

@protocol MSVOperationQueueDelegate <NSObject>

@optional
- (void)operationQueue:(MSVOperationQueue *)arg1 operationDidFinish:(NSOperation *)arg2 withErrors:(NSArray *)arg3;
- (void)operationQueue:(MSVOperationQueue *)arg1 willAddOperation:(NSOperation *)arg2;
@end

