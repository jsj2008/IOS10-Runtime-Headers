//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreThemeDefinition/TDAsset.h>

@class NSSet;

@interface TDPhotoshopAsset : TDAsset
{
}

- (void)setAttributesFromCopyData:(id)arg1;
- (id)copyDataFromAttributes;
- (_Bool)hasProduction;
- (id)production;
- (_Bool)hasCursorProduction;
- (id)_productionWithRenditionsInProductions:(id)arg1;
- (id)_activeProductionWithRenditionsInProductions:(id)arg1;

// Remaining properties
@property(retain, nonatomic) NSSet *productions; // @dynamic productions;

@end

