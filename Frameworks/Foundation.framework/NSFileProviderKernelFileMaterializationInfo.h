/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSFileProviderKernelFileMaterializationInfo : NSObject <NSSecureCoding> {
    long long  offset;
    long long  size;
}

@property (readonly) long long offset;
@property (readonly) long long size;

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSize:(long long)arg1 offset:(long long)arg2;
- (long long)offset;
- (long long)size;

@end
