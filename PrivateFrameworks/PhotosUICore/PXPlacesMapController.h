//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/MKMapViewDelegate-Protocol.h>
#import <PhotosUICore/PXPlacesGeotaggedItemDataSourceDelegate-Protocol.h>

@class NSMapTable, NSMutableDictionary, NSSet, NSString, PXPlacesImageCache, PXPlacesMapPipelineExecutionContext, PXPlacesMapView;
@protocol OS_dispatch_queue, OS_dispatch_source, PXPlacesMapControllerChangeDelegate, PXPlacesMapControllerFocusDelegate, PXPlacesMapControllerLoadingStateDelegate, PXPlacesMapControllerSelectionDelegate;

@interface PXPlacesMapController : NSObject <MKMapViewDelegate, PXPlacesGeotaggedItemDataSourceDelegate>
{
    NSObject<OS_dispatch_queue> *_pipelinesQueue;
    NSObject<OS_dispatch_queue> *_dataSourcesQueue;
    NSObject<OS_dispatch_queue> *_executionContextQueue;
    NSObject<OS_dispatch_source> *_uiUpdateTimer;
    NSMapTable *_dataSourceExecutionContexts;
    NSMapTable *_pendingDataSourceChanges;
    _Bool _pipelineExecutionAllowed;
    _Bool _mapViewIsVisible;
    _Bool _signalFocusWhenMapViewBecomesVisible;
    id <PXPlacesMapControllerSelectionDelegate> _selectionDelegate;
    id <PXPlacesMapControllerChangeDelegate> _changeDelegate;
    id <PXPlacesMapControllerFocusDelegate> _focusDelegate;
    id <PXPlacesMapControllerLoadingStateDelegate> _stateDelegate;
    NSSet *_dataSources;
    NSMapTable *_dataSourceToPipelineMap;
    PXPlacesMapView *_mapView;
    PXPlacesMapPipelineExecutionContext *_currentExecutionContext;
    PXPlacesImageCache *_cache;
    NSMutableDictionary *_showDebugMapRectColors;
    struct CLLocationCoordinate2D _initialCenterCoordinate;
    struct UIEdgeInsets _initialEdgePadding;
    CDStruct_02837cd9 _signalFocusMapRect;
}

