/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
 */

@interface AVStreamDataParser : NSObject <AVContentKeyRecipient, AVContentKeySessionDelegate, AVIntegrityChecking> {
    AVStreamDataParserInternal * _parser;
}

@property (nonatomic, copy) NSArray *allowableMIMETypes;
@property (nonatomic, readonly) AVAsset *asset;
@property (readonly) NSData *contentProtectionSessionIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (getter=isDefunct, nonatomic, readonly) bool defunct;
@property (nonatomic, readonly) <AVStreamDataParserOutputHandling> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) NSError *error;
@property (nonatomic, readonly) NSArray *fullListOfAllowableMIMETypes;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) bool mayRequireContentKeysForMediaDataProcessing;
@property (nonatomic) bool preferSandboxedParsing;
@property (readonly) long long status;
@property (readonly) long long status2;
@property (readonly) Class superclass;

+ (id)audiovisualMIMETypes;
+ (bool)canParseExtendedMIMEType:(id)arg1;

- (void)_appendStreamData:(struct OpaqueCMBlockBuffer { }*)arg1 withFlags:(unsigned long long)arg2;
- (void)_configureInternal;
- (void)_createAssetIfNecessary;
- (void)_setError:(id)arg1;
- (void)_willDeallocOrFinalize;
- (id)allowableMIMETypes;
- (void)appendStreamData:(id)arg1;
- (void)appendStreamData:(id)arg1 withFlags:(unsigned long long)arg2;
- (id)asset;
- (void)dealloc;
- (id)delegate;
- (id)error;
- (id)fullListOfAllowableMIMETypes;
- (id)init;
- (void)providePendingMediaData;
- (void)setAllowableMIMETypes:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setShouldProvideMediaData:(bool)arg1 forTrackID:(int)arg2;
- (void)setStatus:(long long)arg1;
- (bool)shouldProvideMediaDataForTrackID:(int)arg1;
- (long long)status;
- (long long)status2;

// AVStreamDataParser (AVIntegrityChecking)

- (bool)isDefunct;

// AVStreamDataParser (AVStreamDataParserContentKeyEligibility)

- (int)_attachToContentKeySession:(id)arg1 contentKeyBoss:(struct CMBaseObject { }*)arg2 failedSinceAlreadyAttachedToAnotherSession:(bool*)arg3;
- (bool)mayRequireContentKeysForMediaDataProcessing;

// AVStreamDataParser (AVStreamDataParserSandboxedParsing)

- (bool)preferSandboxedParsing;
- (void)setPreferSandboxedParsing:(bool)arg1;

// AVStreamDataParser (AVStreamDataParserTypeSupport)

+ (id)outputMIMECodecParameterForInputMIMECodecParameter:(id)arg1;

// AVStreamDataParser (AVStreamDataParserUnitTestOnly)

- (id)initInternalUnitTestOnly;

// AVStreamDataParser (AVStreamDataParser_ContentKeyRequestSupport)

- (id)contentProtectionSessionIdentifier;
- (void)processContentKeyResponseData:(id)arg1 forTrackID:(int)arg2;
- (void)processContentKeyResponseError:(id)arg1 forTrackID:(int)arg2;
- (void)renewExpiringContentKeyResponseDataForTrackID:(int)arg1;
- (id)streamingContentKeyRequestDataForApp:(id)arg1 contentIdentifier:(id)arg2 trackID:(int)arg3 options:(id)arg4 error:(id*)arg5;

// AVStreamDataParser (AVStreamDataParser_ContentKeySessionDelegate)

- (void)contentKeySession:(id)arg1 didProvideContentKeyRenewalRequest:(id)arg2;
- (void)contentKeySession:(id)arg1 didProvideContentKeyRequest:(id)arg2;
- (void)contentKeySessionContentProtectionSessionIdentifierDidChange:(id)arg1;

// AVStreamDataParser (AVStreamDataParser_FigManifold)

+ (struct OpaqueCMBlockBuffer { }*)_createBlockBufferUsingNSData:(id)arg1 withOffset:(unsigned long long)arg2 withLength:(unsigned long long)arg3;
+ (id)_createNSDataWithBlockBuffer:(struct OpaqueCMBlockBuffer { }*)arg1;

- (bool)_ICYIsAllowed;
- (bool)_MPEG2TSIsAllowed;
- (bool)_MovieFragmentStreamIsAllowed;
- (bool)_WebVTTIsAllowed;
- (int)_createFigManifold:(struct OpaqueCMBlockBuffer { }*)arg1 manifold:(struct OpaqueFigManifold {}**)arg2;
- (int)_createFigManifoldWithBlockBuffer:(struct OpaqueCMBlockBuffer { }*)arg1 manifold:(struct OpaqueFigManifold {}**)arg2;
- (int)_figManifold:(struct OpaqueFigManifold { }*)arg1 discoveredNewTrackID:(int)arg2 mediaType:(id)arg3;
- (int)_figManifold:(struct OpaqueFigManifold { }*)arg1 formatDescription:(struct opaqueCMFormatDescription { }*)arg2 orDecryptorDidChange:(void*)arg3 forTrackID:(int)arg4;
- (int)_figManifold:(struct OpaqueFigManifold { }*)arg1 pushedSampleBuffer:(struct opaqueCMSampleBuffer { }*)arg2 trackID:(int)arg3 flags:(unsigned int)arg4;
- (int)_figManifold:(struct OpaqueFigManifold { }*)arg1 trackDidEnd:(int)arg2;
- (void)_figManifoldAllNewTracksReady:(struct OpaqueFigManifold { }*)arg1;
- (id)_fullListOfAllowableMIMETypes;
- (int)_registerForFigManifoldCallbacksForTrackID:(int)arg1;
- (int)_unregisterForFigManifoldCallbacksForTrackID:(int)arg1;

// AVStreamDataParser (AVStreamDataParser_Internal)

- (bool)_attachedToExternalContentKeySession;
- (id)contentKeySession;
- (void)expire;
- (bool)hasProtector;
- (void)setSession:(id)arg1;

@end
