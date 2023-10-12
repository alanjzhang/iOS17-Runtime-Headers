/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/RTTUtilities.framework/RTTUtilities
 */

@interface RTTDictionaryManager : NSObject {
    NSArray * _availableDictionaries;
}

@property (nonatomic, retain) NSArray *availableDictionaries;

+ (id)_availableDictionaryAssetsUsingRemoteInfo:(bool)arg1;

- (void).cxx_destruct;
- (void)_downloadAsset:(id)arg1;
- (id)_ttyDictionaryAsset;
- (id)availableDictionaries;
- (void)dealloc;
- (void)deleteIfNeeded;
- (void)downloadIfNeeded;
- (id)init;
- (void)setAvailableDictionaries:(id)arg1;

@end