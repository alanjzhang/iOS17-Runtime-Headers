/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
 */

@interface DMFEchoResultObject : CATTaskResultObject {
    NSString * _echo;
    NSString * _resultStatus;
}

@property (nonatomic, copy) NSString *echo;
@property (nonatomic, copy) NSString *resultStatus;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (id)echo;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)resultStatus;
- (void)setEcho:(id)arg1;
- (void)setResultStatus:(id)arg1;

@end