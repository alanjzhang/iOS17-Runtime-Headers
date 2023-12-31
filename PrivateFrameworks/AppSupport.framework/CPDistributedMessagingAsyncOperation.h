/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AppSupport.framework/AppSupport
 */

@interface CPDistributedMessagingAsyncOperation : NSOperation {
    NSThread * _calloutThread;
    CPDistributedMessagingCenter * _center;
    void * _context;
    NSError * _error;
    bool  _makeServer;
    NSString * _name;
    NSData * _oolData;
    NSString * _oolKey;
    NSDictionary * _reply;
    SEL  _selector;
    id  _target;
    NSData * _userInfoData;
}

- (void)_performCallout;
- (void)_releaseSendingData;
- (void)dealloc;
- (id)initWithCenter:(id)arg1 messageName:(id)arg2 userInfoData:(id)arg3 oolKey:(id)arg4 oolData:(id)arg5 target:(id)arg6 selector:(SEL)arg7 context:(void*)arg8 makeServer:(bool)arg9;
- (void)main;

@end
