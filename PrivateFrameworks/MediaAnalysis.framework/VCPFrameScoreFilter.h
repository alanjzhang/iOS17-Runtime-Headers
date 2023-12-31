/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/MediaAnalysis.framework/MediaAnalysis
 */

@interface VCPFrameScoreFilter : NSObject {
    float  _diffVariance;
    float  _distanceVariance;
    int  _numFilterTabs;
    int  _numOfScores;
    float * _scoreArray;
}

- (void)dealloc;
- (id)initWithFilterTabs:(int)arg1 distanceVariance:(float)arg2 diffVariance:(float)arg3;
- (float)processFrameScore:(float)arg1 validScore:(bool)arg2;

@end
