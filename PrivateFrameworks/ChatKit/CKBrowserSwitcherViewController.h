//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <ChatKit/CKBrowserSelectionControllerDelegate-Protocol.h>
#import <ChatKit/CKBrowserSwitcherScrollPreventerDelegate-Protocol.h>
#import <ChatKit/CKBrowserTransitionCoordinatorDelegate-Protocol.h>
#import <ChatKit/UICollectionViewDataSource-Protocol.h>
#import <ChatKit/UICollectionViewDelegate-Protocol.h>
#import <ChatKit/UIGestureRecognizerDelegate-Protocol.h>
#import <ChatKit/UIScrollViewDelegate-Protocol.h>

@class CKBrowserSelectionController, CKBrowserSwitcherFooterView, CKBrowserSwitcherScrollPreventer, CKBrowserTransitionCoordinator, IMBalloonPlugin, IMScheduledUpdater, NSDate, NSString, UICollectionView, UICollectionViewFlowLayout, UIPanGestureRecognizer, UIView;
@protocol CKBrowserSwitcherViewControllerDelegate><CKBrowserTransitionCoordinatorDelegate, CKBrowserViewControllerProtocol;

@interface CKBrowserSwitcherViewController : UIViewController <UIGestureRecognizerDelegate, UIScrollViewDelegate, UICollectionViewDelegate, UICollectionViewDataSource, CKBrowserSwitcherScrollPreventerDelegate, CKBrowserSelectionControllerDelegate, CKBrowserTransitionCoordinatorDelegate>
{
    _Bool _dragging;
    _Bool _browserViewReadyForUserInteraction;
    _Bool _selectionControllerPresented;
    _Bool _insertedViaCollapse;
    _Bool _inManualContentOffsetChange;
    _Bool _inDragAndDrop;
    _Bool _interactiveExpandStarted;
    _Bool _allowFooterLabelUpdates;
    id <CKBrowserSwitcherViewControllerDelegate><CKBrowserTransitionCoordinatorDelegate> _delegate;
    UIViewController<CKBrowserViewControllerProtocol> *_currentViewController;
    CKBrowserTransitionCoordinator *_transitionCoordinator;
    UICollectionView *_collectionView;
    UICollectionViewFlowLayout *_flowLayout;
    UIView *_browserView;
    CKBrowserSwitcherScrollPreventer *_scrollPreventer;
    IMScheduledUpdater *_scrollUpdater;
    UIPanGestureRecognizer *_expandGestureRecognizer;
    CKBrowserSelectionController *_selectionController;
    IMBalloonPlugin *_currentVisiblePlugin;
    NSDate *_timeOfLastLaunchFromAppTray;
    CKBrowserSwitcherFooterView *_footerView;
    UIView *_grayLine;
    UIView *_dimmingView;
    id _cancelTouchesToken;
    IMBalloonPlugin *_balloonPlugin;
}

