//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBSecureWindow.h"

@interface SBIsolationTankWindow : SBSecureWindow
{
    _Bool _reachabilityEnabled;
    struct CGPoint _reachabilityOffset;
}

+ (_Bool)sb_autorotates;
- (_Bool)_requiresKeyboardPresentationFence;
- (long long)_fromWindowOrientation;
- (long long)_toWindowOrientation;
- (long long)_windowInterfaceOrientation;
- (long long)_orientationForViewTransform;
- (id)sbui_effectiveWindowForIsolation;
- (id)_hostingWindow;
- (_Bool)_shouldAutorotateToInterfaceOrientation:(long long)arg1;
- (_Bool)_isConstrainedByScreenJail;
- (_Bool)_canBecomeKeyWindow;
- (_Bool)_usesWindowServerHitTesting;
- (id)_hitTest:(struct CGPoint)arg1 withEvent:(id)arg2 windowServerHitTestWindow:(id)arg3;
- (struct CGRect)convertRect:(struct CGRect)arg1 toWindow:(id)arg2;
- (void)reachabilityDidDisable;
- (void)reachabilityDidEnableWithOffset:(struct CGPoint)arg1;
- (id)_aboveWindowScrollView;
- (id)isolationTankController;
- (void)dealloc;
- (id)_initWithScreen:(id)arg1 layoutStrategy:(id)arg2 debugName:(id)arg3 rootViewController:(id)arg4 scene:(id)arg5;

@end

