//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSSet, NSXPCConnection, _LSQuery, _LSQueryCache;

@protocol _LSQueryResolving
- (void)_enumerateResolvedResultsOfQuery:(_LSQuery *)arg1 XPCConnection:(NSXPCConnection *)arg2 withBlock:(void (^)(_LSQueryResult *, NSError *, _Bool *))arg3;
- (_LSQueryCache *)_queryCache;
- (void)_resolveQueries:(NSSet *)arg1 synchronously:(_Bool)arg2 XPCConnection:(NSXPCConnection *)arg3 completionHandler:(void (^)(NSDictionary *, NSError *))arg4;
@end

