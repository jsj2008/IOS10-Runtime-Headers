//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebCore/AVPlayerItemOutputPullDelegate-Protocol.h>

@class NSString;
@protocol OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface WebCoreAVFPullDelegate : NSObject <AVPlayerItemOutputPullDelegate>
{
    // Error parsing type: ^{MediaPlayerPrivateAVFoundationObjC=^^?^^?{Vector<WTF::RefPtr<WebCore::InbandTextTrackPrivateAVF>, 0, WTF::CrashOnOverflow, 16>=^{RefPtr<WebCore::InbandTextTrackPrivateAVF>}II}^{MediaPlayer}{WeakPtrFactory<WebCore::MediaPlayerPrivateAVFoundation>={Ref<WTF::WeakReference<WebCore::MediaPlayerPrivateAVFoundation> >=^{WeakReference<WebCore::MediaPlayerPrivateAVFoundation>}}}{function<void ()>={type=[24C]}^{__base<void ()>}}{Vector<WebCore::MediaPlayerPrivateAVFoundation::Notification, 0, WTF::CrashOnOverflow, 16>=^{Notification}II}{Lock={Atomic<unsigned char>={atomic<unsigned char>=AC}}}{unique_ptr<WebCore::PlatformTimeRanges, std::__1::default_delete<WebCore::PlatformTimeRanges> >={__compressed_pair<WebCore::PlatformTimeRanges *, std::__1::default_delete<WebCore::PlatformTimeRanges> >=^{PlatformTimeRanges}}}ii{String={RefPtr<WTF::StringImpl>=^{StringImpl}}}i{FloatSize=ff}{MediaTime=(?=qd)iI}{MediaTime=(?=qd)iI}{MediaTime=(?=qd)iI}{MediaTime=(?=qd)iI}{MediaTime=(?=qd)iI}{MediaTime=(?=qd)iI}iiBBBBBBBBBBBBBBB{WeakPtrFactory<WebCore::MediaPlayerPrivateAVFoundationObjC>={Ref<WTF::WeakReference<WebCore::MediaPlayerPrivateAVFoundationObjC> >=^{WeakReference<WebCore::MediaPlayerPrivateAVFoundationObjC>}}}{RetainPtr<AVURLAsset>=^v}{RetainPtr<AVPlayer>=^v}{RetainPtr<AVPlayerItem>=^v}{RetainPtr<AVPlayerLayer>=^v}{unique_ptr<WebCore::VideoFullscreenLayerManager, std::__1::default_delete<WebCore::VideoFullscreenLayerManager> >={__compressed_pair<WebCore::VideoFullscreenLayerManager *, std::__1::default_delete<WebCore::VideoFullscreenLayerManager> >=^{VideoFullscreenLayerManager}}}i{RetainPtr<CALayer>=^v}{RetainPtr<WebCoreAVFMovieObserver>=^v}{RetainPtr<id>=^v}{String={RefPtr<WTF::StringImpl>=^{StringImpl}}}BB{RefPtr<WebCore::AudioSourceProviderAVFObjC>=^{AudioSourceProviderAVFObjC}}{RetainPtr<AVAssetImageGenerator>=^v}{RetainPtr<AVPlayerItemVideoOutput>=^v}{RetainPtr<WebCoreAVFPullDelegate>=^v}{RetainPtr<CGImage *>=^v}@{RetainPtr<AVPlayerItemVideoOutput>=^v}{unique_ptr<WebCore::TextureCacheCV, std::__1::default_delete<WebCore::TextureCacheCV> >={__compressed_pair<WebCore::TextureCacheCV *, std::__1::default_delete<WebCore::TextureCacheCV> >=^{TextureCacheCV}}}{unique_ptr<WebCore::VideoTextureCopierCV, std::__1::default_delete<WebCore::VideoTextureCopierCV> >={__compressed_pair<WebCore::VideoTextureCopierCV *, std::__1::default_delete<WebCore::VideoTextureCopierCV> >=^{VideoTextureCopierCV}}}{RetainPtr<__CVBuffer *>=^v}{unique_ptr<WebCore::PixelBufferConformerCV, std::__1::default_delete<WebCore::PixelBufferConformerCV> >={__compressed_pair<WebCore::PixelBufferConformerCV *, std::__1::default_delete<WebCore::PixelBufferConformerCV> >=^{PixelBufferConformerCV}}}{HashMap<WTF::RetainPtr<AVAssetResourceLoadingRequest>, WTF::RefPtr<WebCore::WebCoreAVFResourceLoader>, WTF::PtrHash<WTF::RetainPtr<AVAssetResourceLoadingRequest> >, WTF::HashTraits<WTF::RetainPtr<AVAssetResourceLoadingRequest> >, WTF::HashTraits<WTF::RefPtr<WebCore::WebCoreAVFResourceLoader> > >={HashTable<WTF::RetainPtr<AVAssetResourceLoadingRequest>, WTF::KeyValuePair<WTF::RetainPtr<AVAssetResourceLoadingRequest>, WTF::RefPtr<WebCore::WebCoreAVFResourceLoader> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::RetainPtr<AVAssetResourceLoadingRequest>, WTF::RefPtr<WebCore::WebCoreAVFResourceLoader> > >, WTF::PtrHash<WTF::RetainPtr<AVAssetResourceLoadingRequest> >, WTF::HashMap<WTF::RetainPtr<AVAssetResourceLoadingRequest>, WTF::RefPtr<WebCore::WebCoreAVFResourceLoader>, WTF::PtrHash<WTF::RetainPtr<AVAssetResourceLoadingRequest> >, WTF::HashTraits<WTF::RetainPtr<AVAssetResourceLoadingRequest> >, WTF::HashTraits<WTF::RefPtr<WebCore::WebCoreAVFResourceLoader> > >::KeyValuePairTraits, WTF::HashTraits<WTF::RetainPtr<AVAssetResourceLoadingRequest> > >=^{KeyValuePair<WTF::RetainPtr<AVAssetResourceLoadingRequest>, WTF::RefPtr<WebCore::WebCoreAVFResourceLoader> >}IIII}}{RetainPtr<WebCoreAVFLoaderDelegate>=^v}{HashMap<WTF::String, WTF::RetainPtr<AVAssetResourceLoadingRequest>, WTF::StringHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::RetainPtr<AVAssetResourceLoadingRequest> > >={HashTable<WTF::String, WTF::KeyValuePair<WTF::String, WTF::RetainPtr<AVAssetResourceLoadingRequest> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::String, WTF::RetainPtr<AVAssetResourceLoadingRequest> > >, WTF::StringHash, WTF::HashMap<WTF::String, WTF::RetainPtr<AVAssetResourceLoadingRequest>, WTF::StringHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::RetainPtr<AVAssetResourceLoadingRequest> > >::KeyValuePairTraits, WTF::HashTraits<WTF::String> >=^{KeyValuePair<WTF::String, WTF::RetainPtr<AVAssetResourceLoadingRequest> >}IIII}}{HashMap<WTF::String, WTF::RetainPtr<AVAssetResourceLoadingRequest>, WTF::StringHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::RetainPtr<AVAssetResourceLoadingRequest> > >={HashTable<WTF::String, WTF::KeyValuePair<WTF::String, WTF::RetainPtr<AVAssetResourceLoadingRequest> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::String, WTF::RetainPtr<AVAssetResourceLoadingRequest> > >, WTF::StringHash, WTF::HashMap<WTF::String, WTF::RetainPtr<AVAssetResourceLoadingRequest>, WTF::StringHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::RetainPtr<AVAssetResourceLoadingRequest> > >::KeyValuePairTraits, WTF::HashTraits<WTF::String> >=^{KeyValuePair<WTF::String, WTF::RetainPtr<AVAssetResourceLoadingRequest> >}IIII}}{RetainPtr<AVPlayerItemLegibleOutput>=^v}{Vector<WTF::RefPtr<WebCore::AudioTrackPrivateAVFObjC>, 0, WTF::CrashOnOverflow, 16>=^{RefPtr<WebCore::AudioTrackPrivateAVFObjC>}II}{Vector<WTF::RefPtr<WebCore::VideoTrackPrivateAVFObjC>, 0, WTF::CrashOnOverflow, 16>=^{RefPtr<WebCore::VideoTrackPrivateAVFObjC>}II}{RefPtr<WebCore::MediaSelectionGroupAVFObjC>=^{MediaSelectionGroupAVFObjC}}{RefPtr<WebCore::MediaSelectionGroupAVFObjC>=^{MediaSelectionGroupAVFObjC}}^{InbandTextTrackPrivateAVF}{RefPtr<WebCore::InbandMetadataTextTrackPrivateAVF>=^{InbandMetadataTextTrackPrivateAVF}}{RetainPtr<NSArray>=^v}{RetainPtr<NSArray>=^v}{RetainPtr<NSArray>=^v}{RetainPtr<NSArray>=^v}{FloatSize=ff}{MediaTime=(?=qd)iI}dqIiBBBBBBBBBBB}, name: m_callback
    NSObject<OS_dispatch_semaphore> *m_semaphore;
}

