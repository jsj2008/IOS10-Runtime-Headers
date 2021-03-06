//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>
#import <iWorkImport/NSMutableCopying-Protocol.h>
#import <iWorkImport/TSCHCustomFormatSupport-Protocol.h>
#import <iWorkImport/TSCHDataFormatter-Protocol.h>
#import <iWorkImport/TSCHDataFormatterPersistableStyleObject-Protocol.h>
#import <iWorkImport/TSCHDataFormatterSupportedClientFormatObject-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TSUFormatObject : NSObject <TSCHDataFormatter, TSCHDataFormatterPersistableStyleObject, TSCHDataFormatterSupportedClientFormatObject, TSCHCustomFormatSupport, NSCopying, NSMutableCopying>
{
    CDStruct_28403e59 mFormatStruct;
    _Bool mUseExpandedContents;
}

+ (id)defaultDurationFormat;
+ (id)defaultDateFormat:(id)arg1;
+ (id)instanceWithArchive:(const struct FormatStructArchive *)arg1 unarchiver:(id)arg2;
@property(readonly, nonatomic) _Bool useExpandedContents; // @synthesize useExpandedContents=mUseExpandedContents;
- (_Bool)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (void)p_setFormatStruct:(CDStruct_28403e59)arg1;
@property(readonly, nonatomic) CDStruct_28403e59 formatStruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithTSUFormatFormatStruct:(CDStruct_28403e59)arg1;
- (id)initWithTSUFormatFormatStruct:(CDStruct_28403e59)arg1 useExpandedContents:(_Bool)arg2;
- (id)init;
- (id)initWithArchive:(const struct FormatStructArchive *)arg1 unarchiver:(id)arg2;
- (void)saveToArchive:(struct FormatStructArchive *)arg1 archiver:(id)arg2;
- (long long)numberOfDecimalPlaces;
- (int)formatType;
- (id)convertToSupportedClientFormatObjectWithLocale:(id)arg1;
- (id)convertToPersistableStyleObject;
- (_Bool)isCompatibleWithDataFormatter:(id)arg1;
- (id)chartFormattedInspectorStringForValue:(id)arg1 locale:(id)arg2;
- (id)chartFormattedStringForValue:(id)arg1 locale:(id)arg2;
- (id)dataFormatterForDocumentRoot:(id)arg1;
- (id)customFormatListKey;
- (_Bool)isCustom;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

