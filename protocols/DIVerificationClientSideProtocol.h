/* Generated by RuntimeBrowser.
 */

@protocol DIVerificationClientSideProtocol <NSObject>

@required

- (void)concludeVerification:(NSString *)arg1;
- (void)configure:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 7: DIVerificationSessionContext *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)confirmVerificationCompletedWithFeedback:(DIExecutionFeedback *)arg1;
- (void)getVerificationResultWithOptions:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSString *, NSError *, void*
- (void)performVerificationWithAttributes:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 9: DIPage *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, DIPage *, long long, NSError *, void*
- (void)shareVerificationResultWithOptions:(void *)arg1 completion:(void *)arg2; // needs 2 arg types, found 8: NSDictionary *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSUUID *, NSError *, void*

@end
