/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSString, NSURL, SBApplication;

__attribute__((visibility("hidden")))
@interface SBVideoPermissionAlertItem : XXUnknownSuperclass {
	NSURL* _url;
	SBApplication* _appHandlingURL;
	NSString* _sender;
}
-(BOOL)allowMenuButtonDismissal;
-(BOOL)dismissOnLock;
-(BOOL)shouldShowInLockScreen;
-(void)configure:(BOOL)configure requirePasscodeForActions:(BOOL)actions;
-(void)alertView:(id)view clickedButtonAtIndex:(int)index;
-(void)dealloc;
-(id)initWithURL:(id)url applicationHandlingURL:(id)url2 sender:(id)sender;
@end
