/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKLStreamLogStatsObserver : CKLStreamObserver {
    NSMutableDictionary * _totalCountByLine;
    NSMutableDictionary * _totalSizeByLine;
}

@property (retain) NSMutableDictionary *totalCountByLine;
@property (retain) NSMutableDictionary *totalSizeByLine;

- (void).cxx_destruct;
- (void)eventMatched:(id)arg1;
- (void)finish;
- (id)initWithLogTypes:(unsigned long long)arg1;
- (void)setTotalCountByLine:(id)arg1;
- (void)setTotalSizeByLine:(id)arg1;
- (id)totalCountByLine;
- (id)totalSizeByLine;

@end
