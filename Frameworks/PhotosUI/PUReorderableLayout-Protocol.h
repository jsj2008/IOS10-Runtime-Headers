//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSIndexPath;

@protocol PUReorderableLayout
- (void)endInsertingItem;
- (void)beginInsertingItemAtIndexPath:(NSIndexPath *)arg1;
- (NSIndexPath *)reorderedIndexPath:(NSIndexPath *)arg1;
- (void)endReordering;
- (void)updateReorderingTargetIndexPath:(NSIndexPath *)arg1;
- (void)beginReorderingItemAtIndexPath:(NSIndexPath *)arg1;
@end
