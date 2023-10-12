/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PersonalizationPortrait.framework/PersonalizationPortrait
 */

@interface PPSpotlightScoring : NSObject {
    long long  _sandboxExtensionHandle;
    PPTopicStore * _topicStore;
}

+ (id)defaultInstance;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithTopicStore:(id)arg1;
- (bool)refreshSpotlightScoringCacheWithError:(id*)arg1;
- (id)spotlightQueryScore:(id)arg1 error:(id*)arg2;

@end
