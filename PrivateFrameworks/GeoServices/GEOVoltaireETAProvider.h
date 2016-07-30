//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <GeoServices/GEOETAProvider.h>

#import <GeoServices/GEOPBSessionRequesterDelegate-Protocol.h>

@class GEORequester, NSString;

__attribute__((visibility("hidden")))
@interface GEOVoltaireETAProvider : GEOETAProvider <GEOPBSessionRequesterDelegate>
{
    GEORequester *_requester;
    CDUnknownBlockType _errorHandler;
    CDUnknownBlockType _finishedHandler;
    CDUnknownBlockType _willSendRequestHandler;
    CDUnknownBlockType _simpleETARequestFinishedHandler;
    _Bool _cancelled;
}

- (void)requesterWillSendRequestForEstablishedConnection:(id)arg1 callback:(CDUnknownBlockType)arg2;
- (void)requesterDidFinish:(id)arg1;
- (void)requesterDidCancel:(id)arg1;
- (void)requester:(id)arg1 didFailWithError:(id)arg2;
- (void)cancelRequest;
- (void)startSimpleETARequest:(id)arg1 finished:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3;
- (void)startRequest:(id)arg1 connectionProperties:(const CDStruct_e05fddca *)arg2 willSendRequest:(CDUnknownBlockType)arg3 finished:(CDUnknownBlockType)arg4 error:(CDUnknownBlockType)arg5;
- (void)updateRequest:(id)arg1 finished:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3;
- (void)startRequest:(id)arg1 finished:(CDUnknownBlockType)arg2 error:(CDUnknownBlockType)arg3;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
