/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/Email.framework/Email
 */

@interface EMFetchController : NSObject {
    EMRemoteConnection * _connection;
}

@property (retain) EMRemoteConnection *connection;

+ (id)remoteInterface;

- (void).cxx_destruct;
- (id)connection;
- (id)diagnosticInformation;
- (id)initWithRemoteConnection:(id)arg1;
- (void)performFetchForOTC;
- (void)performFetchOfType:(int)arg1;
- (void)performFetchOfType:(int)arg1 accounts:(id)arg2;
- (void)performFetchOfType:(int)arg1 mailboxes:(id)arg2;
- (void)setConnection:(id)arg1;
- (void)setSuppressedContexts:(id)arg1;

@end
