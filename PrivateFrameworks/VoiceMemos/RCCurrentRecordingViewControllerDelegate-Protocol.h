//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VoiceMemos/NSObject-Protocol.h>

@class RCAVState, RCCurrentRecordingViewController;

@protocol RCCurrentRecordingViewControllerDelegate <NSObject>
- (void)currentRecordingViewController:(RCCurrentRecordingViewController *)arg1 didDeterminteAvailability:(_Bool)arg2;
- (void)currentRecordingViewController:(RCCurrentRecordingViewController *)arg1 didChangeAVState:(RCAVState *)arg2;
- (void)currentRecordingViewControllerRecordingDidEnd:(RCCurrentRecordingViewController *)arg1;
@end
