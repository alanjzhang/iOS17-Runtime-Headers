/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/NaturalLanguage.framework/NaturalLanguage
 */

@interface NLLMSLanguageModel : NLLanguageModel {
    struct LanguageModel { 
        struct unique_ptr<language_modeling::LanguageModelImpl, std::default_delete<language_modeling::LanguageModelImpl>> { 
            struct __compressed_pair<language_modeling::LanguageModelImpl *, std::default_delete<language_modeling::LanguageModelImpl>> { 
                struct LanguageModelImpl {} *__value_; 
            } __ptr_; 
        } m_impl; 
    }  _model;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void*)_underlyingModel;
- (bool)generatesPredictions;
- (id)initWithLocalization:(id)arg1 options:(id)arg2;
- (id)sessionWithOptions:(id)arg1;

@end
