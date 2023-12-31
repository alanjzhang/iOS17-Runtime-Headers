/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/MediaAnalysisServices.framework/MediaAnalysisServices
 */

@interface MADVideoResultsPayload : NSObject <NSSecureCoding> {
    NSError * _error;
    NSArray * _results;
}

@property (nonatomic, retain) NSError *error;
@property (nonatomic, retain) NSArray *results;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)error;
- (id)initWithCoder:(id)arg1;
- (id)results;
- (void)setError:(id)arg1;
- (void)setResults:(id)arg1;

@end