@property(nonatomic) _Bool allowFooterLabelUpdates; // @synthesize allowFooterLabelUpdates=_allowFooterLabelUpdates;
@property(retain, nonatomic) IMBalloonPlugin *balloonPlugin; // @synthesize balloonPlugin=_balloonPlugin;
@property(nonatomic) _Bool interactiveExpandStarted; // @synthesize interactiveExpandStarted=_interactiveExpandStarted;
@property(retain, nonatomic) id cancelTouchesToken; // @synthesize cancelTouchesToken=_cancelTouchesToken;
@property(nonatomic, getter=isInDragAndDrop) _Bool inDragAndDrop; // @synthesize inDragAndDrop=_inDragAndDrop;
@property(nonatomic) _Bool inManualContentOffsetChange; // @synthesize inManualContentOffsetChange=_inManualContentOffsetChange;
@property(nonatomic) _Bool insertedViaCollapse; // @synthesize insertedViaCollapse=_insertedViaCollapse;
@property(retain, nonatomic) UIView *dimmingView; // @synthesize dimmingView=_dimmingView;
@property(retain, nonatomic) UIView *grayLine; // @synthesize grayLine=_grayLine;
@property(retain, nonatomic) CKBrowserSwitcherFooterView *footerView; // @synthesize footerView=_footerView;
@property(retain, nonatomic) NSDate *timeOfLastLaunchFromAppTray; // @synthesize timeOfLastLaunchFromAppTray=_timeOfLastLaunchFromAppTray;
@property(retain, nonatomic) IMBalloonPlugin *currentVisiblePlugin; // @synthesize currentVisiblePlugin=_currentVisiblePlugin;
@property(retain, nonatomic) CKBrowserSelectionController *selectionController; // @synthesize selectionController=_selectionController;
@property(retain, nonatomic) UIPanGestureRecognizer *expandGestureRecognizer; // @synthesize expandGestureRecognizer=_expandGestureRecognizer;
@property(retain, nonatomic) IMScheduledUpdater *scrollUpdater; // @synthesize scrollUpdater=_scrollUpdater;
@property(retain, nonatomic) CKBrowserSwitcherScrollPreventer *scrollPreventer; // @synthesize scrollPreventer=_scrollPreventer;
@property(retain, nonatomic) UIView *browserView; // @synthesize browserView=_browserView;
@property(retain, nonatomic) UICollectionViewFlowLayout *flowLayout; // @synthesize flowLayout=_flowLayout;
@property(retain, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property(nonatomic, getter=isSelectionControllerPresented) _Bool selectionControllerPresented; // @synthesize selectionControllerPresented=_selectionControllerPresented;
@property(nonatomic, getter=isBrowserReadyForUserInteraction) _Bool browserViewReadyForUserInteraction; // @synthesize browserViewReadyForUserInteraction=_browserViewReadyForUserInteraction;
@property(nonatomic, getter=isDragging) _Bool dragging; // @synthesize dragging=_dragging;
@property(retain, nonatomic) CKBrowserTransitionCoordinator *transitionCoordinator; // @synthesize transitionCoordinator=_transitionCoordinator;
@property(readonly, nonatomic) UIViewController<CKBrowserViewControllerProtocol> *currentViewController; // @synthesize currentViewController=_currentViewController;
@property(nonatomic) __weak id <CKBrowserSwitcherViewControllerDelegate><CKBrowserTransitionCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dragManagerDidEndDragging:(id)arg1;
- (void)dragManagerDidStartDrag:(id)arg1;
- (void)_scrollUpdaterFired;
- (void)_endHoldingScrollUpdatesForKey:(id)arg1;
- (void)_beginHoldingScrollUpdatesForKey:(id)arg1;
- (void)browserSelectionControllerSelectedBalloonPlugin:(id)arg1;
- (void)_loadBrowserForBalloonPlugin:(id)arg1 datasource:(id)arg2;
- (void)showSelectionViewController:(_Bool)arg1 animated:(_Bool)arg2;
- (void)pageControlChanged:(id)arg1;
- (void)pageControlTapped:(id)arg1;
- (void)handleAppsButton:(id)arg1;
- (void)handleExpandButton:(id)arg1;
- (void)showAppName:(_Bool)arg1 animated:(_Bool)arg2;
- (void)setAppName:(id)arg1;
- (void)setCurrentViewController:(id)arg1;
- (void)_updateBrowserViewFrameWithPlugin:(id)arg1;
- (void)setBrowserView:(id)arg1 forPlugin:(id)arg2;
- (void)_transitionSnapshotViewToBrowserViewWithDelay:(double)arg1;
- (void)_transitionSnapshotViewToBrowserViewAfterRemoteViewDidLoad:(id)arg1;
- (void)_updateVisibleBrowserView;
- (void)_deferredUpdateVisibleBrowserView;
- (id)currentSwitcherCell;
- (void)_snapshotCurrentViewController;
- (void)_updateAppNameAndPageForOffset:(struct CGPoint)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)_expandPanGestureRecognized:(id)arg1;
- (void)_updatePluginFromScrollPosition;
- (void)_updateForEndScrolling;
- (void)_updateForBeginScrolling;
- (void)_updateCurrentBrowserSnapshotIfPossible;
- (void)saveSnapshotForCurrentBrowserViewControllerIfPossible;
- (void)showBrowserFullscreenForPlugin:(id)arg1 datasource:(id)arg2;
- (void)showBrowserInSwitcherForPlugin:(id)arg1 datasource:(id)arg2 reloadData:(_Bool)arg3;
- (void)unloadRemoteViewController;
- (void)scrollViewDidEndScrollingAnimation:(id)arg1;
- (void)scrollViewDidEndDecelerating:(id)arg1;
- (void)scrollViewDidScroll:(id)arg1;
- (void)scrollViewWillBeginDragging:(id)arg1;
- (void)scrollPreventerDidEndDecelerating:(id)arg1;
- (void)scrollPreventer:(id)arg1 scrolledToOffset:(struct CGPoint)arg2;
- (void)scrollPreventerWillBeginDragging:(id)arg1;
- (void)scrollPreventerDidLayoutSubviews:(id)arg1;
- (id)entryViewSnapshotForBrowserTransitionCoordinator:(id)arg1;
- (void)browserTransitionCoordinatorDidCollapseOrDismiss:(id)arg1 withReason:(long long)arg2;
- (void)browserTransitionCoordinatorWillCollapseOrDismiss:(id)arg1 withReason:(long long)arg2;
- (void)browserTransitionCoordinatorDidTransitionOrPresentToFullscreen:(id)arg1 withReason:(long long)arg2;
- (void)browserTransitionCoordinatorWillTransitionOrPresentToFullscreen:(id)arg1 withReason:(long long)arg2;
- (void)browserTransitionCoordinator:(id)arg1 willUnloadBrowser:(id)arg2;
- (void)browserTransitionCoordinator:(id)arg1 expandedStateDidChange:(_Bool)arg2 withReason:(long long)arg3;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)dismissBrowserFullscreenAnimated:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)transitionToCollapsed;
- (void)transitionToFullscreen;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewDidLoad;
- (void)layoutMarginsDidChange;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (id)initWithConversation:(id)arg1 sendDelegate:(id)arg2 presentingViewController:(id)arg3;
- (void)dealloc;
- (void)scrollCollectionViewToPlugin:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

