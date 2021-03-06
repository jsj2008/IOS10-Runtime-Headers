//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jul 30 2016 09:41:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UIPreviewPresentationController.h>

#import <UIKit/_UIPlatterMenuDynamicsControllerDelegate-Protocol.h>
#import <UIKit/_UIPreviewActionSheetViewDelegate-Protocol.h>

@class NSArray, NSLayoutConstraint, NSString, UIGestureRecognizer, UIImageView, UIPreviewAction, UIScrollView, UITapGestureRecognizer, UIView, _UIPlatterMenuDynamicsController, _UIPreviewActionSheetView, _UIPreviewPresentationContainerView, _UIPreviewPresentationPlatterView, _UIPreviewQuickActionView, _UIVelocityIntegrator;
@protocol UIViewControllerPreviewing_Internal, _UIPreviewInteractionHighlighting;

__attribute__((visibility("hidden")))
@interface _UIPreviewPresentationController2 : UIPreviewPresentationController <_UIPreviewActionSheetViewDelegate, _UIPlatterMenuDynamicsControllerDelegate>
{
    _Bool _shouldLayoutForPreview;
    _Bool _leadingQuickActionViewSelected;
    _Bool _trailingQuickActionViewSelected;
    _Bool _isAnimatingActionSheet;
    _Bool _hasAskedForDismissalInternally;
    _Bool _hasAskedForCommitInternally;
    _Bool _preDismissAnimationsInflight;
    _Bool _panningGestureRecognizerInProgress;
    _Bool _didSendBeginEvent;
    _UIPreviewPresentationPlatterView *_revealPlatterView;
    _UIPreviewPresentationPlatterView *_contentPlatterView;
    UIView *_actionSheetContainerView;
    UIScrollView *_containerScrollView;
    _UIPreviewActionSheetView *_previewActionSheet;
    _UIPreviewPresentationContainerView *_presentationContainerView;
    NSArray *_previewActionItems;
    UIPreviewAction *_leadingPreviewAction;
    UIPreviewAction *_trailingPreviewAction;
    _UIPreviewQuickActionView *_leadingQuickActionView;
    _UIPreviewQuickActionView *_trailingQuickActionView;
    NSLayoutConstraint *_leadingQuickActionViewEdgeConstraint;
    NSLayoutConstraint *_trailingQuickActionViewEdgeConstraint;
    UIImageView *_actionSheetAvailableImageView;
    NSLayoutConstraint *_containerScrollViewXConstraint;
    UITapGestureRecognizer *_tapToDismissGestureRecognizer;
    UIGestureRecognizer *_modalPreviewActionsPanningGestureRecognizer;
    _UIPlatterMenuDynamicsController *_platterMenuController;
    _UIVelocityIntegrator *_revealPanningVelocityIntegrator;
    UIGestureRecognizer *_panningGestureRecognizer;
    unsigned long long _currentPresentationPhase;
    id <UIViewControllerPreviewing_Internal> _currentPreviewingContext;
    id <_UIPreviewInteractionHighlighting> _currentHighlighter;
}

