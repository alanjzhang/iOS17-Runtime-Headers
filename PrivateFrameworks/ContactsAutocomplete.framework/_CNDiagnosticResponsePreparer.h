/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ContactsAutocomplete.framework/ContactsAutocomplete
 */

@interface _CNDiagnosticResponsePreparer : _CNAutocompleteResponsePreparerDecorator {
    <CNFuture> * _logFuture;
}

@property (readonly) <CNFuture> *logFuture;

- (void).cxx_destruct;
- (id)initWithResponsePreparer:(id)arg1 delegate:(id)arg2 log:(id /* block */)arg3;
- (id)logFuture;
- (id)prepareResults:(id)arg1;

@end
