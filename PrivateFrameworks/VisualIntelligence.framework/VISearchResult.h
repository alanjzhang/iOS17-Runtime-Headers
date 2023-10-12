/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/VisualIntelligence.framework/VisualIntelligence
 */

@interface VISearchResult : NSObject <NSCopying> {
    NSArray * _regionOfInterestResults;
    NSData * _userFeedbackPayload;
}

@property (nonatomic, readonly) NSArray *regionOfInterestResults;
@property (nonatomic, readonly) NSData *userFeedbackPayload;

+ (id)empty;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithRegionOfInterestResults:(id)arg1;
- (id)initWithRegionOfInterestResults:(id)arg1 userFeedbackPayload:(id)arg2;
- (bool)isEqual:(id)arg1;
- (id)regionOfInterestResults;
- (id)userFeedbackPayload;

@end
