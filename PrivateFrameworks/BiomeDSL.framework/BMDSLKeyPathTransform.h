/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/BiomeDSL.framework/BiomeDSL
 */

@interface BMDSLKeyPathTransform : BMDSLBaseCodable <BMDSLTransform> {
    NSString * _keyPath;
}

@property (nonatomic, readonly, copy) NSString *keyPath;

+ (bool)supportsSecureCoding;
+ (id)withKeyPath:(id)arg1;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeyPath:(id)arg1;
- (id)initWithKeyPath:(id)arg1 name:(id)arg2 version:(unsigned int)arg3;
- (id)keyPath;
- (id)transformInput:(id)arg1 combinedState:(id)arg2;

@end
