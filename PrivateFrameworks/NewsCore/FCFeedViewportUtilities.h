//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface FCFeedViewportUtilities : NSObject
{
}

+ (id)_externalGroupIDFromGroup:(id)arg1;
+ (id)diffWithNewExternalElements:(id)arg1 modifiedInternalGroups:(id)arg2 expandedGap:(id)arg3 oldViewport:(id)arg4;
+ (void)_fixPersistenceGapIdentifiersIn:(id)arg1 internalElements:(id)arg2 oldViewport:(id)arg3;
+ (void)_replaceDeflatedElementsWithPersistenceGapsIn:(id)arg1;
+ (id)externalElementsFromInternalElements:(id)arg1 oldViewport:(id)arg2;

@end
