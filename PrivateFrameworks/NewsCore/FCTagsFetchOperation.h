//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NewsCore/FCMultiStepFetchOperation.h>

@class FCAssetManager, FCHeldRecords, FCTagRecordSource, NSArray, NSString;
@protocol FCTagsFetchOperationDelegate;

@interface FCTagsFetchOperation : FCMultiStepFetchOperation
{
    _Bool _includeChildren;
    NSArray *_tagIDs;
    NSString *_contentStoreFrontID;
    FCHeldRecords *_heldTagRecords;
    FCHeldRecords *_heldChildTagRecords;
    FCTagRecordSource *_tagRecordSource;
    FCAssetManager *_assetManager;
    id <FCTagsFetchOperationDelegate> _delegate;
}

@property(nonatomic) __weak id <FCTagsFetchOperationDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) FCAssetManager *assetManager; // @synthesize assetManager=_assetManager;
@property(retain, nonatomic) FCTagRecordSource *tagRecordSource; // @synthesize tagRecordSource=_tagRecordSource;
@property(retain, nonatomic) FCHeldRecords *heldChildTagRecords; // @synthesize heldChildTagRecords=_heldChildTagRecords;
@property(retain, nonatomic) FCHeldRecords *heldTagRecords; // @synthesize heldTagRecords=_heldTagRecords;
@property(copy, nonatomic) NSString *contentStoreFrontID; // @synthesize contentStoreFrontID=_contentStoreFrontID;
@property(copy, nonatomic) NSArray *tagIDs; // @synthesize tagIDs=_tagIDs;
@property(nonatomic) _Bool includeChildren; // @synthesize includeChildren=_includeChildren;
- (void).cxx_destruct;
- (id)completeFetchOperation;
- (id)fetchChildTagRecordsWithCompletion:(CDUnknownBlockType)arg1;
- (id)fetchTagRecordsWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithTagIDs:(id)arg1 contentStoreFrontID:(id)arg2 tagRecordSource:(id)arg3 assetManager:(id)arg4 delegate:(id)arg5;

@end
