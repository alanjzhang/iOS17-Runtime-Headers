/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKDeserializeRecordModificationsOperationInfo : CKDatabaseOperationInfo <NSSecureCoding> {
    NSData * _serializedModifications;
}

@property (nonatomic, retain) NSData *serializedModifications;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)serializedModifications;
- (void)setSerializedModifications:(id)arg1;

@end