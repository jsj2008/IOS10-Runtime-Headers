//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSNumber, NSString;

@interface HMDCameraNetworkConfig : NSObject
{
    _Bool _ipv6;
    NSString *_ipAddress;
    NSNumber *_rtpPort;
}

@property(retain, nonatomic) NSNumber *rtpPort; // @synthesize rtpPort=_rtpPort;
@property(nonatomic) _Bool ipv6; // @synthesize ipv6=_ipv6;
@property(retain, nonatomic) NSString *ipAddress; // @synthesize ipAddress=_ipAddress;
- (void).cxx_destruct;
- (id)description;
- (id)initWithAddress:(id)arg1 rtpPort:(id)arg2 ipv6:(_Bool)arg3;
- (id)initWithAddress:(id)arg1;
- (id)init;

@end

