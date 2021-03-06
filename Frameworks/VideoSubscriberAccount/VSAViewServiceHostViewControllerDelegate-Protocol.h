//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VideoSubscriberAccount/NSObject-Protocol.h>

@class NSError, VSAViewServiceHostViewController, VSAViewServiceResponse;

@protocol VSAViewServiceHostViewControllerDelegate <NSObject>

@optional
- (void)viewServiceHostViewControllerDidCancel:(VSAViewServiceHostViewController *)arg1;
- (void)viewServiceHostViewControllerDidChooseAdditionalProviders:(VSAViewServiceHostViewController *)arg1;
- (void)viewServiceHostViewController:(VSAViewServiceHostViewController *)arg1 didFailWithError:(NSError *)arg2;
- (void)viewServiceHostViewController:(VSAViewServiceHostViewController *)arg1 didFinishWithResponse:(VSAViewServiceResponse *)arg2;
- (void)dismissViewServiceHostViewController:(VSAViewServiceHostViewController *)arg1;
- (void)presentViewServiceHostViewController:(VSAViewServiceHostViewController *)arg1;
@end

