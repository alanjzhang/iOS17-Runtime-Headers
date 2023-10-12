/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CloudDocs.framework/CloudDocs
 */

@interface BRShareLookupParticipantsOperation : BRShareOperation {
    id /* block */  _lookupParticipantsCompletionBlock;
    NSArray * _userIdentities;
}

@property (copy) id /* block */ lookupParticipantsCompletionBlock;

- (void).cxx_destruct;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)initWithUserIdentities:(id)arg1;
- (id /* block */)lookupParticipantsCompletionBlock;
- (void)main;
- (void)setLookupParticipantsCompletionBlock:(id /* block */)arg1;

@end