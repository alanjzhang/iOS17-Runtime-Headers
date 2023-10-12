/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CoreServices.framework/CoreServices
 */

@interface LSPrecondition : NSObject <NSSecureCoding>

+ (id)emptyPrecondition;
+ (id)registrationStatePreconditionForBundleWithIdentifier:(id)arg1 placeholderInstalled:(id)arg2 fullApplicationInstalled:(id)arg3;
+ (bool)supportsSecureCoding;

- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isMet;

@end
