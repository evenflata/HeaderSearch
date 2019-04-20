/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBBaseSoftwareUpdateAlertItem.h"

@class NSError;

__attribute__((visibility("hidden")))
@interface SBSoftwareUpdateUnableToInstallAlertItem : SBBaseSoftwareUpdateAlertItem {
	NSError* _error;
}
@property(retain, nonatomic) NSError* error;
-(BOOL)dismissOnLock;
-(BOOL)allowMenuButtonDismissal;
-(BOOL)shouldShowInLockScreen;
-(BOOL)undimsScreen;
-(BOOL)reappearsAfterLock;
-(void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
-(void)buildDefaultSheetWithBody:(id)body isLocked:(BOOL)locked;
-(void)buildUnavailableSheet;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(void)dealloc;
@end
