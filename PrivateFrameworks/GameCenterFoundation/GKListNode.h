//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface GKListNode : NSObject
{
    id _value;
    GKListNode *_prevNode;
    GKListNode *_nextNode;
}

@property(nonatomic) GKListNode *nextNode; // @synthesize nextNode=_nextNode;
@property(nonatomic) GKListNode *prevNode; // @synthesize prevNode=_prevNode;
@property(retain, nonatomic) id value; // @synthesize value=_value;
- (id)description;
- (void)dealloc;
- (id)initWithValue:(id)arg1;

@end

