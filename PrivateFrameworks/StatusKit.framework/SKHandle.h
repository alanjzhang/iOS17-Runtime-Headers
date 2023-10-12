/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/StatusKit.framework/StatusKit
 */

@interface SKHandle : NSObject <NSCopying, NSSecureCoding> {
    NSString * _handleString;
}

@property (nonatomic, readonly) NSString *handleString;
@property (nonatomic, readonly) NSString *idsDestination;
@property (nonatomic, readonly) NSString *normalizedHandleString;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/StatusKit.framework/StatusKit

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)handleString;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithString:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isExactlyEqualToHandle:(id)arg1;

// SKHandle (Deprecated)

- (id)initWithString:(id)arg1 mergeID:(id)arg2;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/StatusKitAgentCore.framework/StatusKitAgentCore

// SKHandle (StatusKitAgent)

- (id)idsDestination;
- (bool)isNormalizedEqualToHandle:(id)arg1;
- (id)normalizedHandleString;

@end
