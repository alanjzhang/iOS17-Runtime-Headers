/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
 */

@interface TPSSavedTipEntry : NSObject <NSSecureCoding> {
    void lastUsedVersion;
    union { in /* Warning: Unrecognized filer type: 'u' using 'void*' */ void*x1; long x2; long x3; }  savedDate;
}

@property (nonatomic, copy) NSString *lastUsedVersion;
@property (nonatomic, copy) NSDate *savedDate;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithSavedDate:(id)arg1 lastUsedVersion:(id)arg2;
- (id)lastUsedVersion;
- (id)savedDate;
- (void)setLastUsedVersion:(id)arg1;
- (void)setSavedDate:(id)arg1;

@end
