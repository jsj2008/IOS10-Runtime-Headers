//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/NSObject-Protocol.h>

@class NSArray, UIActivity;

@protocol _UIActivityHelperAPI <NSObject>
- (void)cancelUpdatesIfNeeded;
- (NSArray *)availableActivitiesForItemValues:(NSArray *)arg1 applicationExtensionActivities:(NSArray *)arg2 withActivity:(UIActivity *)arg3 sourceIsManaged:(_Bool)arg4 shouldMatchOnlyUserElectedExtensions:(_Bool)arg5 activityItems:(NSArray *)arg6 applicationActivities:(NSArray *)arg7 activityTypeOrder:(NSArray *)arg8 includedActivityTypes:(NSArray *)arg9 excludedActivityCategories:(long long)arg10;
@end
