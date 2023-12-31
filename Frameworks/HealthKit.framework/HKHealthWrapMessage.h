/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/HealthKit.framework/HealthKit
 */

@interface HKHealthWrapMessage : NSObject <_HKStreamingDestination> {
    struct __SecCertificate { } * _certificate;
    bool  _compressionEnabled;
    _HKCompressionEngine * _compressionEngine;
    HKHealthWrapMessageConfiguration * _configuration;
    NSObject<OS_dispatch_queue> * _encryptQueue;
    HKHealthWrapEncryptor * _encryptor;
    NSError * _lastError;
    bool  _lastSuccess;
    NSOutputStream * _outputStream;
    NSURL * _outputURL;
    HKHealthWrapCodablePayloadHeader * _payloadHeader;
    NSUUID * _studyUUID;
}

@property (nonatomic, readonly) HKHealthWrapMessageConfiguration *configuration;

+ (id)newOutputFileURL;
+ (id)newOutputFileURLInDirectory:(id)arg1;

- (void).cxx_destruct;
- (void)_cleanup;
- (id)_codableKeyValuePairsFromDictionary:(id)arg1;
- (void)_finalize;
- (bool)_run:(id /* block */)arg1 error:(id*)arg2;
- (void)_writeDataToCompressor:(id)arg1;
- (bool)appendData:(id)arg1 error:(id*)arg2;
- (bool)appendDataFromFileURL:(id)arg1 error:(id*)arg2;
- (id)configuration;
- (void)dealloc;
- (id)finalizeWithError:(id*)arg1;
- (id)initWithConfiguration:(id)arg1;
- (id)initWithSenderUUID:(id)arg1 studyUUID:(id)arg2 channel:(id)arg3 payloadType:(id)arg4 startDate:(id)arg5 endDate:(id)arg6 payloadIdentifier:(id)arg7 applicationData:(id)arg8 certificate:(struct __SecCertificate { }*)arg9;
- (void)receiveSinkContent:(id)arg1;
- (void)reset;
- (void)sinkContentFinished;
- (bool)startWithError:(id*)arg1;
- (bool)startWithOutputFileURL:(id)arg1 error:(id*)arg2;

@end
