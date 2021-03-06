//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIImage, NSArray, NSNumber;

__attribute__((visibility("hidden")))
@interface CIConvolution : CIFilter
{
    CIImage *inputImage;
    NSArray *inputPoints;
    NSArray *inputWeights;
    NSNumber *inputLinearFilterModeEnabled;
}

- (id)outputImage;
- (id)doConvolutionPass:(id)arg1 weights:(id)arg2 sums:(id)arg3;
- (id)_CIConvolutionAdd_9;
- (id)_CIConvolutionInit_9;
- (id)_CIConvolutionAdd_8;
- (id)_CIConvolutionInit_8;
- (id)_CIConvolutionAdd_7;
- (id)_CIConvolutionInit_7;
- (id)_CIConvolutionAdd_6;
- (id)_CIConvolutionInit_6;
- (id)_CIConvolutionAdd_5;
- (id)_CIConvolutionInit_5;
- (id)_CIConvolutionAdd_4;
- (id)_CIConvolutionInit_4;
- (id)_CIConvolutionAdd_3;
- (id)_CIConvolutionInit_3;
- (id)_CIConvolutionAdd_2;
- (id)_CIConvolutionInit_2;
- (id)_CIConvolutionAdd_1;
- (id)_CIConvolutionInit_1;
- (int)samplesPerPass;

@end

