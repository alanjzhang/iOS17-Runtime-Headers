/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
 */

@interface TKSmartCardUserInteractionForConfirmation : TKSmartCardUserInteraction <NSSecureCoding> {
    bool  _result;
    TKSmartCardSlot * _slot;
}

@property bool result;
@property TKSmartCardSlot *slot;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)result;
- (void)runWithReply:(id /* block */)arg1;
- (void)setResult:(bool)arg1;
- (void)setSlot:(id)arg1;
- (id)slot;

@end
