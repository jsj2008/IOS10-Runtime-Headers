//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSXPCConnection, Protocol;

@interface CADXPCProxyHelper : NSObject
{
    NSXPCConnection *_connection;
    Protocol *_protocol;
}

- (void)_callReplyHandler:(id)arg1 ofInvocation:(id)arg2 withError:(id)arg3;
- (id)_copyReplyBlockFromInvocation:(id)arg1;
- (void)forwardInvocation:(id)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)dealloc;
- (id)initWithXPCConnection:(id)arg1 protocol:(id)arg2;

@end

