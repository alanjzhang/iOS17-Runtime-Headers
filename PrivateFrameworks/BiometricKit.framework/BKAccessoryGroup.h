/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/BiometricKit.framework/BiometricKit
 */

@interface BKAccessoryGroup : NSObject {
    BKDevice * _device;
    NSString * _name;
}

@property (nonatomic, readonly) BKDevice *device;
@property (nonatomic, readonly, copy) NSString *name;

- (void).cxx_destruct;
- (id)accessoriesWithError:(id*)arg1;
- (id)connectedAccessoriesWithError:(id*)arg1;
- (id)device;
- (bool)isEqualToAccessoryGroup:(id)arg1;
- (id)name;

@end
