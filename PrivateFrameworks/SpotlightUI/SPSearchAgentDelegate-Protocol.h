//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

@class NSArray, SPSearchAgent;

@protocol SPSearchAgentDelegate

@optional
- (void)searchAgentReceivedSuggestions:(NSArray *)arg1;
- (void)searchAgentClearedResults:(SPSearchAgent *)arg1;
- (void)searchAgentUpdatedResults:(SPSearchAgent *)arg1;
@end

