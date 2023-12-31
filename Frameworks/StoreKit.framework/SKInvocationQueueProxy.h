/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/StoreKit.framework/StoreKit
 */

@interface SKInvocationQueueProxy : NSObject {
    NSMutableArray * _invocationQueue;
    id  _invocationTarget;
    Protocol * _protocol;
}

@property (nonatomic, retain) id invocationTarget;

- (void).cxx_destruct;
- (void)forwardInvocation:(id)arg1;
- (id)initWithProtocol:(id)arg1;
- (id)invocationTarget;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)setInvocationTarget:(id)arg1;

@end
