/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CallKit.framework/CallKit
 */

@interface CXEnableVideoCallAction : CXCallAction <NSSecureCoding> {
    bool  _videoEnabled;
}

@property (getter=isVideoEnabled, nonatomic) bool videoEnabled;

+ (bool)supportsSecureCoding;

- (id)customDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCallUUID:(id)arg1 videoEnabled:(bool)arg2;
- (id)initWithCoder:(id)arg1;
- (bool)isVideoEnabled;
- (id)sanitizedCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setVideoEnabled:(bool)arg1;
- (void)updateCopy:(id)arg1 withZone:(struct _NSZone { }*)arg2;

@end