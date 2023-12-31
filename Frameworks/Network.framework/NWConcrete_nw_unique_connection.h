/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Network.framework/Network
 */

@interface NWConcrete_nw_unique_connection : NSObject <OS_nw_unique_connection> {
    NWConcrete_nw_connection * connection;
    int  dupedSocketFD;
    NSObject<OS_nw_endpoint> * endpoint;
    unsigned int  isIncoming;
    unsigned long long  receivedSequenceNumber;
    BOOL  service;
    unsigned long long  uniqueID;
    unsigned char  uuid;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)description;
- (id)init;

@end
