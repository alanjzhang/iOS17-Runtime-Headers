/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/KnowledgeGraphKit.framework/KnowledgeGraphKit
 */

@interface MALegacyProgressReporter : MAProgressReporter {
    bool  _isCancelled;
    double  _lastProgressCallTime;
    id /* block */  _progressBlock;
}

@property (nonatomic) bool isCancelled;
@property (nonatomic, readonly) id /* block */ progressBlock;

- (void).cxx_destruct;
- (id)childProgressWithOffset:(double)arg1 scale:(double)arg2;
- (id)initWithProgressBlock:(id /* block */)arg1;
- (bool)isCancelled;
- (bool)isCancelledWithProgress:(double)arg1 currentTime:(double)arg2;
- (id /* block */)progressBlock;
- (void)setIsCancelled:(bool)arg1;

@end
