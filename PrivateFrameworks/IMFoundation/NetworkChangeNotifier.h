//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <IMFoundation/IMConnectionMonitorDelegate-Protocol.h>
#import <IMFoundation/IMSystemMonitorListener-Protocol.h>

@class IMConnectionMonitor, NSArray, NSString;

@interface NetworkChangeNotifier : NSObject <IMSystemMonitorListener, IMConnectionMonitorDelegate>
{
    _Bool _lastPostedNetworkUp;
    struct __SCDynamicStore *_store;
    NSString *_myIP;
    NSArray *_myIPs;
    IMConnectionMonitor *_connectionMonitor;
}

+ (void)disableNotifications;
+ (_Bool)enableNotifications;
+ (id)sharedInstance;
@property(nonatomic) _Bool lastPostedNetworkUp; // @synthesize lastPostedNetworkUp=_lastPostedNetworkUp;
@property(retain, nonatomic) IMConnectionMonitor *connectionMonitor; // @synthesize connectionMonitor=_connectionMonitor;
@property(retain, nonatomic) NSArray *myIPs; // @synthesize myIPs=_myIPs;
@property(retain, nonatomic) NSString *myIP; // @synthesize myIP=_myIP;
@property(nonatomic) struct __SCDynamicStore *store; // @synthesize store=_store;
- (id)primaryInterfaceName;
- (_Bool)isPrimaryCellular;
@property(readonly, nonatomic) _Bool isNetworkUp;
- (void)connectionMonitorDidUpdate:(id)arg1;
- (unsigned long long)linkQualityForInterfaceType:(unsigned long long)arg1;
- (int)linkQualityValueForInterface:(id)arg1;
- (int)linkQualityValueForInterfaceType:(unsigned long long)arg1;
@property(readonly, nonatomic) struct __SCDynamicStore *getDynamicStore;
@property(readonly, nonatomic) NSString *myIPAddress;
@property(readonly, nonatomic) NSString *myGatewayAddress;
@property(readonly, nonatomic) NSArray *myIPAddresses;
- (void)dealloc;
- (id)init;
- (_Bool)_listenForChanges;
- (void)systemDidWake;
- (void)systemWillSleep;
- (void)_clearIPCache;

@end

