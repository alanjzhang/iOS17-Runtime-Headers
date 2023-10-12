/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/MediaAnalysisServices.framework/MediaAnalysisServices
 */

@interface MADVIUserFeedbackRequest : MADRequest {
    NSString * _reportIdentifier;
    NSData * _sfReportData;
    NSData * _userFeedbackPayload;
}

@property (nonatomic, readonly) NSString *reportIdentifier;
@property (nonatomic, readonly) NSData *sfReportData;
@property (nonatomic, readonly) NSData *userFeedbackPayload;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithPayload:(id)arg1 andReportIdentifier:(id)arg2;
- (id)initWithUserFeedbackPayload:(id)arg1 sfReportData:(id)arg2 reportIdentifier:(id)arg3;
- (id)reportIdentifier;
- (id)sfReportData;
- (id)userFeedbackPayload;

@end
