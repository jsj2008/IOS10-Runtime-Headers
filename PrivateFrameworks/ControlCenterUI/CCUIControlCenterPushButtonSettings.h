//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/_UISettings.h>

@class NSString;

@interface CCUIControlCenterPushButtonSettings : _UISettings
{
    _Bool _enabled;
    NSString *_displayName;
    NSString *_identifier;
}

+ (id)createWithSettingClass:(Class)arg1;
+ (id)settingsControllerModule;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(retain, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(nonatomic) _Bool enabled; // @synthesize enabled=_enabled;
- (void).cxx_destruct;
- (void)setDefaultValues;

@end
