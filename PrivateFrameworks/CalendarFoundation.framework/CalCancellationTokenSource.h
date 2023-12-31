/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
 */

@interface CalCancellationTokenSource : NSObject <CalCancellationToken> {
    _Atomic bool  _isCancelled;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool isCancelled;
@property (readonly) Class superclass;
@property (nonatomic, readonly) <CalCancellationToken> *token;

- (void)cancel;
- (bool)isCancelled;
- (id)token;

@end
