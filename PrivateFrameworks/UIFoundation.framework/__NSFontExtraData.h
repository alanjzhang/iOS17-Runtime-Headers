/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface __NSFontExtraData : NSObject {
    double  _ascender;
    struct { 
        unsigned int _isSystemFont : 1; 
        unsigned int _isIBScaledFont : 1; 
        unsigned int _hasVerticalMetrics : 2; 
    }  _fFlags;
    double  _lineHeight;
    double  _maximumPointSizeAfterScaling;
    double  _pointSizeForScaling;
    NSString * _textStyleForScaling;
}

- (bool)_hasVerticalMetricsWithPlatformFont:(struct __CTFont { }*)arg1;
- (void)dealloc;
- (unsigned long long)hash;
- (bool)isEqualToExtraData:(id)arg1;

@end
