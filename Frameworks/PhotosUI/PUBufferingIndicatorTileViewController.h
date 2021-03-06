//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUTileViewController.h>

#import <PhotosUI/PUBrowsingVideoPlayerChangeObserver-Protocol.h>

@class NSString, PUAssetViewModel, PUBrowsingVideoPlayer, UIActivityIndicatorView;

__attribute__((visibility("hidden")))
@interface PUBufferingIndicatorTileViewController : PUTileViewController <PUBrowsingVideoPlayerChangeObserver>
{
    _Bool __shouldShowIndeterminateActivityIndicator;
    PUAssetViewModel *_assetViewModel;
    PUBrowsingVideoPlayer *__videoPlayer;
    UIActivityIndicatorView *__spinner;
}

+ (struct CGSize)bufferingIndicatorTileSize;
+ (_Bool)canShowBufferingIndicatorTileForAsset:(id)arg1;
@property(retain, nonatomic, setter=_setSpinner:) UIActivityIndicatorView *_spinner; // @synthesize _spinner=__spinner;
@property(nonatomic, setter=_setShouldShowIndeterminateActivityIndicator:) _Bool _shouldShowIndeterminateActivityIndicator; // @synthesize _shouldShowIndeterminateActivityIndicator=__shouldShowIndeterminateActivityIndicator;
@property(retain, nonatomic, setter=_setVideoPlayer:) PUBrowsingVideoPlayer *_videoPlayer; // @synthesize _videoPlayer=__videoPlayer;
@property(retain, nonatomic) PUAssetViewModel *assetViewModel; // @synthesize assetViewModel=_assetViewModel;
- (void).cxx_destruct;
- (void)viewModel:(id)arg1 didChange:(id)arg2;
- (void)_updateIndicator;
- (void)_setShouldShowIndeterminateActivityIndicator:(_Bool)arg1 animated:(_Bool)arg2;
- (void)becomeReusable;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

