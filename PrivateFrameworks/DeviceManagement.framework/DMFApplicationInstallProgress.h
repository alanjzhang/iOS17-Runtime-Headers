/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@interface DMFApplicationInstallProgress : NSObject <NSCopying, NSSecureCoding> {
    double  _fractionCompleted;
    unsigned long long  _phase;
    unsigned long long  _state;
}

@property (nonatomic, readonly) double fractionCompleted;
@property (nonatomic, readonly) unsigned long long phase;
@property (nonatomic, readonly) unsigned long long state;

+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (double)fractionCompleted;
- (id)initWithCoder:(id)arg1;
- (id)initWithState:(unsigned long long)arg1 phase:(unsigned long long)arg2 fractionCompleted:(double)arg3;
- (bool)isEqual:(id)arg1;
- (unsigned long long)phase;
- (unsigned long long)state;

@end
