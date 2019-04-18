//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBUISettings.h"

@interface SBHomeGestureExclusionTrapezoidSettings : SBUISettings
{
    _Bool _showExclusionTrapezoidDebugView;
    _Bool _landscapeTrapezoidEnabled;
    _Bool _allowHorizontalSwipesOutsideLandscapeTrapezoid;
    _Bool _portraitTrapezoidEnabled;
    _Bool _portraitTrapezoidEnabledOnlyForKeyboards;
    _Bool _allowHorizontalSwipesOutsidePortraitTrapezoid;
    double _landscapeTrapezoidHeight;
    double _landscapeTrapezoidBaseHeight;
    double _landscapeTrapezoidAdjacentXDistanceFromEdge;
    double _landscapeTrapezoidOpposingXDistanceFromEdge;
    double _portraitTrapezoidHeight;
    double _portraitTrapezoidBaseHeight;
    double _portraitTrapezoidAdjacentXDistanceFromEdge;
    double _portraitTrapezoidOpposingXDistanceFromEdge;
}

+ (id)settingsControllerModule;
@property(nonatomic) double portraitTrapezoidOpposingXDistanceFromEdge; // @synthesize portraitTrapezoidOpposingXDistanceFromEdge=_portraitTrapezoidOpposingXDistanceFromEdge;
@property(nonatomic) double portraitTrapezoidAdjacentXDistanceFromEdge; // @synthesize portraitTrapezoidAdjacentXDistanceFromEdge=_portraitTrapezoidAdjacentXDistanceFromEdge;
@property(nonatomic) double portraitTrapezoidBaseHeight; // @synthesize portraitTrapezoidBaseHeight=_portraitTrapezoidBaseHeight;
@property(nonatomic) double portraitTrapezoidHeight; // @synthesize portraitTrapezoidHeight=_portraitTrapezoidHeight;
@property(nonatomic) _Bool allowHorizontalSwipesOutsidePortraitTrapezoid; // @synthesize allowHorizontalSwipesOutsidePortraitTrapezoid=_allowHorizontalSwipesOutsidePortraitTrapezoid;
@property(nonatomic) _Bool portraitTrapezoidEnabledOnlyForKeyboards; // @synthesize portraitTrapezoidEnabledOnlyForKeyboards=_portraitTrapezoidEnabledOnlyForKeyboards;
@property(nonatomic) _Bool portraitTrapezoidEnabled; // @synthesize portraitTrapezoidEnabled=_portraitTrapezoidEnabled;
@property(nonatomic) double landscapeTrapezoidOpposingXDistanceFromEdge; // @synthesize landscapeTrapezoidOpposingXDistanceFromEdge=_landscapeTrapezoidOpposingXDistanceFromEdge;
@property(nonatomic) double landscapeTrapezoidAdjacentXDistanceFromEdge; // @synthesize landscapeTrapezoidAdjacentXDistanceFromEdge=_landscapeTrapezoidAdjacentXDistanceFromEdge;
@property(nonatomic) double landscapeTrapezoidBaseHeight; // @synthesize landscapeTrapezoidBaseHeight=_landscapeTrapezoidBaseHeight;
@property(nonatomic) double landscapeTrapezoidHeight; // @synthesize landscapeTrapezoidHeight=_landscapeTrapezoidHeight;
@property(nonatomic) _Bool allowHorizontalSwipesOutsideLandscapeTrapezoid; // @synthesize allowHorizontalSwipesOutsideLandscapeTrapezoid=_allowHorizontalSwipesOutsideLandscapeTrapezoid;
@property(nonatomic) _Bool landscapeTrapezoidEnabled; // @synthesize landscapeTrapezoidEnabled=_landscapeTrapezoidEnabled;
@property(nonatomic) _Bool showExclusionTrapezoidDebugView; // @synthesize showExclusionTrapezoidDebugView=_showExclusionTrapezoidDebugView;
- (void)setDefaultValues;

@end

