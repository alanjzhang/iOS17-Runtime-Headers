/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
 */

@interface MRExternalDeviceMessageMetricsEntry : NSObject {
    unsigned long long  _avg;
    unsigned long long  _max;
    unsigned long long  _min;
    unsigned long long  _total;
    NSMutableArray * _values;
}

@property (nonatomic) unsigned long long avg;
@property (nonatomic) unsigned long long max;
@property (nonatomic) unsigned long long min;
@property (nonatomic) unsigned long long total;
@property (nonatomic, retain) NSMutableArray *values;

- (void).cxx_destruct;
- (unsigned long long)avg;
- (id)description;
- (id)init;
- (unsigned long long)max;
- (unsigned long long)min;
- (void)setAvg:(unsigned long long)arg1;
- (void)setMax:(unsigned long long)arg1;
- (void)setMin:(unsigned long long)arg1;
- (void)setTotal:(unsigned long long)arg1;
- (void)setValues:(id)arg1;
- (unsigned long long)total;
- (void)updateWithValue:(unsigned long long)arg1;
- (id)values;

@end
