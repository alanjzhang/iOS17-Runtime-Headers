/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKPaymentAuthorizationErrorStateParam : PKPaymentAuthorizationStateParam {
    bool  _clientFailure;
    NSError * _error;
}

@property (getter=isClientFailure, nonatomic) bool clientFailure;
@property (nonatomic, retain) NSError *error;

+ (id)paramWithError:(id)arg1;
+ (id)paramWithError:(id)arg1 clientFailure:(bool)arg2;

- (void).cxx_destruct;
- (id)description;
- (id)error;
- (bool)isClientFailure;
- (void)setClientFailure:(bool)arg1;
- (void)setError:(id)arg1;

@end
