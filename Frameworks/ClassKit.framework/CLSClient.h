/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/ClassKit.framework/ClassKit
 */

@interface CLSClient : NSObject <CLSClientInterface> {
    <CLSClientDelegate> * _delagate;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <CLSClientDelegate> *delagate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (oneway void)clientRemote_databaseRecreated;
- (id)delagate;
- (void)setDelagate:(id)arg1;

@end
