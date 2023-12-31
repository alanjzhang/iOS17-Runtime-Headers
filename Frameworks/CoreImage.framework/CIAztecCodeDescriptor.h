/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIAztecCodeDescriptor : CIBarcodeDescriptor {
    long long  dataCodewordCount;
    NSData * errorCorrectedPayload;
    bool  isCompact;
    long long  layerCount;
}

@property (readonly) long long dataCodewordCount;
@property (readonly) NSData *errorCorrectedPayload;
@property (readonly) bool isCompact;
@property (readonly) long long layerCount;

+ (id)descriptorWithPayload:(id)arg1 isCompact:(bool)arg2 layerCount:(long long)arg3 dataCodewordCount:(long long)arg4;
+ (bool)supportsSecureCoding;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (long long)dataCodewordCount;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)errorCorrectedPayload;
- (id)initWithCoder:(id)arg1;
- (id)initWithPayload:(id)arg1 isCompact:(bool)arg2 layerCount:(long long)arg3 dataCodewordCount:(long long)arg4;
- (bool)isCompact;
- (bool)isValid;
- (long long)layerCount;

@end
