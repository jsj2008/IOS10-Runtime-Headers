//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreImage/CIFilter.h>

@class CIColor, CIVector, NSNumber;

__attribute__((visibility("hidden")))
@interface CIStripesGenerator : CIFilter
{
    CIVector *inputCenter;
    CIColor *inputColor0;
    CIColor *inputColor1;
    NSNumber *inputWidth;
    NSNumber *inputSharpness;
}

+ (id)customAttributes;
@property(retain, nonatomic) NSNumber *inputSharpness; // @synthesize inputSharpness;
@property(retain, nonatomic) NSNumber *inputWidth; // @synthesize inputWidth;
@property(retain, nonatomic) CIColor *inputColor1; // @synthesize inputColor1;
@property(retain, nonatomic) CIColor *inputColor0; // @synthesize inputColor0;
@property(retain, nonatomic) CIVector *inputCenter; // @synthesize inputCenter;
- (id)outputImage;
- (id)_kernel;

@end

