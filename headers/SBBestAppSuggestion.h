//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDate, NSString, NSURL, NSUUID;

@interface SBBestAppSuggestion : NSObject
{
}

- (_Bool)isHandoff;
- (_Bool)isLocationPredictionFromSource:(unsigned long long)arg1;
- (_Bool)isLocationPredictionOfType:(unsigned long long)arg1;
- (_Bool)isArrivedAtHomePrediction;
- (_Bool)isArrivedAtWorkPrediction;
- (_Bool)isFirstWakePrediction;
- (_Bool)isCarPlayPrediction;
- (_Bool)isBluetoothAudioPrediction;
- (_Bool)isBluetoothPrediction;
- (_Bool)isHeadphonesPrediction;
- (_Bool)isPrediction;
- (_Bool)isEligibleForLockScreen;
- (_Bool)isLocationBasedSuggestion;
- (_Bool)isSiriSuggestion;
- (id)makeInboxCopyOfLaunchURLToInboxURL:(id)arg1;
- (_Bool)launchURLRequiresInboxCopy;
- (_Bool)isLocallyGeneratedSuggestion;
- (_Bool)isCallContinuitySuggestion;
- (_Bool)isOpenURLSuggestion;
- (_Bool)isNotificationSuggestion;
@property(readonly, copy) NSString *suggestedLocationName;
@property(readonly, copy) NSURL *launchURL;
@property(readonly, copy) NSString *originatingBundleIdentifier;
@property(readonly, copy) NSString *originatingDeviceType;
@property(readonly, copy) NSString *originatingDeviceName;
@property(readonly, copy) NSString *originatingDeviceIdentifier;
@property(readonly, copy) NSDate *lastUpdateTime;
@property(readonly, copy) NSString *activityType;
@property(readonly, copy) NSString *bundleIdentifier;
@property(readonly, copy) NSUUID *uniqueIdentifier;

@end

