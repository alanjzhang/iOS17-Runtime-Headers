/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AVFCapture.framework/AVFCapture
 */

@interface AVExternalStorageDevice : NSObject {
    struct __CFURL { } * _baseURL;
    struct __CFString { } * _displayName;
    struct __CFString { } * _figExternalStorageDeviceUUID;
    struct __CFArray { } * _nextAvailableURLArray;
    struct __CFString { } * _uniqueIdentifier;
}

@property (getter=isConnected, nonatomic, readonly) bool connected;
@property (nonatomic, readonly) NSString *displayName;
@property (nonatomic, readonly) long long freeSize;
@property (getter=isNotRecommendedForCaptureUse, nonatomic, readonly) bool notRecommendedForCaptureUse;
@property (nonatomic, readonly) long long totalSize;
@property (nonatomic, readonly) NSUUID *uuid;

- (id)_uniqueIdentifier;
- (id)baseURL;
- (void)dealloc;
- (id)displayName;
- (id)figExternalStorageDeviceUUID;
- (long long)freeSize;
- (bool)isConnected;
- (bool)isNotRecommendedForCaptureUse;
- (id)nextAvailableURLsWithPathExtensions:(id)arg1 error:(id*)arg2;
- (long long)totalSize;
- (id)uuid;

// AVExternalStorageDevice (AVExternalStorageDeviceAuthorization)

+ (long long)authorizationStatus;
+ (void)requestAccessWithCompletionHandler:(id /* block */)arg1;

@end