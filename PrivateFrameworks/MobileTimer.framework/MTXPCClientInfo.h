/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/MobileTimer.framework/MobileTimer
 */

@interface MTXPCClientInfo : NSObject <MTSource> {
    id  _clientLink;
    NSDate * _connectedDate;
    NSXPCConnection * _connection;
}

@property (nonatomic, retain) id clientLink;
@property (nonatomic, retain) NSDate *connectedDate;
@property (nonatomic, retain) NSXPCConnection *connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int processID;
@property (nonatomic, readonly, copy) NSString *processName;
@property (readonly) Class superclass;

+ (id)clientInfoForConnection:(id)arg1 clientLink:(id)arg2;

- (void).cxx_destruct;
- (id)clientLink;
- (id)connectedDate;
- (id)connection;
- (id)description;
- (bool)donatesIntent;
- (unsigned long long)hash;
- (id)initWithConnection:(id)arg1 clientLink:(id)arg2;
- (bool)isEqual:(id)arg1;
- (int)processID;
- (id)processName;
- (void)setClientLink:(id)arg1;
- (void)setConnectedDate:(id)arg1;
- (void)setConnection:(id)arg1;
- (id)sourceIdentifier;

@end
