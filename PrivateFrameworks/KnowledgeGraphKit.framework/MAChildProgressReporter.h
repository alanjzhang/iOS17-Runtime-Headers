/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
 */

@interface MAChildProgressReporter : MAProgressReporter {
    double  _offset;
    MAProgressReporter * _parentProgress;
    double  _scale;
}

@property (nonatomic, readonly) double offset;
@property (nonatomic, readonly) MAProgressReporter *parentProgress;
@property (nonatomic, readonly) double scale;

- (void).cxx_destruct;
- (id)childProgressWithOffset:(double)arg1 scale:(double)arg2;
- (id)initWithParentProgress:(id)arg1 offset:(double)arg2 scale:(double)arg3;
- (bool)isCancelled;
- (bool)isCancelledWithProgress:(double)arg1 currentTime:(double)arg2;
- (double)offset;
- (id)parentProgress;
- (double)scale;

@end
