/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AirPlayRoutePrediction.framework/AirPlayRoutePrediction
 */

@interface ARPHomeControlNextActionCorrelationTask : NSObject {
    NSString * _file;
    ARPHomeControlSuggester * _suggester;
    ARPHomeControlCorrelationUtilities * _utilities;
}

@property (nonatomic, readonly, copy) NSString *file;
@property (nonatomic, retain) ARPHomeControlSuggester *suggester;
@property (nonatomic, retain) ARPHomeControlCorrelationUtilities *utilities;

- (void).cxx_destruct;
- (void)execute;
- (id)file;
- (id)initWithCorrelationsFile:(id)arg1;
- (void)setSuggester:(id)arg1;
- (void)setUtilities:(id)arg1;
- (id)suggester;
- (id)utilities;

@end
