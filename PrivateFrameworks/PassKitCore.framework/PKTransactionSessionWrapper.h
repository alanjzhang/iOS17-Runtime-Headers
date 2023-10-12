/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKTransactionSessionWrapper : NSObject {
    unsigned long long  _firstInQueue;
}

@property (getter=isFirstInQueue, nonatomic) bool firstInQueue;

- (void)endSession;
- (void)endSessionWithCompletion:(id /* block */)arg1;
- (bool)isFirstInQueue;
- (void)setFirstInQueue:(bool)arg1;

@end
