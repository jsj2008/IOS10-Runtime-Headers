//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSData, NSNumber, NSUUID;

@protocol NRPairedDeviceRegistryXPCFrameworkDelegate
- (void)xpcHasNewOOBKey:(NSData *)arg1;
- (void)xpcDeviceID:(NSUUID *)arg1 needsPasscode:(NSNumber *)arg2;
@end
