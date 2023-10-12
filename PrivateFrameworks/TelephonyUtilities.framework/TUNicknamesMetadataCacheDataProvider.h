/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
 */

@interface TUNicknamesMetadataCacheDataProvider : TUMetadataCacheDataProvider <IMNicknameListener> {
    IMNicknameProvider * _nicknameProvider;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) IMNicknameProvider *nicknameProvider;
@property (readonly) Class superclass;

+ (id)sharedInstance;
+ (id)tuMetadataDestinationIDForHandleValue:(id)arg1;

- (void).cxx_destruct;
- (id)fetchNicknameForHandleValue:(id)arg1;
- (id)formattedNicknameStringForHandleValue:(id)arg1;
- (id)formattedNicknameStringForNickname:(id)arg1;
- (id)init;
- (id)nicknameProvider;
- (void)nicknameStoreDidChange:(id)arg1;
- (void)updateCacheWithDestinationIDs:(id)arg1 withGroup:(id)arg2;

@end
