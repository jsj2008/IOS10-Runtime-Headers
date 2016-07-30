//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSMutableArray, WBUInjectedJavaScriptController;

@interface WBUWebClipMetadataFetcher : NSObject
{
    NSDictionary *_metaTags;
    NSArray *_linkTags;
    NSMutableArray *_metadataConsumers;
    _Bool _fetchingCompleted;
    WBUInjectedJavaScriptController *_jsController;
}

+ (id)metadataFetcherScriptSource;
- (void).cxx_destruct;
- (void)fetchMetadataWithConsumer:(CDUnknownBlockType)arg1;
- (id)_webClipLinkTagWithDictionary:(id)arg1;
- (void)_startFetchingMetadata;
- (id)initWithInjectedJavascriptController:(id)arg1;

@end
