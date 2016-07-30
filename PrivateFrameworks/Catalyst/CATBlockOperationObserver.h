//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Catalyst/CATOperationObserver-Protocol.h>

@class NSString;

@interface CATBlockOperationObserver : NSObject <CATOperationObserver>
{
    CDUnknownBlockType _didStart;
    CDUnknownBlockType _didProgress;
    CDUnknownBlockType _didFinish;
}

@property(copy, nonatomic) CDUnknownBlockType didFinish; // @synthesize didFinish=_didFinish;
@property(copy, nonatomic) CDUnknownBlockType didProgress; // @synthesize didProgress=_didProgress;
@property(copy, nonatomic) CDUnknownBlockType didStart; // @synthesize didStart=_didStart;
- (void).cxx_destruct;
- (void)operationDidFinish:(id)arg1;
- (void)operationDidProgress:(id)arg1;
- (void)operationDidStart:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
