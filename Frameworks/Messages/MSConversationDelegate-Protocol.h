//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Messages/NSObject-Protocol.h>

@class MSConversation, MSMessage;

@protocol MSConversationDelegate <NSObject>

@optional
- (void)_conversation:(MSConversation *)arg1 didSelectMessage:(MSMessage *)arg2;
- (void)_conversation:(MSConversation *)arg1 willSelectMessage:(MSMessage *)arg2;
@end

