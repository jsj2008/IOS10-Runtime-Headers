//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MessageUI/NSObject-Protocol.h>

@class MFAttachmentPlaceholder, NSString, NSURL;

@protocol MFMessageRewriterPlaceholderResolver <NSObject>
- (id)contentForPlaceholder:(MFAttachmentPlaceholder *)arg1;
- (id)contentForContentID:(NSString *)arg1;
- (id)contentForURL:(NSURL *)arg1;
@end
