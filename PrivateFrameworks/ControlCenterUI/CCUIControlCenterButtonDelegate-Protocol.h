//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ControlCenterUI/NSObject-Protocol.h>

@class CCUIControlCenterButton;

@protocol CCUIControlCenterButtonDelegate <NSObject>
- (_Bool)isInternal;
- (void)buttonTapped:(CCUIControlCenterButton *)arg1;

@optional
- (void)button:(CCUIControlCenterButton *)arg1 didChangeState:(long long)arg2;
@end

