/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
 */

@interface EFCancelationToken : EFInvocationToken <EFCancelable>

@property (getter=isCanceled, readonly) bool canceled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_descriptionString;
+ (id)tokenWithCancelationBlock:(id /* block */)arg1;
+ (id)tokenWithLabel:(id)arg1 cancelationBlock:(id /* block */)arg2;

- (void)addCancelable:(id)arg1;
- (void)addCancelationBlock:(id /* block */)arg1;
- (void)cancel;
- (bool)isCanceled;
- (void)removeAllCancelationBlocks;

@end
