/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/Pasteboard.framework/Pasteboard
 */

@interface PBItemDetection : NSObject <NSSecureCoding> {
    bool  _present;
    id  _value;
}

@property (nonatomic, readonly) bool present;
@property (nonatomic, readonly) id value;

+ (id)_allowedValueClasses;
+ (id)detectionAbsent;
+ (id)detectionPresent;
+ (id)detectionPresentWithValue:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPresent:(bool)arg1 value:(id)arg2;
- (bool)present;
- (id)value;

@end
