/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/ShazamKit.framework/ShazamKit
 */

@interface SHMatchedAdjustedTimeRange : NSObject <NSCopying, NSSecureCoding> {
    SHRange * _originalTimeRange;
    SHRange * _updatedTimeRange;
}

@property (nonatomic, readonly) SHRange *originalTimeRange;
@property (nonatomic, readonly) SHRange *updatedTimeRange;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithOriginalTimeRange:(id)arg1 updatedTimeRange:(id)arg2;
- (id)initWithSerializedRepresentation:(id)arg1;
- (id)originalTimeRange;
- (id)serializedRepresentation;
- (id)updatedTimeRange;

@end
