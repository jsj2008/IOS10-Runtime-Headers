//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <BaseBoard/BSAction.h>

@class NSString;

@interface SBSAcquireAssertionAction : BSAction
{
}

+ (id)assertionWithAssertionName:(id)arg1 reason:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
@property(readonly, nonatomic) unsigned int port;
@property(readonly, nonatomic) __weak NSString *reason;
@property(readonly, nonatomic) __weak NSString *assertionName;

@end
