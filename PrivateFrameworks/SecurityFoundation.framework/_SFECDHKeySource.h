/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

@interface _SFECDHKeySource : NSObject {
    id  _ecdhKeySourceInternal;
}

@property (nonatomic, retain) _SFECKeyPair *localKeyPair;
@property (nonatomic, retain) _SFECPublicKey *remotePublicKey;

- (void).cxx_destruct;
- (id)initWithLocalKeyPair:(id)arg1 remotePublickKey:(id)arg2;
- (id)localKeyPair;
- (id)remotePublicKey;
- (void)setLocalKeyPair:(id)arg1;
- (void)setRemotePublicKey:(id)arg1;

@end
