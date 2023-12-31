/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNTextObservation : VNRectangleObservation {
    NSArray * _characterBoxes;
    NSString * _text;
}

@property (nonatomic, copy) NSArray *characterBoxes;
@property (nonatomic, readonly, copy) NSString *text;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)characterBoxes;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (bool)isEqual:(id)arg1;
- (void)setCharacterBoxes:(id)arg1;
- (void)setText:(id)arg1;
- (id)text;
- (id)vn_cloneObject;

@end
