//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <TSReading/TSDShapeStyle.h>

#import <TSReading/TSSPreset-Protocol.h>

@class NSString;

@interface TSWPShapeStyle : TSDShapeStyle <TSSPreset>
{
}

+ (id)defaultValueForProperty:(int)arg1;
+ (int)defaultIntValueForProperty:(int)arg1;
+ (id)propertiesAllowingNSNull;
+ (id)layoutProperties;
+ (id)properties;
+ (id)presetStyleDescriptor;
- (id)defaultParagraphStyle;
- (void)setDefaultParagraphStyle:(id)arg1;
- (id)boxedValueForProperty:(int)arg1 oldBoxedValue:(id)arg2 transformedByTransform:(struct CGAffineTransform)arg3;
- (SEL)mapThemePropertyMapSelector;
@property(readonly, nonatomic) NSString *presetKind;

@end
