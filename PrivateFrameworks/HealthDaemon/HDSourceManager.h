//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HDDatabaseValueCache, HDProfile;
@protocol OS_dispatch_queue;

@interface HDSourceManager : NSObject
{
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    HDDatabaseValueCache *_sourceEntityCache;
    HDDatabaseValueCache *_clientSourceCache;
    HDDatabaseValueCache *_sourcesForTypeCache;
}

+ (_Bool)_isLocalDeviceBundleIdentifier:(id)arg1;
+ (id)_applicationNameForBundleIdentifier:(id)arg1;
- (void).cxx_destruct;
- (CDUnknownBlockType)_setNameModifyBlockWithName:(id)arg1;
- (id)_loadAllSourceIDsForType:(id)arg1 error:(id *)arg2;
- (id)_authorizedSourcesForType:(id)arg1 error:(id *)arg2;
- (id)_getNameForBundleIdentifier:(id)arg1 isCurrentDevice:(_Bool)arg2;
- (id)_createSourceEntityForBundleIdentifier:(id)arg1 name:(id)arg2 options:(unsigned long long)arg3 isCurrentDevice:(_Bool)arg4 productType:(id)arg5 error:(id *)arg6;
- (id)_createSourceEntityForExternalHealthDeviceWithIdentifier:(id)arg1 name:(id)arg2 productType:(id)arg3 error:(id *)arg4;
- (id)_createSourceEntityForClientWithBundleIdentifier:(id)arg1 name:(id)arg2 entitlements:(id)arg3 error:(id *)arg4;
- (id)_createSourceEntityForLocalDeviceWithError:(id *)arg1;
- (id)_fetchClientSourceForPersistentID:(id)arg1 error:(id *)arg2;
- (void)removeOrderedSource:(id)arg1 forType:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addOrderedSource:(id)arg1 forType:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_defaultSourceOrdering:(id)arg1;
- (id)_sourceCacheItemFromUnorderedIDs:(id)arg1;
- (id)_sourceCacheItemFromOrderedIDs:(id)arg1 userOrdered:(_Bool)arg2;
- (id)_sourceCacheItemForObjectType:(id)arg1 error:(id *)arg2;
- (void)_updateOrderedSources:(id)arg1 sourceIDs:(id)arg2 forObjectType:(id)arg3 userOrdered:(_Bool)arg4 completion:(CDUnknownBlockType)arg5;
- (void)updateOrderedSources:(id)arg1 forObjectType:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)orderedSourceIDsForObjectType:(id)arg1 userOrdered:(_Bool *)arg2 error:(id *)arg3;
- (id)orderedSourcesForObjectType:(id)arg1 error:(id *)arg2;
- (_Bool)createSourceOrdersWithCodables:(id)arg1 syncStore:(id)arg2 error:(id *)arg3;
- (void)_addToSourceCache:(id)arg1;
- (id)allWatchSourcesByIDWithError:(id *)arg1;
- (id)allSourcesByIDWithError:(id *)arg1;
- (id)clientSourceForUUID:(id)arg1 error:(id *)arg2;
- (id)clientSourceForSourceEntity:(id)arg1 error:(id *)arg2;
- (id)clientSourceForPersistentID:(id)arg1 error:(id *)arg2;
- (id)clientSourceForBundleIdentifier:(id)arg1 error:(id *)arg2;
- (_Bool)updateCurrentDeviceNameInDatabase:(id)arg1 error:(id *)arg2;
- (void)deleteSourceWithBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)_deleteSourceWithEntity:(id)arg1 bundleIdentifier:(id)arg2 error:(id *)arg3;
- (id)_sourceForBundleIdentifier:(id)arg1 createSourceBlock:(CDUnknownBlockType)arg2 modifySourceBlock:(CDUnknownBlockType)arg3 error:(id *)arg4;
- (id)sourceForCodableSource:(id)arg1 provenance:(long long)arg2 createIfNecessary:(_Bool)arg3 error:(id *)arg4;
- (_Bool)createSourcesWithCodables:(id)arg1 provenance:(long long)arg2 error:(id *)arg3;
- (id)sourceForAppleDeviceWithUUID:(id)arg1 identifier:(id)arg2 name:(id)arg3 productType:(id)arg4 createIfNecessary:(_Bool)arg5 error:(id *)arg6;
- (id)sourceForExternalHealthDeviceWithIdentifier:(id)arg1 name:(id)arg2 productType:(id)arg3 createIfNecessary:(_Bool)arg4 error:(id *)arg5;
- (id)sourceForApplicationIdentifier:(id)arg1 entitlements:(id)arg2 name:(id)arg3 createIfNecessary:(_Bool)arg4 error:(id *)arg5;
- (id)sourceForClient:(id)arg1 createIfNecessary:(_Bool)arg2 error:(id *)arg3;
- (id)healthAppSourceWithError:(id *)arg1;
- (_Bool)setLocalDeviceSourceUUID:(id)arg1 bundleIdentifier:(id)arg2 error:(id *)arg3;
- (id)localDeviceSourceWithError:(id *)arg1;
- (id)setSourceName:(id)arg1 forBundleIdentifier:(id)arg2 error:(id *)arg3;
- (id)sourceForBundleIdentifier:(id)arg1 error:(id *)arg2;
- (id)init;
- (id)initWithProfile:(id)arg1;

@end
