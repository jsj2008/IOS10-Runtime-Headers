//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreUI/CUIThemeRendition.h>

@class NSMutableSet, NSString;

__attribute__((visibility("hidden")))
@interface _CUIExternalLinkRendition : CUIThemeRendition
{
    NSString *_assetPackIdentifier;
    NSMutableSet *_externalTags;
}

- (id)externalTags;
- (id)assetPackIdentifier;
- (id)_initWithCSIHeader:(const struct _csiheader *)arg1;
- (void)dealloc;
- (id)initWithCSIData:(id)arg1 forKey:(const struct _renditionkeytoken *)arg2 artworkStatus:(long long)arg3;

@end
