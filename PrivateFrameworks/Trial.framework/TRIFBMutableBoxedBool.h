/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/Trial.framework/Trial
 */

@interface TRIFBMutableBoxedBool : TRIFBBoxedBool {
    bool  _allowMutation;
    bool  _deleteWhenDone;
    struct BoxedBool { unsigned char x1; } * _ptr;
}

@property (nonatomic) bool val;

+ (id)new;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (const struct BoxedBool { unsigned char x1; }*)cppPointer;
- (void)dealloc;
- (id)init;
- (id)initWithVal:(bool)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (void)setVal:(bool)arg1;
- (bool)val;

@end