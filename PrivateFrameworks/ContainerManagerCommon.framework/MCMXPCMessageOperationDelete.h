/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ContainerManagerCommon.framework/ContainerManagerCommon
 */

@interface MCMXPCMessageOperationDelete : MCMXPCMessageWithConcreteContainersArrayBase <MCMParametersOperationDelete> {
    bool  _waitForDiskSpaceReclaim;
}

@property (nonatomic, readonly) bool waitForDiskSpaceReclaim;

- (id)initWithXPCObject:(id)arg1 context:(id)arg2 error:(unsigned long long*)arg3;
- (bool)waitForDiskSpaceReclaim;

@end