@property(retain, nonatomic) NSMutableDictionary *showDebugMapRectColors; // @synthesize showDebugMapRectColors=_showDebugMapRectColors;
@property(retain) PXPlacesImageCache *cache; // @synthesize cache=_cache;
@property(nonatomic) CDStruct_02837cd9 signalFocusMapRect; // @synthesize signalFocusMapRect=_signalFocusMapRect;
@property(nonatomic) _Bool signalFocusWhenMapViewBecomesVisible; // @synthesize signalFocusWhenMapViewBecomesVisible=_signalFocusWhenMapViewBecomesVisible;
@property _Bool mapViewIsVisible; // @synthesize mapViewIsVisible=_mapViewIsVisible;
@property _Bool pipelineExecutionAllowed; // @synthesize pipelineExecutionAllowed=_pipelineExecutionAllowed;
@property(retain) PXPlacesMapPipelineExecutionContext *currentExecutionContext; // @synthesize currentExecutionContext=_currentExecutionContext;
@property(retain, nonatomic) PXPlacesMapView *mapView; // @synthesize mapView=_mapView;
@property(retain) NSMapTable *dataSourceToPipelineMap; // @synthesize dataSourceToPipelineMap=_dataSourceToPipelineMap;
@property(retain) NSSet *dataSources; // @synthesize dataSources=_dataSources;
@property(nonatomic) struct UIEdgeInsets initialEdgePadding; // @synthesize initialEdgePadding=_initialEdgePadding;
@property(nonatomic) struct CLLocationCoordinate2D initialCenterCoordinate; // @synthesize initialCenterCoordinate=_initialCenterCoordinate;
@property __weak id <PXPlacesMapControllerLoadingStateDelegate> stateDelegate; // @synthesize stateDelegate=_stateDelegate;
@property __weak id <PXPlacesMapControllerFocusDelegate> focusDelegate; // @synthesize focusDelegate=_focusDelegate;
@property __weak id <PXPlacesMapControllerChangeDelegate> changeDelegate; // @synthesize changeDelegate=_changeDelegate;
@property __weak id <PXPlacesMapControllerSelectionDelegate> selectionDelegate; // @synthesize selectionDelegate=_selectionDelegate;
- (void).cxx_destruct;
- (void)mapContainerViewDidDisappear;
- (void)mapContainerViewWillDisappear;
- (void)mapContainerViewDidAppear;
- (void)mapContainerViewWillAppear;
- (void)mapViewDidFinishRenderingMap:(id)arg1 fullyRendered:(_Bool)arg2;
- (void)mapView:(id)arg1 didAddOverlayRenderers:(id)arg2;
- (id)mapView:(id)arg1 rendererForOverlay:(id)arg2;
- (void)mapView:(id)arg1 didSelectAnnotationView:(id)arg2;
- (void)mapView:(id)arg1 didAddAnnotationViews:(id)arg2;
- (id)mapView:(id)arg1 viewForAnnotation:(id)arg2;
- (void)mapView:(id)arg1 regionDidChangeAnimated:(_Bool)arg2;
- (void)dataSource:(id)arg1 didChange:(id)arg2;
- (double)_zPositionForAnnotationIndex:(long long)arg1;
- (void)_executeUpdatePlanResults:(id)arg1;
- (double)_fadeOutAnimationDuration;
- (double)_fadeInAnimationDuration;
- (double)_defaultAnimationDuration;
- (void)_updateMapWithDataSource:(id)arg1 dataSourceChange:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)executePipeline:(id)arg1 dataSourceChange:(id)arg2 context:(id)arg3;
- (void)_updateMapWithDataSources:(id)arg1 dataSourceChangeTable:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_updateMapWithAllDataSources:(CDUnknownBlockType)arg1;
- (CDStruct_02837cd9)_ensureMinimumSize:(CDStruct_02837cd9)arg1;
- (void)_setVisibleMapRect:(CDStruct_02837cd9)arg1 edgePadding:(struct UIEdgeInsets)arg2 animated:(_Bool)arg3;
- (void)setVisibleMapRect:(CDStruct_02837cd9)arg1 forRenderer:(id)arg2 animated:(_Bool)arg3;
- (void)setVisibleMapRect:(CDStruct_02837cd9)arg1 forPipeline:(id)arg2 animated:(_Bool)arg3;
- (void)_showDebugMapRect:(CDStruct_02837cd9)arg1 color:(id)arg2;
- (CDStruct_02837cd9)mapRectForNearbyQueriesFromRect:(CDStruct_02837cd9)arg1 atScale:(double)arg2 targetViewSize:(struct CGSize)arg3;
- (CDStruct_02837cd9)mapRectForGeotaggablesFromDataSource:(id)arg1 renderer:(id)arg2 mapViewSize:(struct CGSize)arg3 fitAdjusted:(_Bool *)arg4;
- (CDStruct_02837cd9)_mapRectForGeotaggablesFromPipeline:(id)arg1 fitAdjusted:(_Bool *)arg2;
- (void)focusOnGeotaggablesFromPipelineImmediately:(id)arg1;
- (void)focusOnGeotaggablesFromPipeline:(id)arg1 animated:(_Bool)arg2;
- (id)visibleGeotaggableFromDataSource:(id)arg1;
- (void)runPipelines;
- (void)resumePipelines:(CDUnknownBlockType)arg1;
- (void)suspendPipelines;
- (void)removePipeline:(id)arg1;
- (void)removeDataSource:(id)arg1;
- (void)addPipeline:(id)arg1;
- (void)loadView;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
