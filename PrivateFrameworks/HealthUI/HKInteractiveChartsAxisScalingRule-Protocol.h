//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthUI/HKGraphSeriesAxisScalingRule-Protocol.h>

@class HKQuantityType, HKUnit, HKValueRange;

@protocol HKInteractiveChartsAxisScalingRule <HKGraphSeriesAxisScalingRule>
- (HKValueRange *)portraitYValueRangeForRange:(HKValueRange *)arg1 zoomLevel:(long long)arg2 allowedDecimalPrecision:(long long)arg3;

@optional
- (_Bool)isCompatibleWithQuantityType:(HKQuantityType *)arg1;
- (void)setUnit:(HKUnit *)arg1;
@end
