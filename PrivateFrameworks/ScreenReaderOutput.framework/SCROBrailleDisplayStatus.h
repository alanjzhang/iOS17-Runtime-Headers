/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
 */

@interface SCROBrailleDisplayStatus : NSObject {
    NSData * _aggregatedData;
    long long  _masterStatusCellIndex;
    NSData * _realData;
    int  _virtualAlignment;
    NSData * _virtualData;
}

@property (nonatomic, retain) NSData *aggregatedData;
@property (nonatomic) long long masterStatusCellIndex;
@property (nonatomic, retain) NSData *realData;
@property (nonatomic) int virtualAlignment;
@property (nonatomic, retain) NSData *virtualData;

- (void).cxx_destruct;
- (id)aggregatedData;
- (long long)masterStatusCellIndex;
- (id)realData;
- (void)setAggregatedData:(id)arg1;
- (void)setMasterStatusCellIndex:(long long)arg1;
- (void)setRealData:(id)arg1;
- (void)setVirtualAlignment:(int)arg1;
- (void)setVirtualData:(id)arg1;
- (int)virtualAlignment;
- (id)virtualData;

@end
