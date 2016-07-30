//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableSet, PDFDocument, PDFDocumentContentView, PageImagePool;
@protocol PDFPageVisibilityDelegate;

@interface PDFDocumentViewPrivate : NSObject
{
    PDFDocument *document;
    long long displayBox;
    struct CGSize documentViewSize;
    PDFDocumentContentView *contentView;
    NSMutableArray *pageViews;
    NSMutableSet *visiblePageViews;
    long long displayMode;
    unsigned long long firstVisiblePage;
    unsigned long long lastVisiblePage;
    PageImagePool *pageImagePool;
    id <PDFPageVisibilityDelegate> viewVisibilityDelegate;
}

- (void).cxx_destruct;

@end
