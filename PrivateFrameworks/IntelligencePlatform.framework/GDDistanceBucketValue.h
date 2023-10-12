/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/IntelligencePlatform.framework/IntelligencePlatform
 */

@interface GDDistanceBucketValue : NSObject <NSCopying, NSSecureCoding> {
    long long  _bucket;
    double  _bucketValue;
}

@property (nonatomic, readonly) long long bucket;
@property (nonatomic, readonly) double bucketValue;

+ (bool)supportsSecureCoding;

- (long long)bucket;
- (double)bucketValue;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithBucket:(long long)arg1 bucketValue:(double)arg2;
- (id)initWithCoder:(id)arg1;

@end
