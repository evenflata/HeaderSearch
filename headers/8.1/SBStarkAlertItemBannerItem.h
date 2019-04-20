/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "SBStarkBannerItem.h"

@class NSString, NSDate, SBAlertItem, SBUISound;

__attribute__((visibility("hidden")))
@interface SBStarkAlertItemBannerItem : SBStarkBannerItem {
	SBAlertItem* _alertItem;
	NSString* _title;
	NSString* _message;
	SBUISound* _sound;
	NSDate* _originDate;
}
-(id)subActions;
-(id)subActionLabels;
-(id)sourceDate;
-(id)sound;
-(id)ignoreAction;
-(id)action;
-(BOOL)isSticky;
-(unsigned)priority;
-(BOOL)matchesContext:(id)context;
-(void)reloadDisplayProperties;
-(int)defaultActionType;
-(id)categoryImage;
-(id)category;
-(id)title;
-(void)dealloc;
-(id)initWithAlertItem:(id)alertItem;
@end
