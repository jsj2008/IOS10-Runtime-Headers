//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <FrontBoardUIServices/FBUISceneConduit-Protocol.h>

@class FBSSceneParameters, FBUISceneIdentity;
@protocol FBUISceneUpdater;

@protocol FBUISceneSurrogate <FBUISceneConduit>
- (void)registerSceneUpdater:(id <FBUISceneUpdater>)arg1;
- (FBSSceneParameters *)configureWithSceneIdentity:(FBUISceneIdentity *)arg1;
@end
