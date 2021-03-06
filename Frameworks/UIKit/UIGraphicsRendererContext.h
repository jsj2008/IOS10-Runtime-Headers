//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class UIGraphicsRendererFormat;

@interface UIGraphicsRendererContext : NSObject
{
    struct CGContext *_backingContext;
    UIGraphicsRendererFormat *_format;
    _Bool ___createsImages;
}

@property(nonatomic) _Bool __createsImages; // @synthesize __createsImages=___createsImages;
@property(readonly, nonatomic) UIGraphicsRendererFormat *format; // @synthesize format=_format;
- (void).cxx_destruct;
- (void)clipToRect:(struct CGRect)arg1;
- (void)strokeRect:(struct CGRect)arg1 blendMode:(int)arg2;
- (void)strokeRect:(struct CGRect)arg1;
- (void)fillRect:(struct CGRect)arg1 blendMode:(int)arg2;
- (void)fillRect:(struct CGRect)arg1;
@property(readonly, nonatomic) struct CGContext *CGContext;
- (void)dealloc;
- (id)initWithCGContext:(struct CGContext *)arg1 format:(id)arg2;

@end

