/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/TextInput.framework/TextInput
 */

@interface TIKeyboardInputManagerStub : NSObject <TIKeyboardInputManager>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)serverInterface;
+ (void)setArrayClassesForSelectorsInInterface:(id)arg1;

- (void)acceptingCandidateWithTrigger:(id)arg1;
- (void)addSupplementalLexicon:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)adjustPhraseBoundaryInForwardDirection:(bool)arg1 granularity:(int)arg2 keyboardState:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)adjustPhraseBoundaryInForwardDirection:(bool)arg1 keyboardState:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)candidateRejected:(id)arg1;
- (void)changingContextWithTrigger:(id)arg1;
- (void)generateAutocorrectionsWithKeyboardState:(id)arg1 candidateRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 completionHandler:(id /* block */)arg3;
- (void)generateAutocorrectionsWithKeyboardState:(id)arg1 candidateRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 requestToken:(id)arg3 completionHandler:(id /* block */)arg4;
- (void)generateAutocorrectionsWithKeyboardState:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)generateCandidatesWithKeyboardState:(id)arg1 candidateRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 completionHandler:(id /* block */)arg3;
- (void)generateCandidatesWithKeyboardState:(id)arg1 candidateRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 requestToken:(id)arg3 completionHandler:(id /* block */)arg4;
- (id)generateInlineCompletions:(id)arg1 withPrefix:(id)arg2;
- (void)generateRefinementsForCandidate:(id)arg1 keyboardState:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)generateReplacementsForString:(id)arg1 keyLayout:(id)arg2 continuation:(id /* block */)arg3;
- (void)handleAcceptedCandidate:(id)arg1 keyboardState:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)handleKeyboardInput:(id)arg1 keyboardState:(id)arg2 completionHandler:(id /* block */)arg3;
- (id)keyboardConfiguration;
- (void)lastAcceptedCandidateCorrected;
- (void)logDiscoverabilityEvent:(int)arg1 userInfo:(id)arg2;
- (void)performHitTestForTouchEvent:(id)arg1 keyboardState:(id)arg2 continuation:(id /* block */)arg3;
- (void)performHitTestForTouchEvents:(id)arg1 keyboardState:(id)arg2 continuation:(id /* block */)arg3;
- (void)registerLearning:(id)arg1 fullCandidate:(id)arg2 keyboardState:(id)arg3 mode:(id)arg4;
- (void)registerLearningForCompletion:(id)arg1 fullCompletion:(id)arg2 context:(id)arg3 prefix:(id)arg4 mode:(id)arg5;
- (void)removeSupplementalLexiconWithIdentifier:(unsigned long long)arg1;
- (void)setOriginalInput:(id)arg1;
- (void)skipHitTestForTouchEvent:(id)arg1 keyboardState:(id)arg2;
- (void)skipHitTestForTouchEvents:(id)arg1 keyboardState:(id)arg2;
- (void)smartSelectionForTextInDocument:(id)arg1 inRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg2 language:(id)arg3 tokenizedRanges:(id)arg4 options:(unsigned long long)arg5 completion:(id /* block */)arg6;
- (void)stickerWithIdentifier:(id)arg1 stickerRoles:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)syncToKeyboardState:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)textAccepted:(id)arg1;
- (void)textAccepted:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)writeTypologyLogWithCompletionHandler:(id /* block */)arg1;

@end
