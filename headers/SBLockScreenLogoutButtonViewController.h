//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBDashBoardViewControllerBase.h"

@class SBDashBoardVibrantWallpaperButton, SBUserSessionController;

@interface SBLockScreenLogoutButtonViewController : SBDashBoardViewControllerBase
{
    SBUserSessionController *_userSessionController;
}

+ (_Bool)isLogoutSupported;
- (void).cxx_destruct;
- (void)_buttonPressed:(id)arg1;
- (void)loadView;
@property(readonly, nonatomic) SBDashBoardVibrantWallpaperButton *button;
- (id)init;

@end

