//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPRemoteCommand.h>

@class NSArray;

@interface MPInsertIntoPlaybackQueueCommand : MPRemoteCommand
{
    NSArray *_supportedInsertionPositions;
}

@property(copy, nonatomic) NSArray *supportedInsertionPositions; // @synthesize supportedInsertionPositions=_supportedInsertionPositions;
- (void).cxx_destruct;
- (id)_mediaRemoteCommandInfoOptions;

@end

