//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HMFoundation/HMFMessageDestination.h>

@class HMDDevice;

@interface HMDRemoteDeviceMessageDestination : HMFMessageDestination
{
    HMDDevice *_device;
}

+ (id)shortDescription;
+ (id)allMessageDestinations;
@property(readonly, nonatomic) HMDDevice *device; // @synthesize device=_device;
- (void).cxx_destruct;
- (id)description;
- (id)debugDescription;
- (id)descriptionWithPointer:(_Bool)arg1;
- (id)shortDescription;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)initWithTarget:(id)arg1 device:(id)arg2;
- (id)initWithTarget:(id)arg1;

@end

