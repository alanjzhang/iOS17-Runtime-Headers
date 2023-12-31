/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CoreML.framework/CoreML
 */

@interface MLSupportVectorRegressor : MLRegressor {
    MLSVREngine * _engine;
}

@property (retain) MLSVREngine *engine;

- (void).cxx_destruct;
- (id)engine;
- (id)initWithEngine:(id)arg1 description:(id)arg2 configuration:(id)arg3 error:(id*)arg4;
- (id)regress:(id)arg1 options:(id)arg2 error:(id*)arg3;
- (void)setEngine:(id)arg1;

@end
