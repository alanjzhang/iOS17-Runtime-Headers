/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
 */

@interface CSAudioStreamHolding : NSObject {
    unsigned long long  _clientIdentity;
    NSString * _listeningMicIndicatorLockUUIDString;
    NSString * _name;
    NSString * _recordModeLockUUIDString;
}

@property (nonatomic, readonly) unsigned long long clientIdentity;
@property (nonatomic, retain) NSString *listeningMicIndicatorLockUUIDString;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, retain) NSString *recordModeLockUUIDString;

- (void).cxx_destruct;
- (unsigned long long)clientIdentity;
- (void)dealloc;
- (id)initWithName:(id)arg1 clientIdentity:(unsigned long long)arg2;
- (id)listeningMicIndicatorLockUUIDString;
- (id)name;
- (id)recordModeLockUUIDString;
- (void)setListeningMicIndicatorLockUUIDString:(id)arg1;
- (void)setRecordModeLockUUIDString:(id)arg1;

@end