//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <QuartzCore/CALayer.h>

#import <PDFKit/PDFTileDelegate-Protocol.h>
#import <PDFKit/RequestDisplayListDelegate-Protocol.h>

@class NSString, PDFPageLayerPrivate;

@interface PDFPageLayer : CALayer <RequestDisplayListDelegate, PDFTileDelegate>
{
    PDFPageLayerPrivate *_private;
}

- (void).cxx_destruct;
- (void)_updateTilesIOS;
- (struct CGRect)pageLayerVisibleRect;
- (_Bool)isPageVisible;
- (_Bool)_tileIsOccluded:(id)arg1;
- (void)tileDrawingComplete:(id)arg1;
- (void)updateTiles;
- (void)recievedDisplayList:(id)arg1;
- (double)lastLayoutDuration;
- (void)hideTileLayer:(_Bool)arg1;
- (void)setEnablePageShadows:(_Bool)arg1;
- (void)appendDebugDotFile:(id)arg1;
- (void)magnificationDidChange;
- (void)magnificationWillChange;
- (void)setPage:(id)arg1;
- (void)releaseTiles;
- (void)dealloc;
- (void)setNeedsTilesUpdate;
- (void)setDisplayBox:(long long)arg1;
- (void)setParentView:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
