//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSError, SSLookupRequest, SSLookupResponse;

@interface MPStoreLookupBatchOperation : NSOperation
{
    SSLookupRequest *_subrequest;
    SSLookupResponse *_response;
    NSError *_error;
}

@property(readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property(readonly, nonatomic) SSLookupResponse *response; // @synthesize response=_response;
@property(readonly, nonatomic) SSLookupRequest *subrequest; // @synthesize subrequest=_subrequest;
- (void).cxx_destruct;
- (void)main;
- (id)initWithSubrequest:(id)arg1;

@end

