//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol PLSyncContext;

@interface PLCPLFacePushSupport : NSObject
{
    CDUnknownBlockType _lazyAdjustmentFingerprint;
    id <PLSyncContext> _syncContext;
}

+ (void)markPushedFaceMatchingRef:(id)arg1 inAsset:(id)arg2;
+ (void)applyFaceChangesFromAsset:(id)arg1 toAssetChange:(id)arg2 withLazyAdjustmentFingerprint:(CDUnknownBlockType)arg3 inPhotoLibrary:(id)arg4;
- (id)rejectedPersonIdentifiersForFace:(id)arg1;
- (_Bool)isRepresentativeFace:(id)arg1;
- (id)cplFaceRefFromFace:(id)arg1;
- (_Bool)isFaceSyncable:(id)arg1;
- (id)cplFaceRefsFromFace:(id)arg1;
- (id)_cplFaceRefsFromFaces:(id)arg1;
- (_Bool)_faceAnalysisWasPerformedOnLatestAdjustmentOfAsset:(id)arg1;
- (id)_facesAdjustmentsFingerprintFromAsset:(id)arg1;
- (long long)_faceAlgorithmVersionFromAsset:(id)arg1;
- (id)cplFaceAnalysisRefFromAsset:(id)arg1;
- (void)applyFaceChangesFromAsset:(id)arg1 toAssetChange:(id)arg2;
- (void)dealloc;
- (id)initWithLazyAdjustmentFingerprint:(CDUnknownBlockType)arg1 syncContext:(id)arg2;

@end

