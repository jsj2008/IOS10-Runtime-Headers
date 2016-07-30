//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class HDClient, HDProfile, NSMutableArray, NSUUID;
@protocol OS_dispatch_queue;

@interface HDAuthorizationServer : NSObject
{
    int _invalidated;
    HDClient *_client;
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableArray *_authorizationRequestIdentifiers;
    NSUUID *_transactionSessionIdentifier;
}

@property(nonatomic) int invalidated; // @synthesize invalidated=_invalidated;
@property(retain, nonatomic) NSUUID *transactionSessionIdentifier; // @synthesize transactionSessionIdentifier=_transactionSessionIdentifier;
@property(retain, nonatomic) NSMutableArray *authorizationRequestIdentifiers; // @synthesize authorizationRequestIdentifiers=_authorizationRequestIdentifiers;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(nonatomic) __weak HDProfile *profile; // @synthesize profile=_profile;
@property(readonly) HDClient *client; // @synthesize client=_client;
- (void).cxx_destruct;
- (void)_invalidate;
- (void)_queue_enqueueAuthorizationRequestForBundleIdentifier:(id)arg1 writeTypes:(id)arg2 readTypes:(id)arg3 authorizationNeededHandler:(CDUnknownBlockType)arg4 requestCompletionHandler:(CDUnknownBlockType)arg5;
- (id)_authorizationStatusForTypes:(id)arg1 error:(id *)arg2;
- (void)_performIfAuthorizedForTypes:(id)arg1 sharing:(_Bool)arg2 onQueue:(id)arg3 usingBlock:(CDUnknownBlockType)arg4 errorHandler:(CDUnknownBlockType)arg5;
- (_Bool)_shouldBypassAuthorization;
- (void)handleObjectAuthorizationRequestsWithPromptHandler:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)enqueueObjectAuthorizationRequestForSamples:(id)arg1 promptIfNeeded:(_Bool)arg2 authorizationNeededHandler:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)handleAuthorizationRequestsForBundleIdentifier:(id)arg1 promptHandler:(CDUnknownBlockType)arg2 requestCompletionHandler:(CDUnknownBlockType)arg3;
- (void)handleAuthorizationRequestsWithPromptHandler:(CDUnknownBlockType)arg1 requestCompletionHandler:(CDUnknownBlockType)arg2;
- (void)enqueueAuthorizationRequestToWriteTypes:(id)arg1 readTypes:(id)arg2 authorizationNeededHandler:(CDUnknownBlockType)arg3 requestCompletionHandler:(CDUnknownBlockType)arg4;
- (id)authorizationStatusForType:(id)arg1 error:(id *)arg2;
- (id)filterSamplesForReadAuthorization:(id)arg1;
- (id)clientSourceIdentifierWithError:(id *)arg1;
- (id)readAuthorizationWithTypes:(id)arg1 error:(id *)arg2;
- (_Bool)isAuthorizedToReadType:(id)arg1 withRestrictedSourceIdentifier:(id *)arg2 authorizationAnchor:(id *)arg3;
- (_Bool)isAuthorizationStatusDeterminedForTypes:(id)arg1 error:(id *)arg2;
- (void)performIfAuthorizedToDeleteObjectsWithTypes:(id)arg1 onQueue:(id)arg2 usingBlock:(CDUnknownBlockType)arg3 errorHandler:(CDUnknownBlockType)arg4;
- (void)performIfAuthorizedToSaveObjectsWithTypes:(id)arg1 onQueue:(id)arg2 usingBlock:(CDUnknownBlockType)arg3 errorHandler:(CDUnknownBlockType)arg4;
- (void)performIfAuthorizedToReadTypes:(id)arg1 onQueue:(id)arg2 usingBlock:(CDUnknownBlockType)arg3 errorHandler:(CDUnknownBlockType)arg4;
- (void)invalidate;
- (id)initWithClient:(id)arg1 profile:(id)arg2 queue:(id)arg3;
- (void)updateDefaultAuthorizationStatusesWithCompletion:(CDUnknownBlockType)arg1;
- (_Bool)resetAuthorizationStatusForBundleIdentifier:(id)arg1 error:(id *)arg2;
- (_Bool)resetAuthorizationStatusesForObjects:(id)arg1 error:(id *)arg2;
- (void)endAuthorizationRequestDelegateTransactionWithSessionIdentifier:(id)arg1 error:(id)arg2;
- (void)_queue_beginAuthorizationRequestDelegateTransactionWithSessionIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)beginAuthorizationRequestDelegateTransactionWithSessionIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)beginAuthorizationRequestDelegateTransactionWithRequestRecord:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)requestAuthorizationForBundleIdentifier:(id)arg1 writeTypes:(id)arg2 readTypes:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_setAuthorizationStatusesEntitled:(id)arg1 forBundleIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setAuthorizationStatuses:(id)arg1 forBundleIdentifier:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)allObjectAuthorizationsForSampleWithUUID:(id)arg1 error:(id *)arg2;
- (id)allDocumentAuthorizationRecordsForType:(id)arg1 bundleIdentifier:(id)arg2 error:(id *)arg3;
- (id)allAuthorizationRecordsForType:(id)arg1 error:(id *)arg2;
- (id)allAuthorizationRecordsForBundleIdentifier:(id)arg1 error:(id *)arg2;

@end
