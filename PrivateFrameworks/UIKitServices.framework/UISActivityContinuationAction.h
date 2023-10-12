/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitServices.framework/UIKitServices
 */

@interface UISActivityContinuationAction : BSAction

@property (nonatomic, readonly) NSString *activityType;
@property (nonatomic, readonly) NSString *activityTypeIdentifier;
@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSDate *lastUpdateTime;
@property (nonatomic, readonly) NSString *originatingDeviceName;
@property (nonatomic, readonly) NSString *originatingDeviceType;
@property (nonatomic, readonly) NSData *userActivityData;

+ (void)buildWithUserActivity:(id)arg1 completion:(id /* block */)arg2;

- (long long)UIActionType;
- (id)activityType;
- (id)activityTypeIdentifier;
- (id)identifier;
- (id)initWithSettings:(id)arg1;
- (bool)isKindOfClass:(Class)arg1;
- (id)keyDescriptionForSetting:(unsigned long long)arg1;
- (id)lastUpdateTime;
- (id)originatingDeviceName;
- (id)originatingDeviceType;
- (id)userActivityData;

@end
