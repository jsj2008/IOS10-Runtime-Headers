//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VectorKit/VKTransitLineMapModel.h>

__attribute__((visibility("hidden")))
@interface VKSelectedTransitLineMapModel : VKTransitLineMapModel
{
}

- (void)setSelectedNodes:(const unordered_set_6cd805f9 *)arg1;
- (void)setSelectedLines:(const unordered_set_6cd805f9 *)arg1;
- (void)cloneSelectedItemsFromTransitLineModel:(id)arg1;
- (unsigned long long)mapLayerPosition;
- (id)initWithTarget:(id)arg1 sharedResources:(id)arg2 labelExternalObjectsModerator:(struct LabelExternalObjectsModerator *)arg3;

@end
