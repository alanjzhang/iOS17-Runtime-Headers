/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CBORLibrary.framework/CBORLibrary
 */

@interface COSE_Mac0 : COSE {
    NSData * _mac;
}

@property (nonatomic, readonly) NSData *mac;

- (void).cxx_destruct;
- (id)description;
- (id)generateMessageForMACWithApplicationProtectedAttributes:(id)arg1;
- (id)initWithCBOR:(id)arg1;
- (id)initWithProtectedHeaders:(id)arg1 unprotectedHeaders:(id)arg2 payload:(id)arg3 tag:(id)arg4;
- (id)mac;

@end
