//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SBTestRecipe.h"

@class NSString;

@interface SBFloatingApplicationTestRecipe : NSObject <SBTestRecipe>
{
    unsigned long long _mode;
    _Bool _addSide;
}

+ (id)title;
- (void)_perform;
- (void)handleVolumeDecrease;
- (void)handleVolumeIncrease;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
