/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ProactiveExperiments.framework/ProactiveExperiments
 */

@interface PREExperimentResolver : NSObject <PREExperimentResolverProtocol> {
    _PASLock * _guardedSmartReplyConfig;
    NSDictionary * _smartReplyLangAndNamespaces;
    TRIClient * _trialClient;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSDictionary *smartReplyLangAndNamespaces;
@property (readonly) Class superclass;

+ (id)sharedInstance;
+ (id)sharedQueue;

- (void).cxx_destruct;
- (id)_getDefaultResponseSuggestionsExperimentConfig:(id)arg1;
- (id)getResponseSuggestionsExperimentConfig:(id)arg1 shouldDownloadAssets:(bool)arg2;
- (id)init;
- (id)smartReplyLangAndNamespaces;
- (void)warmupForLocale:(id)arg1;

@end
