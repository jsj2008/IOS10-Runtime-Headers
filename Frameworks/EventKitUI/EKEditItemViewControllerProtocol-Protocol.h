//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@protocol EKEditItemViewControllerDelegate;

@protocol EKEditItemViewControllerProtocol

@optional
@property(nonatomic) _Bool useCustomBackButton;
@property(nonatomic) _Bool editItemShouldBeAskedForInjectableViewController;
@property(nonatomic) _Bool presentModally;
@property(nonatomic) __weak id <EKEditItemViewControllerDelegate> editDelegate;
- (void)saveAndDismissWithExtremePrejudice;
@end

