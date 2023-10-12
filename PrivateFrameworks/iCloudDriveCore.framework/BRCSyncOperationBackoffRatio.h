/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
 */

@interface BRCSyncOperationBackoffRatio : NSObject <NSSecureCoding> {
    unsigned long long  _failedSyncOperations;
    unsigned long long  _totalSyncOperations;
}

+ (bool)supportsSecureCoding;

- (float)backoffRatio;
- (void)clear;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (void)newSyncOperationWithError:(id)arg1;

@end
