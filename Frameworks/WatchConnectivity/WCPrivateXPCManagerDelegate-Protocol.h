//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WatchConnectivity/NSObject-Protocol.h>

@class NSString, WCPrivateXPCManager;

@protocol WCPrivateXPCManagerDelegate <NSObject>
- (void)xpcManager:(WCPrivateXPCManager *)arg1 handlePairedSyncComplicationsStartedWithCompletionHandler:(void (^)(NSError *))arg2;
- (void)xpcManager:(WCPrivateXPCManager *)arg1 isExtensionPrivileged:(NSString *)arg2 completionHandler:(void (^)(_Bool, NSError *))arg3;
- (void)xpcManager:(WCPrivateXPCManager *)arg1 handlePingForExtensionBundleID:(NSString *)arg2;
@end
