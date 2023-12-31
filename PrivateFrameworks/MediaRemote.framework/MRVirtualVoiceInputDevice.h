/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRVirtualVoiceInputDevice : NSObject {
    MRVirtualVoiceInputDeviceDescriptor * _descriptor;
    unsigned int  _deviceID;
    unsigned int  _recordingState;
}

@property (nonatomic, readonly) NSData *data;
@property (nonatomic, copy) MRVirtualVoiceInputDeviceDescriptor *descriptor;
@property (nonatomic, readonly) unsigned int deviceID;
@property (nonatomic) unsigned int recordingState;

- (void).cxx_destruct;
- (id)data;
- (id)description;
- (id)descriptor;
- (unsigned int)deviceID;
- (id)initWithData:(id)arg1;
- (id)initWithDeviceID:(unsigned int)arg1;
- (unsigned int)recordingState;
- (void)setDescriptor:(id)arg1;
- (void)setRecordingState:(unsigned int)arg1;

@end
