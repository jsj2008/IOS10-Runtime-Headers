//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/NSCacheDelegate-Protocol.h>

@class NSMapTable, NSString, PXLRUMemoryCache;
@protocol OS_dispatch_queue;

@interface PXPeopleFaceTileImageManager : NSObject <NSCacheDelegate>
{
    NSObject<OS_dispatch_queue> *_fetchQueue;
    NSObject<OS_dispatch_queue> *_requestLookupIsolationQueue;
    NSMapTable *_faceTileRequestByRequestID;
    _Bool _concurrencyEnabled;
    PXLRUMemoryCache *_memoryCache;
}

+ (id)sharedManager;
+ (id)imageTransformQueue;
@property(readonly, nonatomic) PXLRUMemoryCache *memoryCache; // @synthesize memoryCache=_memoryCache;
@property(nonatomic, getter=isConcurrencyEnabled) _Bool concurrencyEnabled; // @synthesize concurrencyEnabled=_concurrencyEnabled;
- (void).cxx_destruct;
- (void)clearMemoryCache;
- (struct CGRect)_imageFaceRectForFace:(id)arg1;
- (void)cancelRequest:(int)arg1;
- (id)_fetchKeyFaceFromFaceCollection:(id)arg1 error:(id *)arg2;
- (id)_fetchKeyFaceFromPerson:(id)arg1 error:(id *)arg2;
- (id)_cachedResultForKey:(id)arg1;
- (_Bool)_deliverCachedResultIfPossibleForCacheKey:(id)arg1 allowDegradedDelivery:(_Bool)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)_cropImage:(id)arg1 isDegraded:(_Bool)arg2 forRequest:(id)arg3 completionBlock:(CDUnknownBlockType)arg4;
- (int)_requestFaceTileImageFromFace:(id)arg1 withTargetSize:(struct CGSize)arg2 cropFactor:(unsigned long long)arg3 round:(_Bool)arg4 cacheResult:(_Bool)arg5 cacheKey:(id)arg6 completionBlock:(CDUnknownBlockType)arg7;
- (void)requestFaceTileImageFromFace:(id)arg1 withTargetSize:(struct CGSize)arg2 cropFactor:(unsigned long long)arg3 round:(_Bool)arg4 cacheResult:(_Bool)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (void)requestFaceTileImageFromFace:(id)arg1 withTargetSize:(struct CGSize)arg2 cropFactor:(unsigned long long)arg3 round:(_Bool)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)requestFaceTileImageFromFaceCollection:(id)arg1 withTargetSize:(struct CGSize)arg2 cropFactor:(unsigned long long)arg3 round:(_Bool)arg4 cacheResult:(_Bool)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (void)requestFaceTileImageFromFaceCollection:(id)arg1 withTargetSize:(struct CGSize)arg2 cropFactor:(unsigned long long)arg3 round:(_Bool)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (void)requestFaceTileImageFromPerson:(id)arg1 withTargetSize:(struct CGSize)arg2 cropFactor:(unsigned long long)arg3 round:(_Bool)arg4 cacheResult:(_Bool)arg5 completionBlock:(CDUnknownBlockType)arg6;
- (void)requestFaceTileImageFromPerson:(id)arg1 withTargetSize:(struct CGSize)arg2 cropFactor:(unsigned long long)arg3 round:(_Bool)arg4 completionBlock:(CDUnknownBlockType)arg5;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
