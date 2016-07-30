//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSIndexPath, NSMutableArray;
@protocol PXFaceCollection, PXPeopleSuggestionManagerDataSource, PXPeopleSuggestionManagerDelegate;

@interface PXPeopleSuggestionManager : NSObject
{
    _Bool _mute;
    unsigned int _confirmYesSoundID;
    unsigned int _confirmNoSoundID;
    id <PXPeopleSuggestionManagerDelegate> _delegate;
    id <PXPeopleSuggestionManagerDataSource> _dataSource;
    id <PXFaceCollection> _faceCollection;
    unsigned long long _userConfirmationsCount;
    unsigned long long _autoConfirmationsCount;
    NSMutableArray *_confirmedSuggestions;
    NSMutableArray *_rejectedSuggestions;
    NSMutableArray *_allSuggestions;
    NSIndexPath *_suggestionIndexPath;
}

@property(nonatomic) unsigned int confirmNoSoundID; // @synthesize confirmNoSoundID=_confirmNoSoundID;
@property(nonatomic) unsigned int confirmYesSoundID; // @synthesize confirmYesSoundID=_confirmYesSoundID;
@property(retain) NSIndexPath *suggestionIndexPath; // @synthesize suggestionIndexPath=_suggestionIndexPath;
@property(retain, nonatomic) NSMutableArray *allSuggestions; // @synthesize allSuggestions=_allSuggestions;
@property(retain, nonatomic) NSMutableArray *rejectedSuggestions; // @synthesize rejectedSuggestions=_rejectedSuggestions;
@property(retain, nonatomic) NSMutableArray *confirmedSuggestions; // @synthesize confirmedSuggestions=_confirmedSuggestions;
@property(nonatomic) unsigned long long autoConfirmationsCount; // @synthesize autoConfirmationsCount=_autoConfirmationsCount;
@property(nonatomic) unsigned long long userConfirmationsCount; // @synthesize userConfirmationsCount=_userConfirmationsCount;
@property(retain, nonatomic) id <PXFaceCollection> faceCollection; // @synthesize faceCollection=_faceCollection;
@property _Bool mute; // @synthesize mute=_mute;
@property(retain, nonatomic) id <PXPeopleSuggestionManagerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property __weak id <PXPeopleSuggestionManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (_Bool)_loadMoreSuggestions;
- (void)_playConfirmNoSound;
- (void)_playConfirmYesSound;
- (unsigned int)_soundIdWithFilename:(id)arg1;
- (void)commitUserResponses;
- (void)undo;
- (void)markCurrentSuggestionAsConfirmed:(_Bool)arg1;
- (void)preloadSounds;
@property(readonly) _Bool canUndo;
@property(readonly) id <PXFaceCollection> currentSuggestion;
- (void)dealloc;
- (id)init;
- (id)initWithFaceCollection:(id)arg1;

@end
