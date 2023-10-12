/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CallKit.framework/CallKit
 */

@interface CXSetVideoPresentationSizeCallAction : CXCallAction {
    struct CGSize { 
        double width; 
        double height; 
    }  _videoPresentationSize;
}

@property (nonatomic) struct CGSize { double x1; double x2; } videoPresentationSize;

+ (bool)supportsSecureCoding;

- (id)customDescription;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCallUUID:(id)arg1 videoPresentationSize:(struct CGSize { double x1; double x2; })arg2;
- (id)initWithCoder:(id)arg1;
- (id)sanitizedCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setVideoPresentationSize:(struct CGSize { double x1; double x2; })arg1;
- (void)updateCopy:(id)arg1 withZone:(struct _NSZone { }*)arg2;
- (struct CGSize { double x1; double x2; })videoPresentationSize;

@end
