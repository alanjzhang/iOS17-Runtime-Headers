/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/MLAssetIO.framework/MLAssetIO
 */

@interface MIORangeAsValue : NSValue {
    struct _MIORange { 
        long long lowerBound; 
        long long upperBound; 
    }  _range;
}

+ (id)valueWithMIORange:(struct _MIORange { long long x1; long long x2; })arg1;

- (struct _MIORange { long long x1; long long x2; })MIORangeValue;
- (void)getValue:(void*)arg1;
- (const char *)objCType;

@end
