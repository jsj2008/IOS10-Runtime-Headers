//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FUChartColor : NSObject
{
    struct CGGradient *_gradient;
    struct CGColor *_color;
    double _chartYValue;
    double _threshold;
}

@property(nonatomic) double threshold; // @synthesize threshold=_threshold;
- (void)drawInRect:(struct CGRect)arg1 inContext:(struct CGContext *)arg2;
- (id)initWithThreshold:(double)arg1 color:(id)arg2;
- (id)initWithThreshold:(double)arg1 startColor:(id)arg2 endColor:(id)arg3;
@property(nonatomic) double chartYValue;

@end

