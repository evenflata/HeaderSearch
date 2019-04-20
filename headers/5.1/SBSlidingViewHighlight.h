/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "Springboard-Structs.h"
#import <XXUnknownSuperclass.h> // Unknown library

@class UIImageView;

@interface SBSlidingViewHighlight : XXUnknownSuperclass {
	UIImageView* _leftHighlight;
	UIImageView* _rightHighlight;
	CGRect _notchRect;
}
+(float)defaultHeight;
+(id)highlightImage;
-(id)initWithFrame:(CGRect)frame;
-(id)initWithFrame:(CGRect)frame notchRect:(CGRect)rect;
-(void)layoutSubviews;
-(void)setNotchRect:(CGRect)rect;
-(void)dealloc;
@end
