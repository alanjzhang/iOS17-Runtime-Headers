/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
 */

@interface CRKBoundedGrowthFunction : NSObject <CRKGrowthFunction> {
    <CRKGrowthFunction> * _growthFunction;
    double  _lowerBound;
    double  _upperBound;
}

@property (nonatomic, readonly) <CRKGrowthFunction> *growthFunction;
@property (nonatomic, readonly) double lowerBound;
@property (nonatomic, readonly) double upperBound;

- (void).cxx_destruct;
- (double)evaluateWithValue:(double)arg1;
- (id)growthFunction;
- (id)initWithGrowthFunction:(id)arg1 lowerBound:(double)arg2 upperBound:(double)arg3;
- (double)lowerBound;
- (double)upperBound;

@end
