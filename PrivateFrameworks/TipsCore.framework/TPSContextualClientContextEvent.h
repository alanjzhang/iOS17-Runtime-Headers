/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
 */

@interface TPSContextualClientContextEvent : TPSContextualEvent {
    NSArray * _conditions;
}

@property (nonatomic, copy) NSArray *conditions;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)clientContextKeys;
- (id)conditions;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (void)setConditions:(id)arg1;

@end