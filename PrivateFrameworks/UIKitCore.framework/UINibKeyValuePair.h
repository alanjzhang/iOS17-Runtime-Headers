/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UINibKeyValuePair : NSObject {
    NSString * keyPath;
    id  object;
    id  value;
}

@property (nonatomic, readonly, copy) NSString *keyPath;
@property (nonatomic, readonly) id object;
@property (nonatomic, readonly) id value;

- (void).cxx_destruct;
- (void)apply;
- (void)applyForSimulator;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithObject:(id)arg1 keyPath:(id)arg2 value:(id)arg3;
- (id)keyPath;
- (id)object;
- (id)value;

@end
