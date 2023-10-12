/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSSoftwareUpdate : NSObject {
    NSDictionary * _dictionary;
    NSDate * _installDate;
    long long  _updateState;
}

@property (nonatomic, readonly) NSString *bundleIdentifier;
@property (nonatomic, copy) NSDate *installDate;
@property (nonatomic, readonly) long long parentalControlsRank;
@property (nonatomic, readonly) long long storeItemIdentifier;
@property (nonatomic, readonly) NSDictionary *updateDictionary;
@property (nonatomic) long long updateState;

- (id)bundleIdentifier;
- (void)dealloc;
- (id)initWithUpdateDictionary:(id)arg1;
- (id)installDate;
- (long long)parentalControlsRank;
- (void)setInstallDate:(id)arg1;
- (void)setUpdateState:(long long)arg1;
- (long long)storeItemIdentifier;
- (id)updateDictionary;
- (long long)updateState;

@end
