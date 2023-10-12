/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/FlexMusicKit.framework/FlexMusicKit
 */

@interface FlexLocalDBSongData : NSObject {
    NSMutableDictionary * _songData;
    NSString * _uid;
}

@property (nonatomic, readonly) NSDictionary *songData;
@property (nonatomic, readonly) NSString *uid;

// FlexLocalDBSongData (null)

- (void).cxx_destruct;
- (id)_allRequiredKeys;
- (bool)_validateSongData;
- (id)initForRecordCreationWithUID:(id)arg1 songData:(id)arg2;
- (id)initForRecordUpdateWithUID:(id)arg1 songData:(id)arg2;
- (id)initWithUID:(id)arg1 songData:(id)arg2 shouldValidate:(bool)arg3;
- (id)songData;
- (id)uid;

@end
