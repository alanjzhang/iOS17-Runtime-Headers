/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
 */

@interface CRRegisterMultiValue : CRRegister {
    NSSet * _cachedValues;
    CRSet * _values;
}

@property (nonatomic, retain) NSSet *cachedValues;
@property (nonatomic, retain) CRSet *values;

- (void).cxx_destruct;
- (id)allContents;
- (id)cachedValues;
- (id)contents;
- (id)deltaSince:(id)arg1 in:(id)arg2;
- (id)description;
- (void)encodeWithCRCoder:(id)arg1;
- (id)initWithCRCoder:(id)arg1;
- (id)initWithContents:(id)arg1 document:(id)arg2;
- (id)initWithValues:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)mergeWith:(id)arg1;
- (void)mergeWithRegisterMultiValue:(id)arg1;
- (void)setCachedValues:(id)arg1;
- (void)setContents:(id)arg1;
- (void)setDocument:(id)arg1;
- (void)setValues:(id)arg1;
- (id)values;
- (void)walkGraph:(id /* block */)arg1;

@end
