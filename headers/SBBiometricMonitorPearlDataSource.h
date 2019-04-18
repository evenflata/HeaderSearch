//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "BKDevicePearlDelegate.h"
#import "SBBiometricMonitorDataSource.h"
#import "SBUIBiometricResourceObserver.h"

@class BKDevicePearl, NSHashTable, NSString;

@interface SBBiometricMonitorPearlDataSource : NSObject <BKDevicePearlDelegate, SBUIBiometricResourceObserver, SBBiometricMonitorDataSource>
{
    BKDevicePearl *_pearlDevice;
    NSHashTable *_observers;
    _Bool _matching;
    _Bool _faceDetecting;
    _Bool _poseIsMarginal;
}

- (void).cxx_destruct;
- (void)device:(id)arg1 pearlEventOccurred:(long long)arg2;
- (void)device:(id)arg1 pearlStateChanged:(long long)arg2;
@property(readonly, nonatomic) _Bool poseIsMarginal;
@property(readonly, nonatomic) _Bool matchRunning;
@property(readonly, nonatomic) _Bool presenceDetectRunning;
- (void)removeObserver:(id)arg1;
- (void)addObserver:(id)arg1;
- (void)biometricResource:(id)arg1 observeEvent:(unsigned long long)arg2;
- (void)_updateFaceDetecting;
- (void)_updateMatching;
- (void)_setPoseIsMarginal:(_Bool)arg1;
- (void)_setFaceDetecting:(_Bool)arg1;
- (void)_setMatching:(_Bool)arg1;
- (void)_forEachObserver:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithPearlDevice:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

