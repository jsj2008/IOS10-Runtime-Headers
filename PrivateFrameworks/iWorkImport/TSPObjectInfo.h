//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSHashTable, NSMutableSet, NSSet;

__attribute__((visibility("hidden")))
@interface TSPObjectInfo : NSObject
{
    NSHashTable *_referencedDataHashTable;
    NSHashTable *_referencedObjectsHashTable;
    NSMutableSet *_referencedObjectUUIDs;
    NSArray *_referencedData;
    NSArray *_referencedObjects;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSSet *referencedObjectUUIDs;
@property(readonly, nonatomic) NSArray *referencedObjects;
@property(readonly, nonatomic) NSArray *referencedData;
- (void)visitObjectReferences:(id)arg1 rootObject:(id)arg2 referenceDepth:(unsigned long long)arg3;
- (void)visitObject:(id)arg1 rootObject:(id)arg2 referenceDepth:(unsigned long long)arg3;
- (id)initWithObject:(id)arg1 referenceDepth:(unsigned long long)arg2;
- (id)init;

@end

