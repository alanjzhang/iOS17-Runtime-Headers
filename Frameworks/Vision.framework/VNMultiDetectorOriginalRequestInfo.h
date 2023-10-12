/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Vision.framework/Vision
 */

@interface VNMultiDetectorOriginalRequestInfo : NSObject {
    unsigned long long  _originalRequestResultsIndex;
    NSString * _originatingRequestSpecifierKey;
}

@property (nonatomic, readonly) unsigned long long originalRequestResultsIndex;
@property (nonatomic, readonly) NSString *originatingRequestSpecifierKey;

+ (id)originatingRequestSpecifierToDetectorClassMap;
+ (id)requestClassNameFromRequestKey:(id)arg1;
+ (id)requestKeyFromRequest:(id)arg1;

- (void).cxx_destruct;
- (id)description;
- (id)initWithOriginatingRequestSpecifierProcessingOptionKey:(id)arg1 originalRequestResultsIndex:(unsigned long long)arg2;
- (unsigned long long)originalRequestResultsIndex;
- (id)originatingRequestSpecifierKey;

@end
