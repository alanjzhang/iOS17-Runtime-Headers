/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/MediaAnalysis.framework/MediaAnalysis
 */

@interface VCPProtoImageFaceResult : PBCodable <NSCopying, VCPProtoResultLegacyConversionProtocol> {
    VCPProtoBounds * _bounds;
    int  _eyeExpression;
    float  _faceQuality;
    struct { 
        unsigned int faceQuality : 1; 
    }  _has;
    bool  _isCloseup;
    int  _mouthExpression;
    int  _position;
    int  _yaw;
}

@property (nonatomic, retain) VCPProtoBounds *bounds;
@property (nonatomic) int eyeExpression;
@property (nonatomic) float faceQuality;
@property (nonatomic) bool hasFaceQuality;
@property (nonatomic) bool isCloseup;
@property (nonatomic) int mouthExpression;
@property (nonatomic) int position;
@property (nonatomic) int yaw;

- (void).cxx_destruct;
- (id)bounds;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (int)eyeExpression;
- (float)faceQuality;
- (bool)hasFaceQuality;
- (unsigned long long)hash;
- (bool)isCloseup;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (int)mouthExpression;
- (int)position;
- (bool)readFrom:(id)arg1;
- (void)setBounds:(id)arg1;
- (void)setEyeExpression:(int)arg1;
- (void)setFaceQuality:(float)arg1;
- (void)setHasFaceQuality:(bool)arg1;
- (void)setIsCloseup:(bool)arg1;
- (void)setMouthExpression:(int)arg1;
- (void)setPosition:(int)arg1;
- (void)setYaw:(int)arg1;
- (void)writeTo:(id)arg1;
- (int)yaw;

// VCPProtoImageFaceResult (LegacyConversion)

+ (id)resultFromLegacyDictionary:(id)arg1;

- (id)exportToLegacyDictionary;

@end
