//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <VideoSubscriberAccount/JSExport-Protocol.h>

@class NSArray, NSString;

@protocol VSAJSSAMLResponse <JSExport>
@property(copy, nonatomic) NSArray *userChannelList;
@property(copy, nonatomic) NSString *logout;
@property(copy, nonatomic) NSString *userMetadata;
@property(copy, nonatomic) NSString *authZ;
@property(copy, nonatomic) NSString *authN;
- (id)init;
@end