- (void)outputSequenceWasFlushed:(id)arg1;
- (void)outputMediaDataWillChange:(id)arg1;
-     // Error parsing type: v24@0:8^{MediaPlayerPrivateAVFoundationObjC=^^?^^?{Vector<WTF::RefPtr<WebCore::InbandTextTrackPrivateAVF>, 0, WTF::CrashOnOverflow, 16>=^{RefPtr<WebCore::InbandTextTrackPrivateAVF>}II}^{MediaPlayer}{WeakPtrFactory<WebCore::MediaPlayerPrivateAVFoundation>={Ref<WTF::WeakReference<WebCore::MediaPlayerPrivateAVFoundation> >=^{WeakReference<WebCore::MediaPlayerPrivateAVFoundation>}}}{function<void ()>={type=[24C]}^{__base<void ()>}}{Vector<WebCore::MediaPlayerPrivateAVFoundation::Notification, 0, WTF::CrashOnOverflow, 16>=^{Notification}II}{Lock={Atomic<unsigned char>={atomic<unsigned char>=AC}}}{unique_ptr<WebCore::PlatformTimeRanges, std::__1::default_delete<WebCore::PlatformTimeRanges> >={__compressed_pair<WebCore::PlatformTimeRanges *, std::__1::default_delete<WebCore::PlatformTimeRanges> >=^{PlatformTimeRanges}}}ii{String={RefPtr<WTF::StringImpl>=^{StringImpl}}}i{FloatSize=ff}{MediaTime=(?=qd)iI}{MediaTime=(?=qd)iI}{MediaTime=(?=qd)iI}{MediaTime=(?=qd)iI}{MediaTime=(?=qd)iI}{MediaTime=(?=qd)iI}iiBBBBBBBBBBBBBBB{WeakPtrFactory<WebCore::MediaPlayerPrivateAVFoundationObjC>={Ref<WTF::WeakReference<WebCore::MediaPlayerPrivateAVFoundationObjC> >=^{WeakReference<WebCore::MediaPlayerPrivateAVFoundationObjC>}}}{RetainPtr<AVURLAsset>=^v}{RetainPtr<AVPlayer>=^v}{RetainPtr<AVPlayerItem>=^v}{RetainPtr<AVPlayerLayer>=^v}{unique_ptr<WebCore::VideoFullscreenLayerManager, std::__1::default_delete<WebCore::VideoFullscreenLayerManager> >={__compressed_pair<WebCore::VideoFullscreenLayerManager *, std::__1::default_delete<WebCore::VideoFullscreenLayerManager> >=^{VideoFullscreenLayerManager}}}i{RetainPtr<CALayer>=^v}{RetainPtr<WebCoreAVFMovieObserver>=^v}{RetainPtr<id>=^v}{String={RefPtr<WTF::StringImpl>=^{StringImpl}}}BB{RefPtr<WebCore::AudioSourceProviderAVFObjC>=^{AudioSourceProviderAVFObjC}}{RetainPtr<AVAssetImageGenerator>=^v}{RetainPtr<AVPlayerItemVideoOutput>=^v}{RetainPtr<WebCoreAVFPullDelegate>=^v}{RetainPtr<CGImage *>=^v}@{RetainPtr<AVPlayerItemVideoOutput>=^v}{unique_ptr<WebCore::TextureCacheCV, std::__1::default_delete<WebCore::TextureCacheCV> >={__compressed_pair<WebCore::TextureCacheCV *, std::__1::default_delete<WebCore::TextureCacheCV> >=^{TextureCacheCV}}}{unique_ptr<WebCore::VideoTextureCopierCV, std::__1::default_delete<WebCore::VideoTextureCopierCV> >={__compressed_pair<WebCore::VideoTextureCopierCV *, std::__1::default_delete<WebCore::VideoTextureCopierCV> >=^{VideoTextureCopierCV}}}{RetainPtr<__CVBuffer *>=^v}{unique_ptr<WebCore::PixelBufferConformerCV, std::__1::default_delete<WebCore::PixelBufferConformerCV> >={__compressed_pair<WebCore::PixelBufferConformerCV *, std::__1::default_delete<WebCore::PixelBufferConformerCV> >=^{PixelBufferConformerCV}}}{HashMap<WTF::RetainPtr<AVAssetResourceLoadingRequest>, WTF::RefPtr<WebCore::WebCoreAVFResourceLoader>, WTF::PtrHash<WTF::RetainPtr<AVAssetResourceLoadingRequest> >, WTF::HashTraits<WTF::RetainPtr<AVAssetResourceLoadingRequest> >, WTF::HashTraits<WTF::RefPtr<WebCore::WebCoreAVFResourceLoader> > >={HashTable<WTF::RetainPtr<AVAssetResourceLoadingRequest>, WTF::KeyValuePair<WTF::RetainPtr<AVAssetResourceLoadingRequest>, WTF::RefPtr<WebCore::WebCoreAVFResourceLoader> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::RetainPtr<AVAssetResourceLoadingRequest>, WTF::RefPtr<WebCore::WebCoreAVFResourceLoader> > >, WTF::PtrHash<WTF::RetainPtr<AVAssetResourceLoadingRequest> >, WTF::HashMap<WTF::RetainPtr<AVAssetResourceLoadingRequest>, WTF::RefPtr<WebCore::WebCoreAVFResourceLoader>, WTF::PtrHash<WTF::RetainPtr<AVAssetResourceLoadingRequest> >, WTF::HashTraits<WTF::RetainPtr<AVAssetResourceLoadingRequest> >, WTF::HashTraits<WTF::RefPtr<WebCore::WebCoreAVFResourceLoader> > >::KeyValuePairTraits, WTF::HashTraits<WTF::RetainPtr<AVAssetResourceLoadingRequest> > >=^{KeyValuePair<WTF::RetainPtr<AVAssetResourceLoadingRequest>, WTF::RefPtr<WebCore::WebCoreAVFResourceLoader> >}IIII}}{RetainPtr<WebCoreAVFLoaderDelegate>=^v}{HashMap<WTF::String, WTF::RetainPtr<AVAssetResourceLoadingRequest>, WTF::StringHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::RetainPtr<AVAssetResourceLoadingRequest> > >={HashTable<WTF::String, WTF::KeyValuePair<WTF::String, WTF::RetainPtr<AVAssetResourceLoadingRequest> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::String, WTF::RetainPtr<AVAssetResourceLoadingRequest> > >, WTF::StringHash, WTF::HashMap<WTF::String, WTF::RetainPtr<AVAssetResourceLoadingRequest>, WTF::StringHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::RetainPtr<AVAssetResourceLoadingRequest> > >::KeyValuePairTraits, WTF::HashTraits<WTF::String> >=^{KeyValuePair<WTF::String, WTF::RetainPtr<AVAssetResourceLoadingRequest> >}IIII}}{HashMap<WTF::String, WTF::RetainPtr<AVAssetResourceLoadingRequest>, WTF::StringHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::RetainPtr<AVAssetResourceLoadingRequest> > >={HashTable<WTF::String, WTF::KeyValuePair<WTF::String, WTF::RetainPtr<AVAssetResourceLoadingRequest> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::String, WTF::RetainPtr<AVAssetResourceLoadingRequest> > >, WTF::StringHash, WTF::HashMap<WTF::String, WTF::RetainPtr<AVAssetResourceLoadingRequest>, WTF::StringHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::RetainPtr<AVAssetResourceLoadingRequest> > >::KeyValuePairTraits, WTF::HashTraits<WTF::String> >=^{KeyValuePair<WTF::String, WTF::RetainPtr<AVAssetResourceLoadingRequest> >}IIII}}{RetainPtr<AVPlayerItemLegibleOutput>=^v}{Vector<WTF::RefPtr<WebCore::AudioTrackPrivateAVFObjC>, 0, WTF::CrashOnOverflow, 16>=^{RefPtr<WebCore::AudioTrackPrivateAVFObjC>}II}{Vector<WTF::RefPtr<WebCore::VideoTrackPrivateAVFObjC>, 0, WTF::CrashOnOverflow, 16>=^{RefPtr<WebCore::VideoTrackPrivateAVFObjC>}II}{RefPtr<WebCore::MediaSelectionGroupAVFObjC>=^{MediaSelectionGroupAVFObjC}}{RefPtr<WebCore::MediaSelectionGroupAVFObjC>=^{MediaSelectionGroupAVFObjC}}^{InbandTextTrackPrivateAVF}{RefPtr<WebCore::InbandMetadataTextTrackPrivateAVF>=^{InbandMetadataTextTrackPrivateAVF}}{RetainPtr<NSArray>=^v}{RetainPtr<NSArray>=^v}{RetainPtr<NSArray>=^v}{RetainPtr<NSArray>=^v}{FloatSize=ff}{MediaTime=(?=qd)iI}dqIiBBBBBBBBBBB}16, name: setCallback:
-     // Error parsing type: @24@0:8^{MediaPlayerPrivateAVFoundationObjC=^^?^^?{Vector<WTF::RefPtr<WebCore::InbandTextTrackPrivateAVF>, 0, WTF::CrashOnOverflow, 16>=^{RefPtr<WebCore::InbandTextTrackPrivateAVF>}II}^{MediaPlayer}{WeakPtrFactory<WebCore::MediaPlayerPrivateAVFoundation>={Ref<WTF::WeakReference<WebCore::MediaPlayerPrivateAVFoundation> >=^{WeakReference<WebCore::MediaPlayerPrivateAVFoundation>}}}{function<void ()>={type=[24C]}^{__base<void ()>}}{Vector<WebCore::MediaPlayerPrivateAVFoundation::Notification, 0, WTF::CrashOnOverflow, 16>=^{Notification}II}{Lock={Atomic<unsigned char>={atomic<unsigned char>=AC}}}{unique_ptr<WebCore::PlatformTimeRanges, std::__1::default_delete<WebCore::PlatformTimeRanges> >={__compressed_pair<WebCore::PlatformTimeRanges *, std::__1::default_delete<WebCore::PlatformTimeRanges> >=^{PlatformTimeRanges}}}ii{String={RefPtr<WTF::StringImpl>=^{StringImpl}}}i{FloatSize=ff}{MediaTime=(?=qd)iI}{MediaTime=(?=qd)iI}{MediaTime=(?=qd)iI}{MediaTime=(?=qd)iI}{MediaTime=(?=qd)iI}{MediaTime=(?=qd)iI}iiBBBBBBBBBBBBBBB{WeakPtrFactory<WebCore::MediaPlayerPrivateAVFoundationObjC>={Ref<WTF::WeakReference<WebCore::MediaPlayerPrivateAVFoundationObjC> >=^{WeakReference<WebCore::MediaPlayerPrivateAVFoundationObjC>}}}{RetainPtr<AVURLAsset>=^v}{RetainPtr<AVPlayer>=^v}{RetainPtr<AVPlayerItem>=^v}{RetainPtr<AVPlayerLayer>=^v}{unique_ptr<WebCore::VideoFullscreenLayerManager, std::__1::default_delete<WebCore::VideoFullscreenLayerManager> >={__compressed_pair<WebCore::VideoFullscreenLayerManager *, std::__1::default_delete<WebCore::VideoFullscreenLayerManager> >=^{VideoFullscreenLayerManager}}}i{RetainPtr<CALayer>=^v}{RetainPtr<WebCoreAVFMovieObserver>=^v}{RetainPtr<id>=^v}{String={RefPtr<WTF::StringImpl>=^{StringImpl}}}BB{RefPtr<WebCore::AudioSourceProviderAVFObjC>=^{AudioSourceProviderAVFObjC}}{RetainPtr<AVAssetImageGenerator>=^v}{RetainPtr<AVPlayerItemVideoOutput>=^v}{RetainPtr<WebCoreAVFPullDelegate>=^v}{RetainPtr<CGImage *>=^v}@{RetainPtr<AVPlayerItemVideoOutput>=^v}{unique_ptr<WebCore::TextureCacheCV, std::__1::default_delete<WebCore::TextureCacheCV> >={__compressed_pair<WebCore::TextureCacheCV *, std::__1::default_delete<WebCore::TextureCacheCV> >=^{TextureCacheCV}}}{unique_ptr<WebCore::VideoTextureCopierCV, std::__1::default_delete<WebCore::VideoTextureCopierCV> >={__compressed_pair<WebCore::VideoTextureCopierCV *, std::__1::default_delete<WebCore::VideoTextureCopierCV> >=^{VideoTextureCopierCV}}}{RetainPtr<__CVBuffer *>=^v}{unique_ptr<WebCore::PixelBufferConformerCV, std::__1::default_delete<WebCore::PixelBufferConformerCV> >={__compressed_pair<WebCore::PixelBufferConformerCV *, std::__1::default_delete<WebCore::PixelBufferConformerCV> >=^{PixelBufferConformerCV}}}{HashMap<WTF::RetainPtr<AVAssetResourceLoadingRequest>, WTF::RefPtr<WebCore::WebCoreAVFResourceLoader>, WTF::PtrHash<WTF::RetainPtr<AVAssetResourceLoadingRequest> >, WTF::HashTraits<WTF::RetainPtr<AVAssetResourceLoadingRequest> >, WTF::HashTraits<WTF::RefPtr<WebCore::WebCoreAVFResourceLoader> > >={HashTable<WTF::RetainPtr<AVAssetResourceLoadingRequest>, WTF::KeyValuePair<WTF::RetainPtr<AVAssetResourceLoadingRequest>, WTF::RefPtr<WebCore::WebCoreAVFResourceLoader> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::RetainPtr<AVAssetResourceLoadingRequest>, WTF::RefPtr<WebCore::WebCoreAVFResourceLoader> > >, WTF::PtrHash<WTF::RetainPtr<AVAssetResourceLoadingRequest> >, WTF::HashMap<WTF::RetainPtr<AVAssetResourceLoadingRequest>, WTF::RefPtr<WebCore::WebCoreAVFResourceLoader>, WTF::PtrHash<WTF::RetainPtr<AVAssetResourceLoadingRequest> >, WTF::HashTraits<WTF::RetainPtr<AVAssetResourceLoadingRequest> >, WTF::HashTraits<WTF::RefPtr<WebCore::WebCoreAVFResourceLoader> > >::KeyValuePairTraits, WTF::HashTraits<WTF::RetainPtr<AVAssetResourceLoadingRequest> > >=^{KeyValuePair<WTF::RetainPtr<AVAssetResourceLoadingRequest>, WTF::RefPtr<WebCore::WebCoreAVFResourceLoader> >}IIII}}{RetainPtr<WebCoreAVFLoaderDelegate>=^v}{HashMap<WTF::String, WTF::RetainPtr<AVAssetResourceLoadingRequest>, WTF::StringHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::RetainPtr<AVAssetResourceLoadingRequest> > >={HashTable<WTF::String, WTF::KeyValuePair<WTF::String, WTF::RetainPtr<AVAssetResourceLoadingRequest> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::String, WTF::RetainPtr<AVAssetResourceLoadingRequest> > >, WTF::StringHash, WTF::HashMap<WTF::String, WTF::RetainPtr<AVAssetResourceLoadingRequest>, WTF::StringHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::RetainPtr<AVAssetResourceLoadingRequest> > >::KeyValuePairTraits, WTF::HashTraits<WTF::String> >=^{KeyValuePair<WTF::String, WTF::RetainPtr<AVAssetResourceLoadingRequest> >}IIII}}{HashMap<WTF::String, WTF::RetainPtr<AVAssetResourceLoadingRequest>, WTF::StringHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::RetainPtr<AVAssetResourceLoadingRequest> > >={HashTable<WTF::String, WTF::KeyValuePair<WTF::String, WTF::RetainPtr<AVAssetResourceLoadingRequest> >, WTF::KeyValuePairKeyExtractor<WTF::KeyValuePair<WTF::String, WTF::RetainPtr<AVAssetResourceLoadingRequest> > >, WTF::StringHash, WTF::HashMap<WTF::String, WTF::RetainPtr<AVAssetResourceLoadingRequest>, WTF::StringHash, WTF::HashTraits<WTF::String>, WTF::HashTraits<WTF::RetainPtr<AVAssetResourceLoadingRequest> > >::KeyValuePairTraits, WTF::HashTraits<WTF::String> >=^{KeyValuePair<WTF::String, WTF::RetainPtr<AVAssetResourceLoadingRequest> >}IIII}}{RetainPtr<AVPlayerItemLegibleOutput>=^v}{Vector<WTF::RefPtr<WebCore::AudioTrackPrivateAVFObjC>, 0, WTF::CrashOnOverflow, 16>=^{RefPtr<WebCore::AudioTrackPrivateAVFObjC>}II}{Vector<WTF::RefPtr<WebCore::VideoTrackPrivateAVFObjC>, 0, WTF::CrashOnOverflow, 16>=^{RefPtr<WebCore::VideoTrackPrivateAVFObjC>}II}{RefPtr<WebCore::MediaSelectionGroupAVFObjC>=^{MediaSelectionGroupAVFObjC}}{RefPtr<WebCore::MediaSelectionGroupAVFObjC>=^{MediaSelectionGroupAVFObjC}}^{InbandTextTrackPrivateAVF}{RefPtr<WebCore::InbandMetadataTextTrackPrivateAVF>=^{InbandMetadataTextTrackPrivateAVF}}{RetainPtr<NSArray>=^v}{RetainPtr<NSArray>=^v}{RetainPtr<NSArray>=^v}{RetainPtr<NSArray>=^v}{FloatSize=ff}{MediaTime=(?=qd)iI}dqIiBBBBBBBBBBB}16, name: initWithCallback:

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
