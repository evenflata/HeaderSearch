//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBHardwareButtonGestureParametersProviderBase.h"

#import "SBHardwareButtonInteraction.h"

@class NSString;

@interface SBAccessibilityHardwareButtonInteraction : SBHardwareButtonGestureParametersProviderBase <SBHardwareButtonInteraction>
{
    unsigned long long _buttonType;
}

+ (id)hardwareButtonInteractionForLockButton;
+ (id)hardwareButtonInteractionForHomeButton;
@property(readonly, nonatomic) unsigned long long buttonType; // @synthesize buttonType=_buttonType;
- (_Bool)_presentMigrationAlertIfNeeded;
- (double)_downToDownInterval;
- (_Bool)_supportsTripleClick;
- (void)_accessibilityPrefsDidChange;
- (void)_unregisterAsNotificationObserver;
- (void)_registerAsNotificationObserver;
- (struct __CFString *)_speedChangedNotificationName;
- (_Bool)consumeTriplePressUp;
- (id)hardwareButtonGestureParameters;
- (void)dealloc;
- (id)initWithButtonType:(unsigned long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

