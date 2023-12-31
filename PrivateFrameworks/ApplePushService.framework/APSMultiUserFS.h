/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ApplePushService.framework/ApplePushService
 */

@interface APSMultiUserFS : NSObject {
    bool  _isMultiUser;
    NSString * _systemPathCache;
}

@property (readonly) bool isMultiUser;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)initWithIsMultiUserMode:(bool)arg1;
- (bool)isMultiUser;
- (id)systemPath;

@end
