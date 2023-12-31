/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRRegisterVoiceInputDeviceMessageProtobuf : PBCodable <NSCopying> {
    _MRVoiceInputDeviceDescriptorProtobuf * _descriptor;
}

@property (nonatomic, retain) _MRVoiceInputDeviceDescriptorProtobuf *descriptor;
@property (nonatomic, readonly) bool hasDescriptor;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)descriptor;
- (id)dictionaryRepresentation;
- (bool)hasDescriptor;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setDescriptor:(id)arg1;
- (void)writeTo:(id)arg1;

@end
