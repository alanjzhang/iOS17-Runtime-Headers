/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKExpressTransactionBannerHandleState : PKBannerHandleState <NSSecureCoding> {
    PKExpressTransactionState * _transactionState;
}

@property (nonatomic, readonly) PKExpressTransactionState *transactionState;

+ (id)createForTransactionState:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)transactionState;

@end