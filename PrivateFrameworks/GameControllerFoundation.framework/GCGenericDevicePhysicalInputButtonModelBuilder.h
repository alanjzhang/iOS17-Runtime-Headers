/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/GameControllerFoundation.framework/GameControllerFoundation
 */

@interface GCGenericDevicePhysicalInputButtonModelBuilder : GCGenericDevicePhysicalInputElementModelBuilder {
    long long  _sourceExtendedEventFieldIndex;
}

@property (nonatomic) long long sourceExtendedEventFieldIndex;

+ (Class)modelClass;

- (id)build;
- (void)initializeWithModel:(id)arg1;
- (void)reset;
- (void)setSourceExtendedEventFieldIndex:(long long)arg1;
- (long long)sourceExtendedEventFieldIndex;

// GCGenericDevicePhysicalInputButtonModelBuilder (Serialization)

- (id)initWithDictionaryRepresentation:(id)arg1 error:(out id*)arg2;

@end