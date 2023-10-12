/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/GPUToolsTransport.framework/GPUToolsTransport
 */

@interface GTTelemetryLayerObject : NSObject <NSSecureCoding> {
    GTTelemetryRecordObject * _fps;
    unsigned long long  _frames;
    unsigned long long  _streamRef;
}

@property (nonatomic, retain) GTTelemetryRecordObject *fps;
@property (nonatomic) unsigned long long frames;
@property (nonatomic) unsigned long long streamRef;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)fps;
- (unsigned long long)frames;
- (id)initWithCoder:(id)arg1;
- (void)setFps:(id)arg1;
- (void)setFrames:(unsigned long long)arg1;
- (void)setStreamRef:(unsigned long long)arg1;
- (unsigned long long)streamRef;

@end
