/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SystemStatus.framework/SystemStatus
 */

@interface STStatusBarDataBoolImageEntry : STStatusBarDataImageEntry {
    bool  _boolValue;
}

@property (nonatomic, readonly) bool boolValue;

+ (id)entryWithImageNamed:(id)arg1 boolValue:(bool)arg2;
+ (bool)supportsBSXPCSecureCoding;
+ (bool)supportsSecureCoding;

- (id)_equalsBuilderWithObject:(id)arg1;
- (id)_hashBuilder;
- (bool)boolValue;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBSXPCCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)succinctDescriptionBuilder;

@end
