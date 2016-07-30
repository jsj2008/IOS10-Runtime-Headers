//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface UIAnimation : NSObject
{
    id _target;
    SEL _action;
    id _delegate;
    CDUnknownBlockType _completion;
    struct {
        unsigned int curve:4;
        unsigned int tvOutput:1;
        unsigned int useNSTimer:1;
    } _animationFlags;
    double _startTime;
    double _duration;
    int _state;
}

- (void).cxx_destruct;
- (float)progressForFraction:(float)arg1;
- (void)setProgress:(float)arg1;
- (void)setAnimationCurve:(int)arg1;
- (CDUnknownBlockType)completion;
- (void)setCompletion:(CDUnknownBlockType)arg1;
- (_Bool)usesNSTimer;
- (void)setUsesNSTimer:(_Bool)arg1;
- (SEL)action;
- (void)setAction:(SEL)arg1;
- (id)delegate;
- (void)setDelegate:(id)arg1;
- (id)target;
- (void)stopAnimation;
- (id)initWithTarget:(id)arg1;
- (void)markStop;
- (void)markStart:(double)arg1;
- (float)fractionForTime:(double)arg1;
- (void)setDuration:(double)arg1;
- (int)type;
- (int)state;

@end
