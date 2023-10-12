/* Generated by RuntimeBrowser.
 */

@protocol _SGSuggestionsServiceEventsConfirmRejectProtocol

@required

- (void)confirmEvent:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: SGRealtimeEvent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (bool)confirmEventByRecordId:(SGRecordId *)arg1 error:(id*)arg2;
- (void)confirmEventByRecordId:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: SGRecordId *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (bool)deleteEventByRecordId:(SGRecordId *)arg1 error:(id*)arg2;
- (void)deleteEventByRecordId:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: SGRecordId *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)rejectEvent:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: SGRealtimeEvent *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (bool)rejectEventByRecordId:(SGRecordId *)arg1 error:(id*)arg2;
- (void)rejectEventByRecordId:(void *)arg1 withCompletion:(void *)arg2; // needs 2 arg types, found 7: SGRecordId *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, NSError *, void*
- (void)waitForEventWithIdentifier:(void *)arg1 toAppearInEventStoreWithCompletion:(void *)arg2; // needs 2 arg types, found 8: NSString *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*
- (void)waitForEventWithIdentifier:(void *)arg1 toAppearInEventStoreWithLastModificationDate:(void *)arg2 completion:(void *)arg3; // needs 3 arg types, found 9: NSString *, NSDate *, id /* block */, /* Warning: Unrecognized filer type: '<' using 'void*' */ void*, void, id /* block */, bool, NSError *, void*

@end