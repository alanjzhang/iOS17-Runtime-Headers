/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CoreML.framework/CoreML
 */

@interface MLFairPlayDecryptSession : NSObject {
    NSString * _modelPath;
    NSXPCConnection * _xpcConnection;
    NSObject<CoreMLModelSecurityProtocol> * _xpcProxy;
}

@property (nonatomic, copy) NSString *modelPath;
@property (nonatomic, retain) NSXPCConnection *xpcConnection;
@property (nonatomic, retain) NSObject<CoreMLModelSecurityProtocol> *xpcProxy;

+ (id)decryptSessionForModelAtPath:(id)arg1 usesCodeSigningIdentityForEncryption:(bool)arg2 keyBlob:(id)arg3 error:(id*)arg4;

- (void).cxx_destruct;
- (void)dealloc;
- (id)modelPath;
- (void)setModelPath:(id)arg1;
- (void)setXpcConnection:(id)arg1;
- (void)setXpcProxy:(id)arg1;
- (id)xpcConnection;
- (id)xpcProxy;

@end
