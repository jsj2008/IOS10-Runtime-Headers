//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <WebKit/WKFormRotatingAccessoryPopover.h>

#import <WebKit/WKFormControl-Protocol.h>

@class WKContentView;

__attribute__((visibility("hidden")))
@interface WKSelectPopover : WKFormRotatingAccessoryPopover <WKFormControl>
{
    WKContentView *_view;
    struct RetainPtr<WKSelectTableViewController> _tableViewController;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_userActionDismissedPopover:(id)arg1;
- (void)controlEndEditing;
- (void)controlBeginEditing;
- (id)controlView;
- (void)dealloc;
- (id)initWithView:(id)arg1 hasGroups:(_Bool)arg2;

@end
