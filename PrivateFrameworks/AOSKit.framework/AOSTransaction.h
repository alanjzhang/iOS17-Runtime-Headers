/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AOSKit.framework/AOSKit
 */

@interface AOSTransaction : NSObject <NSCoding> {
    id /* block */  callbackBlock;
    int (* callbackFunction;
    NSObject<OS_dispatch_queue> * callbackQueue;
    void * context;
    int (* contextRelease;
    int (* contextRetain;
    unsigned char  didFinish;
    unsigned char  didSucceed;
    struct __CFError { } * error;
    void * result;
    NSConditionLock * waitLock;
}

- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (void)finalize;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isSuccessful;
- (id)result;

@end
