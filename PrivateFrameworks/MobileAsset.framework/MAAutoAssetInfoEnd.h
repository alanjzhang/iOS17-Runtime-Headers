/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/MobileAsset.framework/MobileAsset
 */

@interface MAAutoAssetInfoEnd : NSObject <NSSecureCoding> {
    long long  _endLockCount;
    NSString * _endLockReason;
}

@property (nonatomic, readonly) long long endLockCount;
@property (nonatomic, readonly, retain) NSString *endLockReason;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (long long)endLockCount;
- (id)endLockReason;
- (id)initWithCoder:(id)arg1;
- (id)initWithLockReason:(id)arg1 endingLockCount:(long long)arg2;
- (id)summary;

@end
