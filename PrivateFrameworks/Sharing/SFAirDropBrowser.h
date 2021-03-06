//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary;
@protocol SFAirDropBrowserDelegate;

@interface SFAirDropBrowser : NSObject
{
    struct __SFBrowser *_browser;
    NSMutableDictionary *_nodes;
    NSArray *_people;
    id <SFAirDropBrowserDelegate> _delegate;
}

@property __weak id <SFAirDropBrowserDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) NSArray *people; // @synthesize people=_people;
- (void).cxx_destruct;
- (void)updateDiscoveredPeople;
- (void)handleBrowserCallBack;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)init;

@end

