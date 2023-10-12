/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PrototypeTools.framework/PrototypeTools
 */

@interface PTSizeSettings : PTSettings {
    double  _height;
    double  _width;
}

@property (nonatomic) double height;
@property (nonatomic) struct CGSize { double x1; double x2; } sizeValue;
@property (nonatomic) double width;

+ (bool)ignoresKey:(id)arg1;
+ (id)settingsControllerModule;

- (id)drillDownSummary;
- (double)height;
- (void)setHeight:(double)arg1;
- (void)setSizeValue:(struct CGSize { double x1; double x2; })arg1;
- (void)setWidth:(double)arg1;
- (struct CGSize { double x1; double x2; })sizeValue;
- (double)width;

@end
