//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FuseUI/MusicLibraryBrowseTableViewConfiguration.h>

@class MusicCompositeEntityViewDescriptor, MusicEntityViewDescriptor, MusicMediaDetailTintInformation, MusicMediaProductTracklistTableViewDescriptor, NSString;
@protocol MusicEntityProviding;

@interface MusicProductTracklistTableViewConfiguration : MusicLibraryBrowseTableViewConfiguration
{
    _Bool _wantsArtistName;
    _Bool _wantsArtwork;
    _Bool _wantsCompleteOffer;
    _Bool _wantsCopyrightText;
    MusicEntityViewDescriptor *_copyrightEntityViewDescriptor;
    MusicEntityViewDescriptor *_showCompleteOfferEntityViewDescriptor;
    MusicEntityViewDescriptor *_shuffleEntityViewDescriptor;
    MusicMediaProductTracklistTableViewDescriptor *_tracklistTableViewDescriptor;
    MusicCompositeEntityViewDescriptor *_compositeEntityViewDescriptor;
    NSString *_completeOfferLocalizedTitle;
    id <MusicEntityProviding> _entityProvider;
    id <MusicEntityProviding> _copyrightSourceEntityProvider;
    MusicMediaDetailTintInformation *_mediaDetailTintInformation;
    long long _prominentTrackStoreID;
}

+ (Class)tracklistItemContentDescriptorClass;
@property(nonatomic) _Bool wantsCopyrightText; // @synthesize wantsCopyrightText=_wantsCopyrightText;
@property(nonatomic) _Bool wantsCompleteOffer; // @synthesize wantsCompleteOffer=_wantsCompleteOffer;
@property(nonatomic) _Bool wantsArtwork; // @synthesize wantsArtwork=_wantsArtwork;
@property(nonatomic) _Bool wantsArtistName; // @synthesize wantsArtistName=_wantsArtistName;
@property(nonatomic) long long prominentTrackStoreID; // @synthesize prominentTrackStoreID=_prominentTrackStoreID;
@property(copy, nonatomic) MusicMediaDetailTintInformation *mediaDetailTintInformation; // @synthesize mediaDetailTintInformation=_mediaDetailTintInformation;
@property(retain, nonatomic) id <MusicEntityProviding> copyrightSourceEntityProvider; // @synthesize copyrightSourceEntityProvider=_copyrightSourceEntityProvider;
@property(readonly, nonatomic) id <MusicEntityProviding> entityProvider; // @synthesize entityProvider=_entityProvider;
@property(copy, nonatomic) NSString *completeOfferLocalizedTitle; // @synthesize completeOfferLocalizedTitle=_completeOfferLocalizedTitle;
@property(readonly, nonatomic) MusicCompositeEntityViewDescriptor *_compositeEntityViewDescriptor; // @synthesize _compositeEntityViewDescriptor;
- (void).cxx_destruct;
@property(readonly, nonatomic) MusicMediaProductTracklistTableViewDescriptor *_tracklistTableViewDescriptor; // @synthesize _tracklistTableViewDescriptor;
@property(readonly, nonatomic) MusicEntityViewDescriptor *_shuffleEntityViewDescriptor; // @synthesize _shuffleEntityViewDescriptor;
@property(readonly, nonatomic) MusicEntityViewDescriptor *_showCompleteOfferEntityViewDescriptor; // @synthesize _showCompleteOfferEntityViewDescriptor;
@property(readonly, nonatomic) MusicEntityViewDescriptor *_copyrightEntityViewDescriptor; // @synthesize _copyrightEntityViewDescriptor;
- (id)_loadTracklistTableViewDescriptor;
- (id)_loadShowCompleteEntityViewDescriptorWithCompleteOfferEntityProvider:(id)arg1;
- (id)_loadShuffleEntityViewDescriptorWithSourceEntityProvider:(id)arg1;
- (id)_loadCopyrightEntityViewDescriptorWithSourceEntityProvider:(id)arg1;
- (void)_configureTracklistTableViewDescriptorWithTintInformation:(id)arg1;
- (void)_configureShuffleEntityViewDescriptorWithTintInformation:(id)arg1;
- (void)_configureShowCompleteAlbumViewDescriptorWithTintInformation:(id)arg1;
- (void)_configureCopyrightViewDescriptorWithTintInformation:(id)arg1;
@property(readonly, nonatomic) MusicMediaProductTracklistTableViewDescriptor *tracklistTableViewDescriptor;
- (id)newViewController;
- (id)newSelectionEntityValueContext;
- (id)loadEntityViewDescriptor;
- (long long)handleSelectionOfUnplayableEntityValueContext:(id)arg1 withPlayabilityResult:(unsigned long long)arg2 fromViewController:(id)arg3;
- (long long)handleSelectionOfEntityValueContext:(id)arg1 fromViewController:(id)arg2;
- (id)initWithEntityProvider:(id)arg1;
- (id)init;

@end

