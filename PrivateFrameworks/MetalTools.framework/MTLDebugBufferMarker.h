/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/MetalTools.framework/MetalTools
 */

@interface MTLDebugBufferMarker : NSObject {
    NSString * _label;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
}

@property (nonatomic, copy) NSString *label;
@property (nonatomic) struct _NSRange { unsigned long long x1; unsigned long long x2; } range;

- (void)dealloc;
- (id)label;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (void)setLabel:(id)arg1;
- (void)setRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;

@end
