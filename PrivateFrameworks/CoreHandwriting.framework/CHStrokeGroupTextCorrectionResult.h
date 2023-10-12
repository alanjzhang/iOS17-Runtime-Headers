/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

@interface CHStrokeGroupTextCorrectionResult : NSObject <NSCopying, NSSecureCoding> {
    NSArray * _inputStrokeIdentifiers;
    CHTextCorrectionResult * _textCorrectionResult;
}

@property (nonatomic, readonly, copy) NSArray *inputStrokeIdentifiers;
@property (nonatomic, readonly, copy) CHTextCorrectionResult *textCorrectionResult;

// CHStrokeGroupTextCorrectionResult (null)

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithTextCorrectionResult:(id)arg1 inputStrokeIdentifiers:(id)arg2;
- (id)inputStrokeIdentifiers;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToStrokeGroupTextCorrectionResult:(id)arg1;
- (id)textCorrectionResult;

@end
