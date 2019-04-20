/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, July 26, 2016 at 1:11:29 AM Pacific Daylight Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIViewController.h>
#import <SpringBoard/SBAppSwitcherIconControllerDelegate.h>
#import <SpringBoard/SBAppSwitcherScrollingViewDelegate.h>
#import <libobjc.A.dylib/_UISettingsKeyObserver.h>
#import <SpringBoard/SBReachabilityObserver.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <SpringBoard/SBAppViewHostRequester.h>
#import <SpringBoard/SBMainAppSwitcherContentViewControlling.h>

@protocol SBMainAppSwitcherContentViewControllerDelegate, OS_dispatch_queue;
@class SBDisplayItem, SBMainDisplayLayoutState, NSArray, _UILegibilitySettings, SBBestAppSuggestion, NSMutableArray, NSMutableDictionary, SBAppSwitcherPageViewController, SBAppSwitcherIconController, UIView, SBAppSwitcherHomePageCellView, SBAppSwitcherSettings, NSObject, UIGestureRecognizer, UISwipeGestureRecognizer, SBAppView, NSString;

@interface SBAppSwitcherController : UIViewController <SBAppSwitcherIconControllerDelegate, SBAppSwitcherScrollingViewDelegate, _UISettingsKeyObserver, SBReachabilityObserver, UIGestureRecognizerDelegate, SBAppViewHostRequester, SBMainAppSwitcherContentViewControlling> {

	id<SBMainAppSwitcherContentViewControllerDelegate> _delegate;
	NSMutableArray* _displayItems;
	NSMutableDictionary* _switcherServiceViewControllerMap;
	SBAppSwitcherPageViewController* _pageController;
	SBAppSwitcherIconController* _iconController;
	UIView* _pageView;
	UIView* _iconView;
	NSMutableDictionary* _appSnapshots;
	NSMutableDictionary* _hostedApps;
	SBAppSwitcherHomePageCellView* _homePageCell;
	SBDisplayItem* _returnToDisplayItem;
	SBDisplayItem* _initialDisplayItem;
	SBDisplayItem* _returnToSideDisplayItem;
	SBMainDisplayLayoutState* _initialLayoutState;
	NSRange _lastVisibleRange;
	long long _startingInterfaceOrientation;
	long long _layoutInterfaceOrientation;
	BOOL _interactionEnabled;
	BOOL _visible;
	int _mode;
	SBAppSwitcherSettings* _settings;
	NSObject*<OS_dispatch_queue> _snapshotQueue;
	_UILegibilitySettings* _legibilitySettings;
	UIGestureRecognizer* _cancelReachabilityTapGestureRecognizer;
	UISwipeGestureRecognizer* _swipeToRevealNotificationCenterGestureRecognizer;
	CGPoint _preReachabilityContentViewOrigin;
	BOOL _presentingForReachabilityLayout;
	SBBestAppSuggestion* _bestAppSuggestion;
	SBAppView* _hideSideAppView;
	BOOL _invalidated;
	BOOL _appSuggestionWasTapped;

}

