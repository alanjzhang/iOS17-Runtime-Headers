/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/IDSFoundation.framework/IDSFoundation
 */

@interface IDSCancelMessage : IDSMessage {
    NSString * _fromID;
    NSString * _queueOneIdentifier;
}

@property (nonatomic, retain) NSString *fromID;
@property (nonatomic, retain) NSString *queueOneIdentifier;

- (void).cxx_destruct;
- (long long)command;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)fromID;
- (id)initWithQueueOneIdentifier:(id)arg1 fromID:(id)arg2;
- (id)messageBody;
- (id)queueOneIdentifier;
- (void)setFromID:(id)arg1;
- (void)setQueueOneIdentifier:(id)arg1;

@end
