/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKActivityEventTransaction : PKActivityEvent {
    PKPaymentTransaction * _transaction;
}

@property (nonatomic, readonly) PKPaymentTransaction *transaction;

- (void).cxx_destruct;
- (id)eventType;
- (unsigned long long)hash;
- (id)initWithTransaction:(id)arg1 unread:(bool)arg2;
- (bool)isEqualToActivityEvent:(id)arg1;
- (id)transaction;

@end