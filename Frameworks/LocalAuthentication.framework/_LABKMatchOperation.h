/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/LocalAuthentication.framework/LocalAuthentication
 */

@interface _LABKMatchOperation : _LABKOperation <BKMatchOperationDelegate>

@property (nonatomic, readonly) BKMatchOperation *_BKMatchOperation;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <BKMatchOperationDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)_BKMatchOperation;
- (id)delegate;
- (void)matchOperation:(id)arg1 failedWithReason:(long long)arg2;
- (void)matchOperation:(id)arg1 matchedWithResult:(id)arg2;
- (void)matchOperation:(id)arg1 presenceDetectedInLockout:(long long)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4;

@end
