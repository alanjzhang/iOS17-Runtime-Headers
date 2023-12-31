/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface _MRRegisterForGameControllerEventsMessageProtobuf : PBCodable <NSCopying> {
    struct { 
        unsigned int inputModeFlags : 1; 
    }  _has;
    int  _inputModeFlags;
}

@property (nonatomic) bool hasInputModeFlags;
@property (nonatomic) int inputModeFlags;

- (int)StringAsInputModeFlags:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasInputModeFlags;
- (unsigned long long)hash;
- (int)inputModeFlags;
- (id)inputModeFlagsAsString:(int)arg1;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setHasInputModeFlags:(bool)arg1;
- (void)setInputModeFlags:(int)arg1;
- (void)writeTo:(id)arg1;

@end
