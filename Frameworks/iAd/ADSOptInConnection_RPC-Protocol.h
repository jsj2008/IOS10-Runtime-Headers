//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSDictionary;

@protocol ADSOptInConnection_RPC
- (void)getiAdIDsWithCompletionHandler:(void (^)(NSString *, NSString *, NSString *, NSString *, NSString *, NSString *, NSString *))arg1;
- (void)handlePushNotification:(NSDictionary *)arg1;
- (void)handleAccountChange;
- (void)refreshOptInStatusRefreshingWeakToken:(_Bool)arg1 withCompletionHandler:(void (^)(long long))arg2;
- (void)refreshOptInStatus;
- (void)setOptInStatus:(_Bool)arg1 completionHandler:(void (^)(long long))arg2;
@end
