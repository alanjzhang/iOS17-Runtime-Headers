/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
 */

@interface CTDataConnectionAvailabilityStatus : NSObject <NSCopying, NSSecureCoding> {
    bool  _available;
    int  _csiError;
}

@property (nonatomic) bool available;
@property (nonatomic) int csiError;

+ (bool)supportsSecureCoding;

- (bool)available;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (int)csiError;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)setAvailable:(bool)arg1;
- (void)setCsiError:(int)arg1;

@end
