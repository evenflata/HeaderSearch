//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NCNotificationAction, NSDictionary, NSString;

@protocol NCNotificationActionRunner <NSObject>
@property(nonatomic) _Bool shouldForwardAction;
- (void)executeAction:(NCNotificationAction *)arg1 fromOrigin:(NSString *)arg2 withParameters:(NSDictionary *)arg3 completion:(void (^)(_Bool))arg4;
@end

