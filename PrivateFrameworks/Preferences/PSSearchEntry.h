//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, NSMutableSet, NSString, NSURL, PSSpecifier, PSSpecifierAction;

@interface PSSearchEntry : NSObject
{
    PSSpecifier *_specifier;
    NSString *_name;
    NSURL *_url;
    _Bool _isRootURL;
    NSString *_identifier;
    NSString *_sectionIdentifier;
    _Bool _isSection;
    _Bool _hasDetailController;
    _Bool _hasListController;
    NSArray *_additionalDetailTextComponents;
    PSSearchEntry *_parentEntry;
    NSMutableSet *_childEntries;
    NSString *_groupName;
    NSString *_plistName;
    NSString *_bundleName;
    NSString *_manifestBundleName;
    NSMutableArray *_keywords;
    PSSpecifierAction *_action;
    PSSpecifier *_groupSpecifier;
}

+ (id)schemeNameOverride;
+ (void)setSchemeNameOverride:(id)arg1;
@property(retain, nonatomic) PSSpecifier *groupSpecifier; // @synthesize groupSpecifier=_groupSpecifier;
@property(readonly, nonatomic) PSSpecifier *specifier; // @synthesize specifier=_specifier;
@property(retain, nonatomic) PSSpecifierAction *action; // @synthesize action=_action;
@property(readonly, nonatomic) NSMutableArray *keywords; // @synthesize keywords=_keywords;
@property(copy, nonatomic) NSString *manifestBundleName; // @synthesize manifestBundleName=_manifestBundleName;
@property(copy, nonatomic) NSString *bundleName; // @synthesize bundleName=_bundleName;
@property(copy, nonatomic) NSString *plistName; // @synthesize plistName=_plistName;
@property(copy, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
@property(readonly, nonatomic) _Bool isRootURL; // @synthesize isRootURL=_isRootURL;
@property(readonly, copy, nonatomic) NSString *sectionIdentifier; // @synthesize sectionIdentifier=_sectionIdentifier;
@property(readonly, nonatomic) NSMutableSet *childEntries; // @synthesize childEntries=_childEntries;
@property(nonatomic) __weak PSSearchEntry *parentEntry; // @synthesize parentEntry=_parentEntry;
- (void).cxx_destruct;
- (id)hierarchyDescription;
- (id)debugDescription;
- (id)recursiveDescriptionForLevel:(unsigned long long)arg1;
- (id)recursiveDescription;
- (id)description;
- (id)detailTextWithEffectiveTitle:(id *)arg1;
- (id)_prefsURLIsRoot:(_Bool *)arg1;
- (_Bool)isRootUrl;
@property(readonly, copy, nonatomic) NSURL *url;
- (id)ancestorEntries;
- (id)rootEntry;
- (id)sectionEntry;
- (_Bool)hasListController;
- (_Bool)hasDetailController;
- (_Bool)_specifier:(id)arg1 hasDetailController:(_Bool)arg2;
- (_Bool)isSectionEntry;
- (_Bool)isRootEntry;
@property(readonly, copy, nonatomic) NSString *identifier;
@property(readonly, copy, nonatomic) NSString *name;
- (_Bool)finishIndexing;
- (_Bool)hasFinishedIndexing;
- (id)initWithSpecifier:(id)arg1 parent:(id)arg2;

@end

