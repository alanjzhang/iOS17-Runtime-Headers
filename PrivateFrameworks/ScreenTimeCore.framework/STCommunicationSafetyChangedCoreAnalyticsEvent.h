/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ScreenTimeCore.framework/ScreenTimeCore
 */

@interface STCommunicationSafetyChangedCoreAnalyticsEvent : NSObject <STCoreAnalyticsEvent> {
    bool  _communicationSafetyEnabled;
}

@property (readonly) bool communicationSafetyEnabled;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSDictionary *payload;

+ (id)description;

- (bool)communicationSafetyEnabled;
- (id)initWithCommunicationSafetyEnabled:(bool)arg1;
- (id)name;
- (id)payload;

@end
