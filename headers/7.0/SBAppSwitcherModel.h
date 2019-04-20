/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <XXUnknownSuperclass.h> // Unknown library

@class NSTimer, NSMutableArray;

__attribute__((visibility("hidden")))
@interface SBAppSwitcherModel : XXUnknownSuperclass {
	NSMutableArray* _recentDisplayIdentifiers;
	NSTimer* _saveTimer;
}
+(id)sharedInstance;
-(id)snapshot;
-(void)appsRemoved:(id)removed added:(id)added;
-(id)identifiers;
-(void)remove:(id)remove;
-(void)addToFront:(id)front;
-(id)_recentsFromPrefs;
-(void)_saveRecents;
-(void)_saveRecentsDelayed;
-(void)_invalidateSaveTimer;
-(void)dealloc;
-(id)init;
@end
