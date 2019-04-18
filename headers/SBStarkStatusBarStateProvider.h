//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SBStatusBarStateProvider.h"

@class NSMutableDictionary, NSString;

@interface SBStarkStatusBarStateProvider : SBStatusBarStateProvider
{
    id <SBStarkSessionConfiguring> _sessionConfiguration;
    char _oldAggregatorTimeCString[64];
    char _timeCString[64];
    _Bool _statusBarTimeRequiresUpdate;
    _Bool _showOptimalCellData;
    _Bool _disableBattery;
    _Bool _showElectronicTollCollection;
    _Bool _electronicTollCollectionAvailable;
    _Bool _allStatusBarItemsOverrideEnabled;
    NSString *_inCallDetail;
    int _requestedActions;
    NSMutableDictionary *_statusBarItemsDisabledRequesters;
    id <SBStarkStatusBarRecordingStateProviding> _recordingStateProvider;
}

+ (_Bool)_itemIsIgnored:(int)arg1;
- (void).cxx_destruct;
- (void)_batteryStateChanged;
- (void)_callDurationChanged;
- (void)_resetStatusBarTime;
- (void)_electronicTollCollectionChanged;
- (void)_didFinishPost;
- (void)_composePostActionsFromAggregatorActions:(int *)arg1;
- (void)_composePostDataFromAggregatorData:(CDStruct_1916f467 *)arg1;
- (_Bool)_shouldPostForUpdatesToNonItemData:(const CDStruct_1916f467 *)arg1;
- (_Bool)_shouldPostForVisitedItem:(int)arg1 withUpdates:(_Bool)arg2 toAggregatorData:(const CDStruct_1916f467 *)arg3 lastPost:(const CDStruct_1916f467 *)arg4;
- (id)doubleHeightStatusStringForStyle:(long long)arg1;
- (_Bool)_shouldDisableBattery;
- (_Bool)_isItemEnabled:(int)arg1;
- (void)recordingStateChanged;
- (void)setStatusBarItem:(int)arg1 disabled:(_Bool)arg2 forRequester:(id)arg3;
- (void)dockSettingsDidChange;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1 provider:(id)arg2;

@end

