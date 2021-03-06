//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFItemProvider.h>

@class NSMutableSet;
@protocol HFCharacteristicValueSource;

@interface HFServiceGroupItemProvider : HFItemProvider
{
    CDUnknownBlockType _filter;
    NSMutableSet *_serviceGroupItems;
    id <HFCharacteristicValueSource> _overrideValueSource;
}

@property(retain, nonatomic) id <HFCharacteristicValueSource> overrideValueSource; // @synthesize overrideValueSource=_overrideValueSource;
@property(retain, nonatomic) NSMutableSet *serviceGroupItems; // @synthesize serviceGroupItems=_serviceGroupItems;
@property(copy, nonatomic) CDUnknownBlockType filter; // @synthesize filter=_filter;
- (void).cxx_destruct;
@property(retain, nonatomic) id <HFCharacteristicValueSource> valueSource;
- (id)invalidationReasons;
- (id)items;
- (id)reloadItems;
- (id)initWithHome:(id)arg1;

@end

