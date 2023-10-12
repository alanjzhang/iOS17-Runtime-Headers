/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFApplicationContextSnapshot : NSObject <AFContextSnapshot, NSCopying, NSSecureCoding> {
    NSArray * _applicationContexts;
}

@property (nonatomic, readonly, copy) NSArray *applicationContexts;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)newWithBuilder:(id /* block */)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_descriptionWithIndent:(unsigned long long)arg1;
- (id)applicationContexts;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithApplicationContexts:(id)arg1;
- (id)initWithBuilder:(id /* block */)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;

// AFApplicationContextSnapshot (AFApplicationContextSnapshotMutability)

- (id)mutatedCopyWithMutator:(id /* block */)arg1;

// AFApplicationContextSnapshot (ContextSnapshot)

- (id)initWithSerializedBackingStore:(id)arg1;
- (id)serializedBackingStore;

@end
