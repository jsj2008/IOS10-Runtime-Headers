//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <HealthKit/_HKCFGNode.h>

@class NSArray, _HKCFGReplacementRule;

__attribute__((visibility("hidden")))
@interface _HKCFGNonTerminalNode : _HKCFGNode
{
    NSArray *_nodes;
    id _value;
    _HKCFGReplacementRule *_rule;
}

+ (id)nodeWithChildren:(id)arg1 rule:(id)arg2 rangeOfString:(struct _NSRange)arg3;
@property(readonly, nonatomic) _HKCFGReplacementRule *rule; // @synthesize rule=_rule;
- (void).cxx_destruct;
- (id)evaluate;

@end

