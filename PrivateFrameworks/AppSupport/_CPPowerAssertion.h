//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSString;

@interface _CPPowerAssertion : NSObject
{
    double _timeout;
    NSString *_identifier;
    NSArray *_stack;
}

@property(nonatomic) double timeout; // @synthesize timeout=_timeout;
- (void)timedout;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1 timeout:(double)arg2;

@end
