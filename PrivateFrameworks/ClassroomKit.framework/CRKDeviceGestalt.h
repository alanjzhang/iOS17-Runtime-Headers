/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKDeviceGestalt : NSObject <NSSecureCoding> {
    unsigned long long  _platform;
    NSString * _systemVersion;
}

@property (nonatomic, readonly) unsigned long long platform;
@property (nonatomic, readonly, copy) NSString *systemVersion;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDevice:(id)arg1;
- (id)initWithPlatform:(unsigned long long)arg1 systemVersion:(id)arg2;
- (unsigned long long)platform;
- (id)systemVersion;

@end
