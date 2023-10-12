/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CoreGraphics.framework/CoreGraphics
 */

@interface CPTextObject : CPChunk {
    struct CGPoint { 
        double x; 
        double y; 
    }  anchor;
    double  maxFontLineHeight;
    float  maxFontSize;
    bool  metricInfoCalculated;
}

- (void)calculateMetrics;
- (void)clearCachedInfo;
- (double)maxFontLineHeight;
- (float)maxFontSize;
- (void)translateObjectYBy:(double)arg1;

@end
