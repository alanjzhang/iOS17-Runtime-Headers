/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/MediaConversionService.framework/MediaConversionService
 */

@interface PAMediaConversionServiceSetCreationDateImageMetadataPolicy : PAMediaConversionServiceImageMetadataPolicy {
    NSDate * _creationDate;
    NSTimeZone * _timeZone;
}

@property (retain) NSDate *creationDate;
@property (retain) NSTimeZone *timeZone;

+ (id)policyWithCreationDate:(id)arg1 inTimeZone:(id)arg2;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)creationDate;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (bool)metadataNeedsProcessing:(id)arg1;
- (id)processMetadata:(id)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (id)timeZone;

@end
