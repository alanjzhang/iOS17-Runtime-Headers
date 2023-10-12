/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVFairPlaySAPContext : NSObject {
    bool  _complete;
}

@property (getter=isComplete, nonatomic, readonly) bool complete;

- (void)_teardownSession;
- (void)dealloc;
- (id)exchangeData:(id)arg1 error:(id*)arg2;
- (id)initWithSAPVersion:(long long)arg1;
- (bool)isComplete;
- (id)primingSignatureForData:(id)arg1 error:(id*)arg2;
- (id)signData:(id)arg1 error:(id*)arg2;
- (bool)verifyPrimeSignature:(id)arg1 error:(id*)arg2;
- (bool)verifySignature:(id)arg1 forData:(id)arg2 error:(id*)arg3;

@end
