//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <NotesShared/NSObject-Protocol.h>

@class NSAttributedString, NSDictionary, TTTextStorage;

@protocol TTTextStorageStyler <NSObject>
- (void)resetGuessedFontSizes;
- (void)guessFontSizeThresholdsForTTStylesInAttributedString:(NSAttributedString *)arg1;
- (NSDictionary *)styleForModelAttributes:(NSDictionary *)arg1;
- (NSDictionary *)modelForStyleAttributes:(NSDictionary *)arg1 filterAttributes:(_Bool)arg2;
- (void)styleText:(TTTextStorage *)arg1 inRange:(struct _NSRange)arg2 fixModelAttributes:(_Bool)arg3;
@end

