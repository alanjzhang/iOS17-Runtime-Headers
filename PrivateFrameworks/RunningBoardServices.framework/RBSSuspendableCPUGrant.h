/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices
 */

@interface RBSSuspendableCPUGrant : RBSGrant {
    unsigned char  _role;
}

@property (nonatomic, readonly) unsigned char role;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/RunningBoardServices.framework/RunningBoardServices

+ (id)grantWithRole:(unsigned char)arg1;

- (id)description;
- (void)encodeWithRBSXPCCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithRBSXPCCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (unsigned char)role;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard

// RBSSuspendableCPUGrant (RBProcessState)

- (void)applyToProcessState:(id)arg1 attributePath:(unsigned long long)arg2 context:(id)arg3;
- (bool)isValidForContext:(id)arg1 withError:(id*)arg2;

@end
