/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface UIRuntimeEventConnection : UIRuntimeConnection {
    unsigned long long  eventMask;
}

@property (readonly) SEL action;
@property unsigned long long eventMask;
@property (readonly) id target;

- (SEL)action;
- (void)connect;
- (void)connectForSimulator;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)eventMask;
- (id)initWithCoder:(id)arg1;
- (void)setEventMask:(unsigned long long)arg1;
- (id)target;

@end
