/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSPurchaseQueueBatchList : NSObject {
    AMSThreadSafeObject * _backingArray;
}

@property (nonatomic, retain) AMSThreadSafeObject *backingArray;

- (void).cxx_destruct;
- (void)appendBatch:(id)arg1;
- (id)backingArray;
- (id)batchForPurchase:(id)arg1;
- (unsigned long long)count;
- (id)init;
- (id)nextPurchase;
- (void)popBatch:(id)arg1;
- (void)setBackingArray:(id)arg1;

@end
