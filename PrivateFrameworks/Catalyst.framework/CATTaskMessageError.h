/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/Catalyst.framework/Catalyst
 */

@interface CATTaskMessageError : CATTaskMessage {
    NSError * _taskError;
}

@property (nonatomic, retain) NSError *taskError;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTaskUUID:(id)arg1 taskError:(id)arg2;
- (void)setTaskError:(id)arg1;
- (id)taskError;

@end
