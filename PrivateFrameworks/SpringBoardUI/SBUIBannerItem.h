//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardUI/SBUIQuietModePlayability-Protocol.h>

@class NSString;

@interface SBUIBannerItem : NSObject <SBUIQuietModePlayability>
{
}

- (_Bool)overridesPocketMode;
- (_Bool)overridesQuietMode;
- (_Bool)isCritical;
- (_Bool)inertWhenLocked;
- (id)lockScreenActionContextWithContext:(id)arg1;
- (id)actionWithIdentifier:(id)arg1;
- (id)defaultActionWithContext:(id)arg1;
- (_Bool)hasSubActions;
- (id)subActions;
- (id)subActionLabels;
- (_Bool)shouldShowModalSubActions;
- (id)message;
- (id)title;
- (id)pullDownNotification;
- (_Bool)canShowWhileLocked;
- (_Bool)shouldPlayLightsAndSirens;
- (_Bool)canShowInAssistant;
- (id)sortDate;
- (id)sound;
- (CDUnknownBlockType)action;
- (_Bool)isSticky;
- (unsigned long long)priority;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

