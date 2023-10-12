/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface SpeechModelTrainingClient : NSObject {
    NSXPCConnection * _smtConnection;
}

+ (void)initialize;

- (void).cxx_destruct;
- (id)_serviceProxyWithErrorHandler:(id /* block */)arg1;
- (void)buildPhoneticMatchWithLanguage:(id)arg1 saveIntermediateFsts:(bool)arg2 completion:(id /* block */)arg3;
- (void)dealloc;
- (void)generateAudioWithTexts:(id)arg1 language:(id)arg2 completion:(id /* block */)arg3;
- (void)generateConfusionPairsWithUUID:(id)arg1 parameters:(id)arg2 language:(id)arg3 task:(id)arg4 samplingRate:(unsigned long long)arg5 recognizedTokens:(id)arg6 recognizedText:(id)arg7 correctedText:(id)arg8 selectedAlternatives:(id)arg9 completion:(id /* block */)arg10;
- (id)init;
- (id)initWithServiceName:(id)arg1;
- (void)invalidate;
- (void)trainGlobalNNLMwithFidesSessionURL:(id)arg1 completion:(id /* block */)arg2;
- (void)trainPersonalizedLMWithLanguage:(id)arg1 configuration:(id)arg2 asset:(id)arg3 directory:(id)arg4 completion:(id /* block */)arg5;
- (void)trainPersonalizedLMWithLanguage:(id)arg1 configuration:(id)arg2 asset:(id)arg3 fides:(bool)arg4 activity:(id)arg5 completion:(id /* block */)arg6;
- (void)trainPersonalizedLMWithLanguage:(id)arg1 configuration:(id)arg2 fides:(bool)arg3 activity:(id)arg4 completion:(id /* block */)arg5;
- (void)trainPersonalizedLMWithLanguage:(id)arg1 directory:(id)arg2 completion:(id /* block */)arg3;
- (void)upperCaseString:(id)arg1 completion:(id /* block */)arg2;
- (void)xpcExitClean;

@end
