/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
 */

@interface _AKMessageForwarder : NSObject <AKAdaptiveServiceInterface> {
    id  _strongReceiver;
    id  _weakReceiver;
}

- (void).cxx_destruct;
- (void)activate;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (id)initWithReceiver:(id)arg1 strong:(bool)arg2;
- (id)initWithStrongReceiver:(id)arg1;
- (id)initWithWeakReceiver:(id)arg1;

@end
