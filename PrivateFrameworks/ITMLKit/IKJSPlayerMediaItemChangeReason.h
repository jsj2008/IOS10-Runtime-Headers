//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ITMLKit/IKJSObject.h>

#import <ITMLKit/IKJSPlayerMediaItemChangeReason-Protocol.h>

@interface IKJSPlayerMediaItemChangeReason : IKJSObject <IKJSPlayerMediaItemChangeReason>
{
}

@property(readonly) long long USER_INITIATED;
@property(readonly) long long PLAYLIST_CHANGED;
@property(readonly) long long ERRORED;
@property(readonly) long long FORWARDED_TO_END;
@property(readonly) long long PLAYED_TO_END;
@property(readonly) long long UNKNOWN;
- (id)init;

@end
