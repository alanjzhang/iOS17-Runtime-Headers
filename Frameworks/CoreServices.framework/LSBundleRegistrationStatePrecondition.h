/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CoreServices.framework/CoreServices
 */

@interface LSBundleRegistrationStatePrecondition : LSPrecondition {
    NSString * _bundleID;
    NSNumber * _fullAppInstalled;
    NSNumber * _placeholderInstalled;
}

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initForBundleWithIdentifier:(id)arg1 placeholderInstalled:(id)arg2 fullApplicationInstalled:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (bool)isMet;

@end
