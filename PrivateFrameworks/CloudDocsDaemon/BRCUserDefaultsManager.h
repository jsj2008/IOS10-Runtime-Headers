//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudDocsDaemon/NSURLSessionDownloadDelegate-Protocol.h>

@class NSDictionary, NSMutableDictionary, NSOperationQueue, NSString, NSURL, NSURLSession;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BRCUserDefaultsManager : NSObject <NSURLSessionDownloadDelegate>
{
    NSURL *_serverConfigurationURL;
    NSDictionary *_serverConfigurationDict;
    NSMutableDictionary *_userDefaultsCache;
    CDUnknownBlockType _configurationPlistDidUpdateBlock;
    NSOperationQueue *_downloadQueue;
    NSURLSession *_urlSession;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_callbackQueue;
}

- (void).cxx_destruct;
- (void)_saveServerConfigurationDictionaryToDB:(id)arg1;
- (void)_loadCachedServerConfigurationDictionaryFromDB:(id)arg1;
- (void)reset;
- (void)_reset;
- (void)_loadServerConfigurationDictionary;
- (void)_parsePlistWithURL:(id)arg1;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)setServerConfigurationURL:(id)arg1 whenLoaded:(CDUnknownBlockType)arg2;
- (void)_setServerConfigurationURL:(id)arg1 whenLoaded:(CDUnknownBlockType)arg2;
- (id)defaultsForAppLibraryName:(id)arg1;
- (id)defaultsForAppLibraryIdentifier:(id)arg1;
- (id)init;
- (void)_prepopulateGlobalUserDefaults;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
