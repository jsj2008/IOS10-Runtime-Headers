//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HomeUI/NSObject-Protocol.h>

@class HFOverrideCharacteristicValueSource, HMCharacteristic;

@protocol HFOverrideCharacteristicValueProvider <NSObject>
- (id)valueSource:(HFOverrideCharacteristicValueSource *)arg1 overrideValueForCharacteristic:(HMCharacteristic *)arg2;
- (_Bool)valueSource:(HFOverrideCharacteristicValueSource *)arg1 shouldOverrideValueForCharacteristic:(HMCharacteristic *)arg2;
@end
