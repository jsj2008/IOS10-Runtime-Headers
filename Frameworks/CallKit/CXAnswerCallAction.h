//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CallKit/CXCallAction.h>

@class NSDate;

@interface CXAnswerCallAction : CXCallAction
{
    NSDate *_dateConnected;
    struct CGSize _localLandscapeAspectRatio;
    struct CGSize _localPortraitAspectRatio;
}

+ (_Bool)supportsSecureCoding;
+ (double)timeout;
@property(nonatomic) struct CGSize localPortraitAspectRatio; // @synthesize localPortraitAspectRatio=_localPortraitAspectRatio;
@property(nonatomic) struct CGSize localLandscapeAspectRatio; // @synthesize localLandscapeAspectRatio=_localLandscapeAspectRatio;
@property(copy, nonatomic) NSDate *dateConnected; // @synthesize dateConnected=_dateConnected;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)updateCopy:(id)arg1 withZone:(struct _NSZone *)arg2;
- (void)updateSanitizedCopy:(id)arg1 withZone:(struct _NSZone *)arg2;
- (void)updateAsFulfilledWithDateConnected:(id)arg1;
- (void)fulfillWithDateConnected:(id)arg1;
- (void)fulfill;
- (id)customDescription;

@end
