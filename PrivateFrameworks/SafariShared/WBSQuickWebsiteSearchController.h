//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SafariShared/WBSQuickWebsiteSearchProviderDelegate-Protocol.h>

@class NSArray, NSMutableDictionary, NSString, NSURL;
@protocol OS_dispatch_queue;

@interface WBSQuickWebsiteSearchController : NSObject <WBSQuickWebsiteSearchProviderDelegate>
{
    NSURL *_searchDescriptionsURL;
    _Bool _hasBegunLoadingFromDisk;
    NSObject<OS_dispatch_queue> *_quickWebsiteSearchProvidersBySourcePageURLStringAccessQueue;
    NSMutableDictionary *_quickWebsiteSearchProvidersByHost;
    NSMutableDictionary *_openSearchDescriptionsByDescriptionDocumentURLString;
    NSMutableDictionary *_hostSetsByOpenSearchDescriptionDocumentURLString;
    struct unique_ptr<SafariShared::CoalescedAsynchronousWriter, std::__1::default_delete<SafariShared::CoalescedAsynchronousWriter>> _writer;
    _Bool _quickWebsiteSearchProvidersLoadedFromDisk;
}

+ (id)sharedController;
@property _Bool quickWebsiteSearchProvidersLoadedFromDisk; // @synthesize quickWebsiteSearchProvidersLoadedFromDisk=_quickWebsiteSearchProvidersLoadedFromDisk;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_resetCachedDataWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_didCollectOpenSearchDescription:(id)arg1;
- (void)_didFinishLoadingFromDisk;
- (void)_loadFromDisk;
- (id)_dictionaryRepresentation;
- (void)_saveToDiskSoon;
- (void)_pruneUnusedQuickWebsiteSearchProviders;
- (_Bool)_shouldRemoveQuickWebsiteSearchProvider:(id)arg1;
- (void)_removeHost:(id)arg1 fromOpenSearchDescriptionWithDocumentURL:(id)arg2;
- (void)_addHost:(id)arg1 toOpenSearchDescriptionWithDocumentURL:(id)arg2;
- (_Bool)_quickWebsiteSearchProviderHasSearchURLTemplateStringOnAccessQueue:(id)arg1;
- (id)quickWebsiteSearchProvider:(id)arg1 openSearchDescriptionForOpenSearchDescriptionURLString:(id)arg2;
- (void)removeProviderWithHost:(id)arg1;
- (void)removeProvidersWithHosts:(id)arg1;
- (id)openSearchDescriptionForOpenSearchDescriptionURLString:(id)arg1;
- (id)providerForSourcePageURLString:(id)arg1;
- (void)setOpenSearchDescriptionURLString:(id)arg1 forSourcePageURLString:(id)arg2;
- (void)setSearchURLTemplateFromForm:(id)arg1 forSourcePageURLString:(id)arg2;
- (void)didPerformSearchWithProvider:(id)arg1;
- (id)providersMatchingQueryString:(id)arg1;
@property(readonly, nonatomic) NSArray *quickWebsiteSearchHosts;
- (void)_sendNotification:(id)arg1 forQuickWebsiteSearchProvider:(id)arg2;
- (void)removeProvidersAddedAfterDate:(id)arg1 beforeDate:(id)arg2;
- (void)clear;
- (void)savePendingChangesBeforeTermination;
- (void)noteProvidersAreStale;
- (void)beginLoadingFromDiskIfNeeded;
- (id)_initWithSearchDescriptionsURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
