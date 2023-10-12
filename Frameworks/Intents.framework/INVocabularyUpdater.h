/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Intents.framework/Intents
 */

@interface INVocabularyUpdater : _INVocabularyConnection

+ (id)_sharedAppInstance;
+ (void)clearAllCustomVocabulary;
+ (void)clearAllCustomVocabularyOnBehalfOf:(id)arg1;

- (void)setCustomPhotoAlbumNames:(id)arg1;
- (void)setValidatedVocabulary:(id)arg1 forIntentSlot:(id)arg2 onBehalfOf:(id)arg3 validationCompletion:(id /* block */)arg4;
- (void)setValidatedVocabulary:(id)arg1 forIntentSlot:(id)arg2 validationCompletion:(id /* block */)arg3;

@end
