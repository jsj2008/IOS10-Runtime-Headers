//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AVFoundation/AVAssetReaderOutput.h>

@class AVAssetReaderSampleReferenceOutputInternal, AVAssetTrack;

@interface AVAssetReaderSampleReferenceOutput : AVAssetReaderOutput
{
    AVAssetReaderSampleReferenceOutputInternal *_sampleReferenceOutputInternal;
}

+ (id)assetReaderSampleReferenceOutputWithTrack:(id)arg1;
- (_Bool)_enableTrackExtractionReturningError:(id *)arg1;
- (_Bool)_trimsSampleDurations;
- (id)_asset;
- (id)mediaType;
@property(readonly, nonatomic) AVAssetTrack *track;
- (id)description;
- (void)finalize;
- (void)dealloc;
- (id)initWithTrack:(id)arg1;
- (id)init;

@end
