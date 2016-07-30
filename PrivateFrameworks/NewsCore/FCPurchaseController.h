//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCUserInfoObserving-Protocol.h>
#import <NewsCore/NSURLSessionDelegate-Protocol.h>

@class FCCloudContext, FCKeyValueStore, NSArray, NSDate, NSMutableDictionary, NSMutableSet, NSSet, NSString, NSURLSession;
@protocol OS_dispatch_queue;

@interface FCPurchaseController : NSObject <FCUserInfoObserving, NSURLSessionDelegate>
{
    NSArray *_purchasesDiscoveredTagIDs;
    NSMutableDictionary *_purchaseLookUpEntriesByTagID;
    NSMutableDictionary *_webAccessEntriesByTagID;
    NSMutableDictionary *_ongoingPurchaseEntriesByProductID;
    NSMutableDictionary *_paymenQueueByProductID;
    FCCloudContext *_cloudContext;
    NSURLSession *_session;
    FCKeyValueStore *_localStore;
    NSMutableSet *_channelsPurchasedFromNews;
    NSDate *_lastEntitlementCheckTime;
    NSObject<OS_dispatch_queue> *_readWriteQueue;
}

+ (_Bool)isLocalStoreKeyInternal:(id)arg1;
+ (id)internalLocalStoreKeys;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *readWriteQueue; // @synthesize readWriteQueue=_readWriteQueue;
@property(copy, nonatomic) NSDate *lastEntitlementCheckTime; // @synthesize lastEntitlementCheckTime=_lastEntitlementCheckTime;
@property(retain, nonatomic) NSMutableSet *channelsPurchasedFromNews; // @synthesize channelsPurchasedFromNews=_channelsPurchasedFromNews;
@property(retain, nonatomic) FCKeyValueStore *localStore; // @synthesize localStore=_localStore;
@property(retain, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property(retain, nonatomic) FCCloudContext *cloudContext; // @synthesize cloudContext=_cloudContext;
@property(retain, nonatomic) NSMutableDictionary *paymenQueueByProductID; // @synthesize paymenQueueByProductID=_paymenQueueByProductID;
@property(retain, nonatomic) NSMutableDictionary *ongoingPurchaseEntriesByProductID; // @synthesize ongoingPurchaseEntriesByProductID=_ongoingPurchaseEntriesByProductID;
@property(retain, nonatomic) NSMutableDictionary *webAccessEntriesByTagID; // @synthesize webAccessEntriesByTagID=_webAccessEntriesByTagID;
@property(retain, nonatomic) NSMutableDictionary *purchaseLookUpEntriesByTagID; // @synthesize purchaseLookUpEntriesByTagID=_purchaseLookUpEntriesByTagID;
@property(retain, nonatomic) NSArray *purchasesDiscoveredTagIDs; // @synthesize purchasesDiscoveredTagIDs=_purchasesDiscoveredTagIDs;
- (void).cxx_destruct;
- (void)submitWebAcessWithTagID:(id)arg1 emailAddress:(id)arg2 purchaseReceipt:(id)arg3 serialCompletion:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (void)handleWebAcccessFailureWithTagID:(id)arg1 email:(id)arg2 purchaseReceipt:(id)arg3;
- (void)handleWebAccessSuccessWithTagID:(id)arg1;
- (void)addToWebAccessEntryListWithEntry:(id)arg1;
- (id)webAccessEntryForTagID:(id)arg1;
- (id)_webAccessEntryIDForTagID:(id)arg1;
- (void)performHTTPRequestForVerifyAccessTokenWithURL:(id)arg1 accessToken:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)verifyAccessTokenWithTagID:(id)arg1 accessToken:(id)arg2 serialCompletion:(CDUnknownBlockType)arg3 callbackQueue:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)handleAccessTokenVerificationFailureWithTagID:(id)arg1;
- (void)handleAccessTokenVerificationSuccessWithTagID:(id)arg1 subscribed:(_Bool)arg2;
- (void)handleAccessTokenChangeWithTagID:(id)arg1 addToPurchasedDiscoverdList:(_Bool)arg2;
- (void)userInfo:(id)arg1 didChangeAccessTokenForTagID:(id)arg2;
- (void)userInfo:(id)arg1 didAddAccessTokenForTagID:(id)arg2;
- (void)removeWebPurchaseForTagID:(id)arg1;
- (void)removeFromAppStorePurchasesDiscoveredList:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)updatePurchaseEntryToExpired:(id)arg1;
- (void)removeFromPurchasedChannelsListWithTagIDs:(id)arg1;
- (void)addToPurchasedChannelsListWithEntry:(id)arg1;
- (_Bool)atleastOneValidAppStorePurchase;
- (_Bool)isTagPurchased:(id)arg1;
- (_Bool)isTagIDPurchased:(id)arg1;
- (id)allAppStorePurchasedTagIDs;
- (id)_allPurchasedTagIDs;
@property(readonly, nonatomic) NSSet *allPurchasedTagIDs;
- (id)purchaseLookUpEntryForTagID:(id)arg1;
- (id)_purchaseLookUpEntryIDForTagID:(id)arg1;
- (void)fetchChannelIDsForPurchaseIDs:(id)arg1 callbackQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)fetchOperationForPurchaseLookupWithPurchaseIDs:(id)arg1;
- (void)addAppStoreDiscoveredChannelsToFavorites:(id)arg1;
- (void)feldsparEntitlementCheckWithCallbackQueue:(id)arg1 ignoreCache:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)checkIntegrityOfPurchaseWithID:(id)arg1 callbackQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)expiredPurchaseChannelIDs;
- (id)_ongoingPurchaseEntryIDForProductIdentifier:(id)arg1;
- (void)finishPurchaseTransactionWithProductID:(id)arg1;
- (void)startPurchaseWithTagID:(id)arg1 productIdentifier:(id)arg2 purchaseID:(id)arg3 appAdamID:(id)arg4 storeExternalVersion:(id)arg5 webAccessOptIn:(_Bool)arg6 payment:(id)arg7 completion:(CDUnknownBlockType)arg8;
- (id)createPaymentQueueWithProductIdentifier:(id)arg1 tagID:(id)arg2 purchaseID:(id)arg3 webAccessOptIn:(_Bool)arg4 appAdamID:(id)arg5 storeExternalVersion:(id)arg6;
- (_Bool)isPurchaseOngoingForTagID:(id)arg1;
- (_Bool)isPaidSubscriberFromWeb;
- (_Bool)isPaidSubscriberFromAppStore;
- (_Bool)isPaidSubscriberFromNews;
- (_Bool)isPaidSubscriber;
- (void)addPurchaseWithTagID:(id)arg1 purchaseID:(id)arg2 purchaseType:(unsigned long long)arg3;
- (void)clearAllPurchases;
- (void)addAppStorePurchaseWithTagID:(id)arg1 purchaseID:(id)arg2;
@property(readonly, nonatomic) NSString *lastSignedInItunesAccountName;
- (void)clearAllAppStorePurchases;
@property(nonatomic) _Bool showniTunesSignedOutAlert;
- (void)shouldShowiTunesSignedOutAlertWithCompletion:(CDUnknownBlockType)arg1;
- (void)shouldShowSignedInWithDifferentiTunesAccountAlertWithCompletion:(CDUnknownBlockType)arg1;
- (void)notifyPurchaseListChanged;
- (void)saveToDisk;
- (void)loadLocalCachesFromStore;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_initializeAppStorePurchaseDiscoveredList;
- (void)dealloc;
- (id)initWithCloudContext:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
