//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <Foundation/NSLayoutRelationship-Protocol.h>

@class NSArray, NSLayoutRect, NSString;

@interface NSStackInContainerRelationship : NSObject <NSLayoutRelationship>
{
    NSArray *_stackedRects;
    NSLayoutRect *_containingRect;
    double _spacing;
    long long _orientation;
}

+ (id)verticalStackWithRects:(id)arg1 inContainer:(id)arg2 spacing:(double)arg3;
+ (id)horizontalStackWithRects:(id)arg1 inContainer:(id)arg2 spacing:(double)arg3;
+ (id)stackWithOrientation:(long long)arg1 stackedRects:(id)arg2 inContainer:(id)arg3 spacing:(double)arg4;
@property(readonly, copy) NSLayoutRect *containingRect; // @synthesize containingRect=_containingRect;
@property(readonly) double spacing; // @synthesize spacing=_spacing;
@property(readonly) long long orientation; // @synthesize orientation=_orientation;
@property(readonly, copy) NSArray *stackedRects; // @synthesize stackedRects=_stackedRects;
@property(readonly, copy) NSString *relationshipDescription;
@property(readonly, copy) NSString *description;
- (id)makeChildrenRelationships;
@property(readonly, copy) NSString *identifier;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithOrientation:(long long)arg1 stackedRects:(id)arg2 containingRect:(id)arg3 spacing:(double)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

