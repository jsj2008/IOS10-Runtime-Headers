//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FuseUI/MusicEntityAbstractLockupView.h>

#import <FuseUI/MPUTextDrawingCacheInvalidationObserver-Protocol.h>
#import <FuseUI/MusicEntityContentDescriptorViewConfiguring-Protocol.h>
#import <FuseUI/MusicEntityViewDownloadInformationObserving-Protocol.h>

@class MPUNowPlayingIndicatorView, MusicDownloadProgressButton, MusicEntityViewContentDescriptor, MusicPopularityIndicatorView, NSMapTable, NSMutableArray, NSString, UIButton, UIImageView;
@protocol MusicEntityTracklistItemViewDelegate, MusicEntityValueProviding;

@interface MusicEntityTracklistItemView : MusicEntityAbstractLockupView <MPUTextDrawingCacheInvalidationObserver, MusicEntityContentDescriptorViewConfiguring, MusicEntityViewDownloadInformationObserving>
{
    UIButton *_contextualActionsButton;
    MusicDownloadProgressButton *_downloadProgressButton;
    MPUNowPlayingIndicatorView *_indicatorView;
    UIImageView *_mediaTypeImageView;
    UIImageView *_explicitBadgeImageView;
    MusicPopularityIndicatorView *_popularityIndicatorView;
    NSMapTable *_textDescriptorToTextDrawingView;
    NSMutableArray *_textDrawingViewReusePool;
    UIImageView *_trailingAccessoryImageView;
    struct {
        unsigned int didSelectContextualActionsButton:1;
        unsigned int didSelectPlayButton:1;
        unsigned int shouldLayoutAsEditing:1;
    } _delegateRespondsToSelector;
    _Bool _alwaysApplyLeadingTextColumnWidth;
    id <MusicEntityTracklistItemViewDelegate> _delegate;
    double _leadingTextColumnWidth;
    double _trailingTextColumnWidth;
    struct MusicEntityDownloadInformation _downloadInformation;
}

+ (double)maximumHeightForContentDescriptor:(id)arg1 width:(double)arg2 traitCollection:(id)arg3;
@property(nonatomic) _Bool alwaysApplyLeadingTextColumnWidth; // @synthesize alwaysApplyLeadingTextColumnWidth=_alwaysApplyLeadingTextColumnWidth;
@property(readonly, nonatomic) UIButton *contextualActionsButton; // @synthesize contextualActionsButton=_contextualActionsButton;
@property(nonatomic) double trailingTextColumnWidth; // @synthesize trailingTextColumnWidth=_trailingTextColumnWidth;
@property(nonatomic) double leadingTextColumnWidth; // @synthesize leadingTextColumnWidth=_leadingTextColumnWidth;
@property(nonatomic) __weak id <MusicEntityTracklistItemViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct MusicEntityDownloadInformation downloadInformation; // @synthesize downloadInformation=_downloadInformation;
- (void).cxx_destruct;
- (void)_updatePlaybackIndicator;
- (id)_viewForTextDescriptor:(id)arg1;
- (_Bool)_shouldLayoutAsEditing;
- (void)_recycleTextViewsForTextDescriptors:(id)arg1;
- (void)_recycleTextDrawingViewForTextDescriptor:(id)arg1;
- (id)_backgroundColorForTracklistItemSubviews;
- (id)_allTextDescriptorsInTracklistItemContentDescriptor:(id)arg1;
- (void)_contentDescriptorDidInvalidateNotification:(id)arg1;
- (void)_contextualActionsButtonTapped:(id)arg1;
@property(retain, nonatomic) MusicEntityViewContentDescriptor *contentDescriptor;
- (void)textDrawingCacheWasInvalidated:(id)arg1;
- (_Bool)_shouldShowPlayButton;
- (_Bool)_shouldEnableArtworkViewUserInteraction;
- (void)_playbackStatusDidChange:(id)arg1;
- (void)_handlePlayButtonTappedWithAction:(unsigned long long)arg1;
- (void)_handleArtworkViewTapped;
- (void)_entityDisabledDidChange;
- (void)_contentDescriptorDidChange:(id)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
- (void)music_inheritedLayoutInsetsDidChange;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(retain, nonatomic) id <MusicEntityValueProviding> entityValueProvider;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

