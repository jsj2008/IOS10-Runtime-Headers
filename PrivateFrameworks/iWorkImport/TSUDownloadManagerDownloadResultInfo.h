//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSError;

__attribute__((visibility("hidden")))
@interface TSUDownloadManagerDownloadResultInfo : NSObject
{
    _Bool _success;
    NSError *_error;
}

@property(readonly) NSError *error; // @synthesize error=_error;
@property(readonly) _Bool success; // @synthesize success=_success;
- (void).cxx_destruct;
- (id)init;
- (id)initWithSuccess:(_Bool)arg1 error:(id)arg2;

@end
