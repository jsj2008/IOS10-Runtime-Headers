//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CloudPhotoLibrary/CPLChangeSession.h>

#import <CloudPhotoLibrary/CPLAbstractObject-Protocol.h>

@class CPLPlatformObject, NSString;

@interface CPLPushChangeSession : CPLChangeSession <CPLAbstractObject>
{
}

- (void)commitChangeBatch:(id)arg1 withUnderlyingCompletionHandler:(CDUnknownBlockType)arg2;
- (void)commitChangeBatch:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)_sessionLogDomain;
- (id)initWithLibraryManager:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) CPLPlatformObject *platformObject;
@property(readonly) Class superclass;

@end
