//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UserNotificationsUIKit/NCNotificationRequestContentProvider.h>

@class NSString;

@interface NCNotificationRequestHiddenPreviewContentProvider : NCNotificationRequestContentProvider
{
    NSString *_topic;
    unsigned long long _coalesceCount;
}

@property(nonatomic) unsigned long long coalesceCount; // @synthesize coalesceCount=_coalesceCount;
@property(copy, nonatomic) NSString *topic; // @synthesize topic=_topic;
- (void).cxx_destruct;
- (id)interfaceActions;
- (id)thumbnail;
- (id)secondaryText;
- (void)incrementCoalesceCount;
- (id)init;
- (id)initWithNotificationRequest:(id)arg1;

@end

