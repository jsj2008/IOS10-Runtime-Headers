//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKCircularComplicationView.h>

#import <NanoTimeKitCompanion/NTKWorldClockComplicationDisplay-Protocol.h>

@class CLKFont, NSDictionary, NSString, NTKColoringLabel, NTKDigitalTimeLabel;
@protocol NTKComplicationDisplayObserver;

@interface NTKWorldClockCircularSmallComplicationView : NTKCircularComplicationView <NTKWorldClockComplicationDisplay>
{
    NTKColoringLabel *_cityLabel;
    NTKDigitalTimeLabel *_timeLabel;
    CLKFont *_normalLayoutCityFont;
    NSDictionary *_alternateLayoutCityTextAttributes;
    _Bool _alternateLayout;
}

- (void).cxx_destruct;
- (void)setOverrideDate:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (void)setShortCity:(id)arg1;
- (void)layoutSubviews;
- (void)setForegroundColor:(id)arg1;
- (double)_alternateLayoutCityFontSize;
- (id)_normalLayoutCityFont;
- (void)_updateLabelsForFontChange;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) __weak id <NTKComplicationDisplayObserver> displayObserver;
@property(readonly) unsigned long long hash;
@property(nonatomic, getter=isHighlighted) _Bool highlighted;
@property(nonatomic) _Bool shouldUseTemplateColors;
@property(readonly) Class superclass;

@end

