/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/JetEngine.framework/JetEngine
 */

@interface JEHLSVideoPlaylist : NSObject <JEMediaPlaylist> {
    NSArray * _mainFeatureMetricsData;
    NSMutableArray * _rollItems;
    unsigned long long  _startPosition;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSArray *eventData;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSArray *mainFeatureMetricsData;
@property (nonatomic, retain) NSMutableArray *rollItems;
@property (nonatomic) unsigned long long startPosition;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addItemStartAtMilliseconds:(unsigned long long)arg1 durationMilliseconds:(unsigned long long)arg2 metricsData:(id)arg3;
- (void)addItemStartAtMilliseconds:(unsigned long long)arg1 endAtMilliseconds:(unsigned long long)arg2 metricsData:(id)arg3;
- (void)addItemStartAtSeconds:(double)arg1 durationSeconds:(double)arg2 metricsData:(id)arg3;
- (void)addRollInfoItem:(id)arg1;
- (void)addRollInfoItems:(id)arg1;
- (void)addRollItem:(id)arg1;
- (long long)indexOfLastRollItemWithStartBeforePosition:(unsigned long long)arg1;
- (id)initWithMainFeatureMetricsData:(id)arg1;
- (id)initWithStartPosition:(unsigned long long)arg1 mainFeatureMetricsData:(id)arg2;
- (id)itemAtOverallPosition:(unsigned long long)arg1 rangeOptions:(long long)arg2;
- (id)itemsBetweenStartOverallPosition:(unsigned long long)arg1 endOverallPosition:(unsigned long long)arg2;
- (id)mainFeatureItemWithStartOverallPosition:(unsigned long long)arg1;
- (id)mainFeatureMetricsData;
- (id)rollItems;
- (void)setMainFeatureMetricsData:(id)arg1;
- (void)setRollItems:(id)arg1;
- (void)setStartPosition:(unsigned long long)arg1;
- (unsigned long long)startPosition;

@end
