//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UINavigationController.h>

@class TKVibrationRecorderContentViewController;
@protocol TKVibrationRecorderViewControllerDelegate;

@interface TKVibrationRecorderViewController : UINavigationController
{
    TKVibrationRecorderContentViewController *_vibrationRecorderContentViewController;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <TKVibrationRecorderViewControllerDelegate> vibrationRecorderViewControllerDelegate;
- (void)dealloc;
- (id)initWithVibratorController:(id)arg1;

@end
