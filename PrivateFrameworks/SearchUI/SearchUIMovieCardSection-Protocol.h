//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SearchUI/SearchUICardSection-Protocol.h>

@class NSArray, NSString, UIImage;
@protocol SearchUIActionButtonItem;

@protocol SearchUIMovieCardSection <SearchUICardSection>
@property(readonly, copy, nonatomic) NSArray *buyButtonSections;
@property(readonly, copy, nonatomic) NSArray *detailSections;
@property(readonly, copy, nonatomic) NSString *rottenTomatoesText;
@property(readonly, nonatomic) UIImage *rottenTomatoesGlyph;
@property(readonly, nonatomic) UIImage *coverImage;

@optional
@property(readonly, nonatomic) id <SearchUIActionButtonItem> actionButton;
@end

