//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PrototypeTools/_UISettingsKeyPathObserver-Protocol.h>

@class NSHashTable, NSPredicate, NSString, PTSRowAction, PTSSection, UIImage, _UISettings;

@interface PTSRow : NSObject <_UISettingsKeyPathObserver>
{
    NSHashTable *_observers;
    NSString *_valueKeyPath;
    NSString *_staticTitle;
    NSString *_titleKeyPath;
    UIImage *_staticImage;
    NSString *_imageKeyPath;
    NSPredicate *_condition;
    PTSRowAction *_action;
    CDUnknownBlockType _valueValidatator;
    CDUnknownBlockType _valueFormatter;
    PTSSection *_section;
    _UISettings *_groupChild;
    _UISettings *_settings;
    NSString *_groupKeyPath;
    long long _allowedEditingTypes;
}

+ (id)rowWithTitle:(id)arg1 valueKeyPath:(id)arg2;
+ (id)row;
@property(nonatomic) long long allowedEditingTypes; // @synthesize allowedEditingTypes=_allowedEditingTypes;
@property(retain, nonatomic) NSString *groupKeyPath; // @synthesize groupKeyPath=_groupKeyPath;
@property(retain, nonatomic) _UISettings *settings; // @synthesize settings=_settings;
@property(retain, nonatomic) _UISettings *groupChild; // @synthesize groupChild=_groupChild;
@property(nonatomic) __weak PTSSection *section; // @synthesize section=_section;
@property(copy, nonatomic) CDUnknownBlockType valueFormatter; // @synthesize valueFormatter=_valueFormatter;
@property(copy, nonatomic) CDUnknownBlockType valueValidatator; // @synthesize valueValidatator=_valueValidatator;
@property(copy, nonatomic) PTSRowAction *action; // @synthesize action=_action;
@property(copy, nonatomic) NSPredicate *condition; // @synthesize condition=_condition;
@property(copy, nonatomic) NSString *imageKeyPath; // @synthesize imageKeyPath=_imageKeyPath;
@property(retain, nonatomic) UIImage *staticImage; // @synthesize staticImage=_staticImage;
@property(copy, nonatomic) NSString *titleKeyPath; // @synthesize titleKeyPath=_titleKeyPath;
@property(copy, nonatomic) NSString *staticTitle; // @synthesize staticTitle=_staticTitle;
@property(copy, nonatomic) NSString *valueKeyPath; // @synthesize valueKeyPath=_valueKeyPath;
- (void).cxx_destruct;
- (_Bool)allowsShare;
- (_Bool)allowsDuplicate;
- (_Bool)allowsReorder;
- (_Bool)allowsDelete;
- (id)concreteCopyWithIndex:(unsigned long long)arg1;
- (void)resolveTemplatesWithIndex:(unsigned long long)arg1;
- (id)group;
- (void)_sendImageChanged;
- (void)_sendTitleChanged;
- (void)_sendValueChanged;
- (void)settings:(id)arg1 changedValueForKeyPath:(id)arg2;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
@property(retain, nonatomic) id value;
- (id)childSettingsForKeyPath:(id)arg1;
- (id)image;
- (id)title;
- (void)updateWithRow:(id)arg1;
- (id)allowedEditingTypes:(long long)arg1;
- (id)groupKeyPath:(id)arg1;
- (id)valueFormatter:(CDUnknownBlockType)arg1;
- (id)valueValidator:(CDUnknownBlockType)arg1;
- (id)action:(id)arg1;
- (id)conditionFormat:(id)arg1;
- (id)condition:(id)arg1;
- (id)imageKeyPath:(id)arg1;
- (id)staticImage:(id)arg1;
- (id)titleKeyPath:(id)arg1;
- (id)staticTitle:(id)arg1;
- (id)valueKeyPath:(id)arg1;
- (void)dealloc;
- (id)init;
- (Class)rowTableViewCellClass;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
