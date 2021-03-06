//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MessageUI/NSObject-Protocol.h>

@class UIView;
@protocol MFDraggableItem;

@protocol MFDragSource <NSObject>
- (UIView *)viewForDragSource;
- (void)dragCompletedForItem:(id <MFDraggableItem>)arg1 success:(_Bool)arg2;
- (void)animatePlaceholderForDragFailure:(id <MFDraggableItem>)arg1;
- (void)dragStartedWithItem:(id <MFDraggableItem>)arg1;
- (UIView *)viewForDraggedItem:(id <MFDraggableItem>)arg1 atScale:(double)arg2;
- (struct CGRect)frameForDraggedItem:(id <MFDraggableItem>)arg1;
- (id <MFDraggableItem>)dragInitiatedAtPoint:(struct CGPoint)arg1;
- (_Bool)allowsDrag;
@end

