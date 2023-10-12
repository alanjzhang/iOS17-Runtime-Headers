/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CloudPhotoLibrary.framework/CloudPhotoLibrary
 */

@interface CPLSettingFeedbackMessage : CPLFeedbackMessage {
    NSString * _settingName;
    NSString * _value;
}

@property (nonatomic, readonly) NSString *settingName;
@property (nonatomic, readonly) NSString *value;

+ (id)feedbackType;

- (void).cxx_destruct;
- (id)initWithSetting:(id)arg1 value:(id)arg2 libraryIdentifier:(id)arg3;
- (id)serverMessage;
- (id)settingName;
- (id)value;

@end