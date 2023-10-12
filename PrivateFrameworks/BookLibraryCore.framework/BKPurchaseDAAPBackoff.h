/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/BookLibraryCore.framework/BookLibraryCore
 */

@interface BKPurchaseDAAPBackoff : NSObject {
    NSDate * _backoffUntil;
    long long  _failureCount;
}

@property (nonatomic, retain) NSDate *backoffUntil;
@property (nonatomic) long long failureCount;

- (void).cxx_destruct;
- (id)backoffUntil;
- (void)clear;
- (long long)failureCount;
- (bool)failureIntervals:(unsigned long long)arg1;
- (bool)hasBackedOff;
- (void)setBackoffUntil:(id)arg1;
- (void)setFailureCount:(long long)arg1;

@end