//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaRemote/MRProtocolMessage.h>

@class MRDeviceInfo;

@interface MRDeviceInfoMessage : MRProtocolMessage
{
    MRDeviceInfo *_deviceInfo;
}

- (unsigned long long)type;
- (unsigned long long)encryptionType;
@property(readonly, nonatomic) MRDeviceInfo *deviceInfo;
- (void)dealloc;
- (id)initWithDeviceInfo:(id)arg1;

@end