@property(retain, nonatomic) id <_UIPreviewInteractionHighlighting> currentHighlighter; // @synthesize currentHighlighter=_currentHighlighter;
@property(nonatomic) __weak id <UIViewControllerPreviewing_Internal> currentPreviewingContext; // @synthesize currentPreviewingContext=_currentPreviewingContext;
@property(nonatomic) unsigned long long currentPresentationPhase; // @synthesize currentPresentationPhase=_currentPresentationPhase;
@property(retain, nonatomic) UIGestureRecognizer *panningGestureRecognizer; // @synthesize panningGestureRecognizer=_panningGestureRecognizer;
@property(nonatomic) _Bool didSendBeginEvent; // @synthesize didSendBeginEvent=_didSendBeginEvent;
@property(nonatomic) _Bool panningGestureRecognizerInProgress; // @synthesize panningGestureRecognizerInProgress=_panningGestureRecognizerInProgress;
@property(nonatomic) _Bool preDismissAnimationsInflight; // @synthesize preDismissAnimationsInflight=_preDismissAnimationsInflight;
@property(nonatomic) _Bool hasAskedForCommitInternally; // @synthesize hasAskedForCommitInternally=_hasAskedForCommitInternally;
@property(nonatomic) _Bool hasAskedForDismissalInternally; // @synthesize hasAskedForDismissalInternally=_hasAskedForDismissalInternally;
@property(retain, nonatomic) _UIVelocityIntegrator *revealPanningVelocityIntegrator; // @synthesize revealPanningVelocityIntegrator=_revealPanningVelocityIntegrator;
@property(retain, nonatomic) _UIPlatterMenuDynamicsController *platterMenuController; // @synthesize platterMenuController=_platterMenuController;
@property(nonatomic) _Bool isAnimatingActionSheet; // @synthesize isAnimatingActionSheet=_isAnimatingActionSheet;
@property(retain, nonatomic) UIGestureRecognizer *modalPreviewActionsPanningGestureRecognizer; // @synthesize modalPreviewActionsPanningGestureRecognizer=_modalPreviewActionsPanningGestureRecognizer;
@property(retain, nonatomic) UITapGestureRecognizer *tapToDismissGestureRecognizer; // @synthesize tapToDismissGestureRecognizer=_tapToDismissGestureRecognizer;
@property(retain, nonatomic) NSLayoutConstraint *containerScrollViewXConstraint; // @synthesize containerScrollViewXConstraint=_containerScrollViewXConstraint;
@property(nonatomic) _Bool trailingQuickActionViewSelected; // @synthesize trailingQuickActionViewSelected=_trailingQuickActionViewSelected;
@property(nonatomic) _Bool leadingQuickActionViewSelected; // @synthesize leadingQuickActionViewSelected=_leadingQuickActionViewSelected;
@property(retain, nonatomic) UIImageView *actionSheetAvailableImageView; // @synthesize actionSheetAvailableImageView=_actionSheetAvailableImageView;
@property(retain, nonatomic) NSLayoutConstraint *trailingQuickActionViewEdgeConstraint; // @synthesize trailingQuickActionViewEdgeConstraint=_trailingQuickActionViewEdgeConstraint;
@property(retain, nonatomic) NSLayoutConstraint *leadingQuickActionViewEdgeConstraint; // @synthesize leadingQuickActionViewEdgeConstraint=_leadingQuickActionViewEdgeConstraint;
@property(retain, nonatomic) _UIPreviewQuickActionView *trailingQuickActionView; // @synthesize trailingQuickActionView=_trailingQuickActionView;
@property(retain, nonatomic) _UIPreviewQuickActionView *leadingQuickActionView; // @synthesize leadingQuickActionView=_leadingQuickActionView;
@property(copy, nonatomic) UIPreviewAction *trailingPreviewAction; // @synthesize trailingPreviewAction=_trailingPreviewAction;
@property(copy, nonatomic) UIPreviewAction *leadingPreviewAction; // @synthesize leadingPreviewAction=_leadingPreviewAction;
@property(copy, nonatomic) NSArray *previewActionItems; // @synthesize previewActionItems=_previewActionItems;
@property(retain, nonatomic) _UIPreviewPresentationContainerView *presentationContainerView; // @synthesize presentationContainerView=_presentationContainerView;
@property(retain, nonatomic) _UIPreviewActionSheetView *previewActionSheet; // @synthesize previewActionSheet=_previewActionSheet;
@property(retain, nonatomic) UIScrollView *containerScrollView; // @synthesize containerScrollView=_containerScrollView;
@property(retain, nonatomic) UIView *actionSheetContainerView; // @synthesize actionSheetContainerView=_actionSheetContainerView;
@property(nonatomic) _Bool shouldLayoutForPreview; // @synthesize shouldLayoutForPreview=_shouldLayoutForPreview;
@property(retain, nonatomic) _UIPreviewPresentationPlatterView *contentPlatterView; // @synthesize contentPlatterView=_contentPlatterView;
@property(retain, nonatomic) _UIPreviewPresentationPlatterView *revealPlatterView; // @synthesize revealPlatterView=_revealPlatterView;
- (void).cxx_destruct;
- (_Bool)previewActionSheetCanSelectItem:(id)arg1;
- (void)setupAdditionalModalGestureRecognizers;
- (void)updateSwipeActionsIfApplicable;
- (void)_panningGestureRecognizerDidFire:(id)arg1;
- (void)_dismissForHandledActionWithCompletion:(CDUnknownBlockType)arg1;
- (void)_dismissForSelectionQuickActionAnimated;
- (void)_restorePlatterToInitialStatePositionAnimatedWithCompletion:(CDUnknownBlockType)arg1;
- (void)_restorePlatterToInitialStatePositionAnimated;
- (_Bool)_platterIsInInitialPosition;
- (_Bool)_platterIsInInitialPositionMostly;
- (void)_configureActionSheetChromeViews;
- (_Bool)_platterIsSelectingPreviewActions;
- (void)_dismissPresentationWithCompletion:(CDUnknownBlockType)arg1;
- (struct CGPoint)_presentedActionSheetCenterForActionSheet:(id)arg1;
- (struct CGPoint)_dismissedActionSheetCenterForActionSheet:(id)arg1;
- (id)_makeAndAddToViewHierarchyPreviewActionSheetForMenuItems:(id)arg1;
- (void)_presentSubActionSheetForPreviewActionGroup:(id)arg1;
- (_Bool)_hasPreviewActions;
- (_Bool)_hasSelectedQuickAction;
- (_Bool)_hasPreviewQuickActions;
- (void)_updateVisibiltyOfPreviewActionChromeForCurrentState;
- (double)_quickActionsSelectionThresholdForPreviewMenuItemStyle:(long long)arg1;
- (double)_quickActionSelectionOffset;
- (void)_hideQuickActions;
- (void)_dismissPresentation;
- (void)_invokeCommitHandlerFromInteractionProgress;
- (void)_configureDynamicsController;
- (void)_tapToDismissPreviewWithActionsDidFire:(id)arg1;
- (struct CGPoint)centerForMenuDismissedForActionSheet:(id)arg1;
- (struct CGPoint)centerForMenuPresentedForActionSheet:(id)arg1;
- (struct CGPoint)centerForPlatterWithMenuViewPresentedForActionSheet:(id)arg1;
- (struct CGPoint)initialCenterForTrailingSwipeActionView;
- (id)trailingSwipeActionView;
- (struct CGPoint)initialCenterForLeadingSwipeActionView;
- (id)leadingSwipeActionView;
- (double)_leadingQuickActionOffsetForCenterPosition:(struct CGPoint)arg1 swipeView:(id)arg2;
- (double)_trailingQuickActionOffsetForCenterPosition:(struct CGPoint)arg1 swipeView:(id)arg2;
- (void)platterMenuDynamicsController:(id)arg1 didMoveSwipeView:(id)arg2 toPosition:(struct CGPoint)arg3;
- (void)platterMenuDynamicsControllerDidDismissWithController:(id)arg1;
- (double)minimumSpacingBetweenPlatterAndMenu;
- (struct CGPoint)centerForMenuDismissed;
- (struct CGPoint)centerForMenuPresented;
- (struct CGPoint)centerForPlatterWithMenuViewDismissed;
- (struct CGPoint)centerForPlatterWithMenuViewPresented;
- (struct CGRect)platterContainerBounds;
- (id)platterView;
- (struct CGRect)platterBounds;
- (double)platterContainerCenterY;
- (double)platterContainerCenterX;
- (void)_triggerQuickActionHandlerIfNeeded;
- (_Bool)_canCommitPresentation;
- (_Bool)_canDismissPresentation;
- (void)_willCommitPresentation;
- (void)_preparePresentationContainerViewForPreviewInteraction;
- (void)_configureInitialActionSheetViewIfNeeded;
- (void)systemLayoutFittingSizeDidChangeForChildContentContainer:(id)arg1;
- (void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1;
- (id)_animatorForContainmentTransition;
- (id)_viewsParticipatingInNavigationControllerTransition;
- (struct CGSize)_standardContentPlatterSize;
- (struct CGSize)_preferredContentPlatterSizeForViewController:(id)arg1;
- (void)_layoutContentViews;
- (void)containerViewDidLayoutSubviews;
- (void)dismissalTransitionDidEnd:(_Bool)arg1;
- (void)dismissalTransitionWillBegin;
- (void)presentationTransitionDidEnd:(_Bool)arg1;
- (void)presentationTransitionWillBegin;
- (void)_cancelTransitionDidEnd:(_Bool)arg1;
- (void)_layoutForCancel;
- (void)_previewTransitionDidEnd:(_Bool)arg1;
- (void)_layoutForPreview;
- (void)_interactiveHighlightTransitionDidEnd:(_Bool)arg1;
- (void)_layoutForInteractiveHighlight;
- (void)_prepareContentPlatterViewForPresentationTransitionIfNeeded:(id)arg1;
- (void)_prepareRevealPlatterViewForPresentationTransitionIfNeeded:(id)arg1;
- (void)_presentationTransitionWillBeginForContainerEffectView:(id)arg1;
- (void)dealloc;
- (id)initWithPresentedViewController:(id)arg1 presentingViewController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

