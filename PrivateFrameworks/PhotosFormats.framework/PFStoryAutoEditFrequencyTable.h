/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PhotosFormats.framework/PhotosFormats
 */

@interface PFStoryAutoEditFrequencyTable : NSObject {
    NSArray * _baseTable;
    NSNumber * _fallbackValue;
    <PFRandomNumberGenerator> * _randomNumberGenerator;
    NSMutableArray * _workingElements;
}

- (void).cxx_destruct;
- (id)description;
- (bool)hasValue:(id)arg1;
- (id)init;
- (id)initWithValueCounts:(id)arg1 randomNumberGenerator:(id)arg2 fallbackValue:(id)arg3;
- (id)nextValue;
- (id)nextValuePassingTest:(id /* block */)arg1;

@end