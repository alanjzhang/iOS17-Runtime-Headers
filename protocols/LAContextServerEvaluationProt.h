/* Generated by RuntimeBrowser.
 */

@protocol LAContextServerEvaluationProt

@required

- (void)checkCredentialSatisfied:(void *)arg1 policy:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: long long, long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)credentialOfType:(void *)arg1 originator:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: long long, <LAOriginatorProt> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSData *, NSError *, void*
- (void)evaluateACL:(void *)arg1 operation:(void *)arg2 options:(void *)arg3 uiDelegate:(void *)arg4 originator:(void *)arg5 request:(void *)arg6 reply:(void *)arg7; // needs 7 arg types, found 13: NSData *, id, NSDictionary *, <LAUIDelegate> *, <LAOriginatorProt> *, EvaluationRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)evaluatePolicy:(void *)arg1 options:(void *)arg2 uiDelegate:(void *)arg3 originator:(void *)arg4 request:(void *)arg5 reply:(void *)arg6; // needs 6 arg types, found 12: long long, NSDictionary *, <LAUIDelegate> *, <LAOriginatorProt> *, EvaluationRequest *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSDictionary *, NSError *, void*
- (void)isCredentialSet:(void *)arg1 originator:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: long long, <LAOriginatorProt> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)optionsForInternalOperation:(void *)arg1 originator:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: long long, <LAOriginatorProt> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, id, NSError *, void*
- (void)pauseProcessedEvent:(void *)arg1 pause:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: long long, bool, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)resetEvent:(void *)arg1 originator:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: long long, <LAOriginatorProt> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)retryEvent:(void *)arg1 originator:(void *)arg2 reply:(void *)arg3; // needs 3 arg types, found 9: long long, <LAOriginatorProt> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)setCredential:(void *)arg1 type:(void *)arg2 options:(void *)arg3 originator:(void *)arg4 reply:(void *)arg5; // needs 5 arg types, found 11: NSData *, long long, NSDictionary *, <LAOriginatorProt> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)setOptions:(void *)arg1 forInternalOperation:(void *)arg2 originator:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 10: id, long long, <LAOriginatorProt> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)setShowingCoachingHint:(void *)arg1 event:(void *)arg2 originator:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 10: bool, long long, <LAOriginatorProt> *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)verifyFileVaultUser:(void *)arg1 volumeUuid:(void *)arg2 options:(void *)arg3 reply:(void *)arg4; // needs 4 arg types, found 10: NSUUID *, NSUUID *, unsigned long long, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end