@property (assign,nonatomic,__weak) id<SBMainAppSwitcherContentViewControllerDelegate> delegate;                         //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSArray * displayItems;                                                                       //@synthesize displayItems=_displayItems - In the implementation block
@property (setter=_setReturnToDisplayItem:,nonatomic,copy) SBDisplayItem * _returnToDisplayItem;                         //@synthesize returnToDisplayItem=_returnToDisplayItem - In the implementation block
@property (setter=_setInitialDisplayItem:,nonatomic,copy) SBDisplayItem * _initialDisplayItem;                           //@synthesize initialDisplayItem=_initialDisplayItem - In the implementation block
@property (setter=_setReturnToSideDisplayItem:,nonatomic,copy) SBDisplayItem * _returnToSideDisplayItem;                 //@synthesize returnToSideDisplayItem=_returnToSideDisplayItem - In the implementation block
@property (setter=_setInitialLayoutState:,nonatomic,retain) SBMainDisplayLayoutState * _initialLayoutState;              //@synthesize initialLayoutState=_initialLayoutState - In the implementation block
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;                                                 //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (nonatomic,__weak,readonly) SBAppSwitcherIconController * iconController; 
@property (assign,nonatomic) BOOL appSuggestionWasTapped;                                                                //@synthesize appSuggestionWasTapped=_appSuggestionWasTapped - In the implementation block
@property (nonatomic,retain) SBBestAppSuggestion * bestAppSuggestion;                                                    //@synthesize bestAppSuggestion=_bestAppSuggestion - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * hostedApps;                                                           //@synthesize hostedApps=_hostedApps - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)setPerformSochiMigrationTasksWhenLoaded:(BOOL)arg1 ;
+(BOOL)shouldProvideSnapshotIfPossible;
+(BOOL)shouldProvideHomeSnapshotIfPossible;
+(double)snapshotScale;
+(double)pageScale;
-(void)handleReachabilityModeActivated;
-(void)handleReachabilityModeDeactivated;
-(void)handleRevealNotificationCenterGesture:(id)arg1 ;
-(SBAppSwitcherIconController *)iconController;
-(BOOL)_shouldRespondToReachability;
-(void)_performReachabilityTransactionForActivate:(BOOL)arg1 immediately:(BOOL)arg2 ;
-(long long)appViewRequesterPriority:(id)arg1 ;
-(id)appViewRequesterIdentifier:(id)arg1 ;
-(void)_finishDeferredSochiMigrationTasks;
-(void)_switcherWasDismissed:(BOOL)arg1 ;
-(void)_updateSnapshotsForce:(BOOL)arg1 ;
-(SBDisplayItem *)_returnToDisplayItem;
-(void)_updatePageViewScale:(double)arg1 xTranslation:(double)arg2 ;
-(void)setDisplayItems:(NSArray *)arg1 ;
-(void)_layoutInOrientation:(long long)arg1 ;
-(void)_updateForAnimationFrame:(double)arg1 withAnchor:(id)arg2 ;
-(void)_bringIconViewToFront;
-(id)_transitionAnimationFactory;
-(BOOL)_inMode:(int)arg1 ;
-(void)_updateSnapshots;
-(SBDisplayItem *)_returnToSideDisplayItem;
-(void)_switcherWasPresented:(BOOL)arg1 ;
-(id)_animationFactoryForIconAlphaTransition;
-(CGRect)_nominalPageViewFrameForOrientation:(long long)arg1 ;
-(void)_layoutSubviewsInOrientation:(long long)arg1 ;
-(void)setHostedApps:(NSMutableDictionary *)arg1 ;
-(id)_generateCellViewForDisplayItem:(id)arg1 ;
-(double)_scaleForFullscreenPageView;
-(SBDisplayItem *)_initialDisplayItem;
-(NSMutableDictionary *)hostedApps;
-(id)_homePageCell;
-(BOOL)shouldHostAppDisplayItem:(id)arg1 ;
-(id)_contextHostViewForDisplayItem:(id)arg1 withSideItem:(id)arg2 ;
-(id)_viewForService:(id)arg1 ;
-(id)_viewForRemoteAlert:(id)arg1 placeholder:(BOOL)arg2 displayItem:(id)arg3 ;
-(id)_snapshotViewForDisplayItem:(id)arg1 ;
-(unsigned long long)_totalItemsForWhichToKeepAroundSnapshots;
-(BOOL)_isSnapshotDisplayItem:(id)arg1 ;
-(void)_animateReachabilityActivatedWithHandler:(/*^block*/id)arg1 ;
-(void)_animateReachabilityDeactivatedWithHandler:(/*^block*/id)arg1 ;
-(void)switcherIconScroller:(id)arg1 contentOffsetChanged:(double)arg2 ;
-(void)switcherIconScroller:(id)arg1 activate:(id)arg2 ;
-(BOOL)switcherIconScroller:(id)arg1 shouldHideIconForDisplayItem:(id)arg2 ;
-(void)switcherIconScrollerBeganPanning:(id)arg1 ;
-(unsigned long long)switcherIconScroller:(id)arg1 settledIndexForNormalizedOffset:(inout double*)arg2 andXVelocity:(double)arg3 ;
-(void)switcherIconScrollerDidEndScrolling:(id)arg1 ;
-(id)switcherIconScrollerWindowForViewRecycling:(id)arg1 ;
-(id)switcherScroller:(id)arg1 viewForDisplayItem:(id)arg2 ;
-(BOOL)switcherScroller:(id)arg1 isDisplayItemRemovable:(id)arg2 ;
-(BOOL)switcherScrollerIsRelayoutBlocked:(id)arg1 ;
-(CGSize)switcherScrollerItemSize:(id)arg1 forOrientation:(long long)arg2 ;
-(double)switcherScrollerDistanceBetweenItemCenters:(id)arg1 forOrientation:(long long)arg2 ;
-(void)switcherScroller:(id)arg1 contentOffsetChanged:(double)arg2 ;
-(void)switcherScroller:(id)arg1 itemTapped:(id)arg2 ;
-(void)switcherScrollerBeganPanning:(id)arg1 ;
-(void)switcherScroller:(id)arg1 displayItemWantsToBeRemoved:(id)arg2 ;
-(BOOL)switcherScroller:(id)arg1 displayItemWantsToBeKeptInViewHierarchy:(id)arg2 ;
-(void)switcherScrollerDidEndScrolling:(id)arg1 ;
-(void)switcherScrollerBeganMoving:(id)arg1 ;
-(double)reachabilityOffsetForSwitcherScroller:(id)arg1 ;
-(void)startInteractiveTransition:(BOOL)arg1 presenting:(BOOL)arg2 withRequest:(id)arg3 ;
-(void)endInteractionWithCommitment:(BOOL)arg1 ;
-(void)setTransitionParameters:(UIEdgeInsets)arg1 ;
-(id)nextDisplayItem;
-(void)endTransitionWithSuccess:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)animatePresentationForTransitionRequest:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)animateDismissalToDisplayItem:(id)arg1 forTransitionRequest:(id)arg2 withCompletion:(/*^block*/id)arg3 ;
-(void)insertDisplayItem:(id)arg1 atIndex:(unsigned long long)arg2 updateScrollPosition:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)removeDisplayItem:(id)arg1 updateScrollPosition:(BOOL)arg2 forReason:(long long)arg3 completion:(/*^block*/id)arg4 ;
-(void)replaceDisplayItem:(id)arg1 withDisplayItem:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_setReturnToDisplayItem:(id)arg1 ;
-(void)_setReturnToSideDisplayItem:(id)arg1 ;
-(void)_setInitialDisplayItem:(id)arg1 ;
-(SBMainDisplayLayoutState *)_initialLayoutState;
-(void)_setInitialLayoutState:(id)arg1 ;
-(void)setBestAppSuggestion:(SBBestAppSuggestion *)arg1 ;
-(id)pageForDisplayItem:(id)arg1 ;
-(double)_frameScaleValueForAnimation;
-(void)_updatePageViewScale:(double)arg1 ;
-(id)_viewForContinuityApp:(id)arg1 ;
-(BOOL)appSuggestionWasTapped;
-(void)setAppSuggestionWasTapped:(BOOL)arg1 ;
-(void)setDelegate:(id<SBMainAppSwitcherContentViewControllerDelegate>)arg1 ;
-(void)dealloc;
-(id<SBMainAppSwitcherContentViewControllerDelegate>)delegate;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)invalidate;
-(BOOL)prefersStatusBarHidden;
-(unsigned long long)supportedInterfaceOrientations;
-(long long)_windowInterfaceOrientation;
-(BOOL)shouldAutorotate;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(BOOL)wantsFullScreenLayout;
-(void)viewDidLayoutSubviews;
-(void)viewDidLoad;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(_UILegibilitySettings *)legibilitySettings;
-(BOOL)isScrolling;
-(void)_setInteractionEnabled:(BOOL)arg1 ;
-(NSArray *)displayItems;
-(void)_invalidate:(BOOL)arg1 ;
-(SBBestAppSuggestion *)bestAppSuggestion;
-(void)handleCancelReachabilityGesture:(id)arg1 ;
@end
