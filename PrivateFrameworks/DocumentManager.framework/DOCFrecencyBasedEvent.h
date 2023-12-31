/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager
 */

@interface DOCFrecencyBasedEvent : NSObject {
    double  _frecency;
    NSDate * _lastUsedDate;
}

@property (nonatomic) double frecency;
@property (nonatomic, retain) NSDate *lastUsedDate;

- (void).cxx_destruct;
- (double)frecency;
- (double)frecencyScoreAtDate:(id)arg1;
- (id)lastUsedDate;
- (void)setFrecency:(double)arg1;
- (void)setLastUsedDate:(id)arg1;
- (void)updateFrecencyAtDate:(id)arg1;

@end
