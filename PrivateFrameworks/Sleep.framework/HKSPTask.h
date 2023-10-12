/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/Sleep.framework/Sleep
 */

@interface HKSPTask : NSObject <HKSPCancelable> {
    id /* block */  _cancelableBlock;
    double  _delay;
    NSString * _identifier;
    NACancelationToken * _token;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) double delay;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly) bool isCanceled;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)cancel;
- (double)delay;
- (void)execute;
- (id)identifier;
- (id)initWithBlock:(id /* block */)arg1;
- (id)initWithBlock:(id /* block */)arg1 delay:(double)arg2;
- (id)initWithIdentifier:(id)arg1 block:(id /* block */)arg2;
- (id)initWithIdentifier:(id)arg1 block:(id /* block */)arg2 delay:(double)arg3;
- (bool)isCanceled;

@end