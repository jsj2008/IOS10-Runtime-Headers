//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIStatusBarItemView.h>

@class UIView, _UILegibilityImageSet;

__attribute__((visibility("hidden")))
@interface UIStatusBarBatteryItemView : UIStatusBarItemView
{
    float _quantizedCapacity;
    int _state;
    _Bool _batterySaverModeActive;
    UIView *_accessoryView;
    _Bool _cachedImageHasAccessoryImage;
    float _cachedQuantizedCapacity;
    _UILegibilityImageSet *_cachedImageSet;
    unsigned long long _cachedBatteryStyle;
}

@property(nonatomic) unsigned long long cachedBatteryStyle; // @synthesize cachedBatteryStyle=_cachedBatteryStyle;
@property(nonatomic) _Bool cachedImageHasAccessoryImage; // @synthesize cachedImageHasAccessoryImage=_cachedImageHasAccessoryImage;
@property(nonatomic) float cachedQuantizedCapacity; // @synthesize cachedQuantizedCapacity=_cachedQuantizedCapacity;
@property(retain, nonatomic) _UILegibilityImageSet *cachedImageSet; // @synthesize cachedImageSet=_cachedImageSet;
- (void).cxx_destruct;
- (double)legibilityStrength;
- (void)_updateAccessoryImage;
- (double)extraRightPadding;
- (id)contentsImage;
- (id)_contentsImage;
- (id)_accessoryImage;
- (_Bool)_needsAccessoryImage;
- (struct CGSize)_batteryOffsetWithBackground:(id)arg1;
- (_Bool)updateForNewData:(id)arg1 actions:(int)arg2;

@end

