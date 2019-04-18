//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray, NSString, SBStarkScreenFocusAssertion, UIScreen, UIWindow;

@interface SBStarkScreenFocusController : NSObject
{
    UIScreen *_screen;
    NSString *_displayID;
    NSMutableArray *_assertions;
    SBStarkScreenFocusAssertion *_lastFocusAssertion;
    UIWindow *_focusWindow;
}

@property(nonatomic) __weak UIWindow *focusWindow; // @synthesize focusWindow=_focusWindow;
- (void).cxx_destruct;
- (id)description;
- (int)focusedPid;
- (void)dropReason:(id)arg1;
- (void)takeWithPriority:(double)arg1 reason:(id)arg2 forWindow:(id)arg3 bundleIdentifier:(id)arg4 pid:(int)arg5;
- (void)invalidate;
- (void)_applyAssertion:(id)arg1;
- (void)_updateEventFocus;
- (void)dealloc;
- (id)initWithScreen:(id)arg1;

@end

