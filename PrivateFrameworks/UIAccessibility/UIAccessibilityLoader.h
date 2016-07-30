//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface UIAccessibilityLoader : NSObject
{
}

+ (_Bool)_accessibilityServerStarted;
+ (void)_accessibilityStopServer;
+ (_Bool)_accessibilityUIKitBundleLoaded;
+ (void)_accessibilityReenabled;
+ (void)_accessibilityLoadExtendedBundles;
+ (void)_accessibilityStartMiniServer;
+ (void)_accessibilityStartServer;
+ (void)_applicationAccessibilityListener:(id)arg1;
+ (void)_accessibilityInitializeRuntimeOverrides;
+ (void)_stringLocalizationStarted:(id)arg1;
+ (void)_accessibilityInitializeSubclassRuntimeOverrides;
+ (void)_accessibilityLoadSubbundles:(id)arg1;
+ (void)__loadActualAccessibilityBundle:(id)arg1 didLoadCallback:(CDUnknownBlockType)arg2 loadSubbundles:(_Bool)arg3;
+ (id)_axBundleForBundle:(id)arg1;
+ (id)_accessibilityBundlesForBundle:(id)arg1;
+ (void)_loadAXBundleForBundle:(id)arg1 didLoadCallback:(CDUnknownBlockType)arg2;
+ (void)_loadAXBundleForBundle:(id)arg1 didLoadCallback:(CDUnknownBlockType)arg2 forceLoad:(_Bool)arg3 loadSubbundles:(_Bool)arg4 loadAllAccessibilityInfo:(_Bool)arg5;
+ (void)loadAccessibilityBundle:(id)arg1 didLoadCallback:(CDUnknownBlockType)arg2 force:(_Bool)arg3;
+ (void)loadAccessibilityBundle:(id)arg1 didLoadCallback:(CDUnknownBlockType)arg2;
+ (void)loadActualAccessibilityBundle:(id)arg1 didLoadCallback:(CDUnknownBlockType)arg2 loadSubbundles:(_Bool)arg3;
+ (void)initialize;

@end
