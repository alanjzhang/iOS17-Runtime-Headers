/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/TextComposer.framework/TextComposer
 */

@interface TCGECMLMModel : NSObject <TCGECModel> {
    NSDictionary * _acceptableCorrections;
    unsigned long long  _lmVocabSize;
    struct CoreLanguageModelWithState { } * _maskedLM;
}

// TCGECMLMModel (null)

- (void).cxx_destruct;
- (void)dealloc;
- (void)enumerateIssuesForSentence:(id)arg1 checkTermination:(bool)arg2 withBlock:(id /* block */)arg3;
- (id)initWithModelPath:(id)arg1 OTABundlePath:(id)arg2 options:(id)arg3;
- (bool)loadCorrectionsFromURL:(id)arg1;

@end
