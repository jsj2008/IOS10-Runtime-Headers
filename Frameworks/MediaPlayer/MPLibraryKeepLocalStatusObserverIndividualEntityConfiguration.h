//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaPlayer/MPLibraryKeepLocalStatusObserverConfiguration.h>

@interface MPLibraryKeepLocalStatusObserverIndividualEntityConfiguration : MPLibraryKeepLocalStatusObserverConfiguration
{
    _Bool _collectionType;
    _Bool _hasNonPurgeableAsset;
    _Bool _storeRedownloadable;
    long long _managedStatus;
}

@property(nonatomic, getter=isStoreRedownloadable) _Bool storeRedownloadable; // @synthesize storeRedownloadable=_storeRedownloadable;
@property(nonatomic) _Bool hasNonPurgeableAsset; // @synthesize hasNonPurgeableAsset=_hasNonPurgeableAsset;
@property(nonatomic) long long managedStatus; // @synthesize managedStatus=_managedStatus;
@property(nonatomic, getter=isCollectionType) _Bool collectionType; // @synthesize collectionType=_collectionType;

@end
