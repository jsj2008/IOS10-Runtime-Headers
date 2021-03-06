//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MediaServices/MSVOperation.h>

@class MPMediaLibraryView, NSArray;

@interface MPStoreLibraryMappingRequestOperation : MSVOperation
{
    _Bool _wantsLibraryAddedStatus;
    MPMediaLibraryView *_libraryView;
    Class _modelClass;
    NSArray *_identifierSets;
    CDUnknownBlockType _responseHandler;
}

+ (_Bool)supportsModelClass:(Class)arg1;
@property(copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property(copy, nonatomic) NSArray *identifierSets; // @synthesize identifierSets=_identifierSets;
@property(nonatomic) _Bool wantsLibraryAddedStatus; // @synthesize wantsLibraryAddedStatus=_wantsLibraryAddedStatus;
@property(nonatomic) Class modelClass; // @synthesize modelClass=_modelClass;
@property(retain, nonatomic) MPMediaLibraryView *libraryView; // @synthesize libraryView=_libraryView;
- (void).cxx_destruct;
- (void)execute;

@end

