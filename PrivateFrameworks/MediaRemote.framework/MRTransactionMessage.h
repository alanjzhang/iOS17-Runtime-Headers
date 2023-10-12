/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRTransactionMessage : MRProtocolMessage {
    NSMutableArray * _packets;
}

@property (nonatomic, readonly) unsigned long long name;
@property (nonatomic, readonly) NSArray *packets;
@property (nonatomic, readonly) MRPlayerPath *playerPath;

- (void).cxx_destruct;
- (id)initWithContentItems:(id)arg1 forPlayerPath:(id)arg2;
- (id)initWithName:(unsigned long long)arg1 packets:(id)arg2 playerPath:(id)arg3;
- (id)initWithPlaybackQueue:(id)arg1 forPlayerPath:(id)arg2;
- (unsigned long long)name;
- (id)packets;
- (id)playerPath;
- (unsigned long long)type;

@end
