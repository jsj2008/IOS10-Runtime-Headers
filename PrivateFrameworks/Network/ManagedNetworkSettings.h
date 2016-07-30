//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface ManagedNetworkSettings : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedMNS;
@property(retain) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)reloadCarrierSettings:(_Bool)arg1;
- (_Bool)updateSettingsFromCarrierFile:(id)arg1 prefix:(id)arg2 settings:(id)arg3;
- (void)reloadMNS;
- (void)reloadNetworkdSettings;
- (void)handleEvent:(id)arg1;
- (id)init;

@end
