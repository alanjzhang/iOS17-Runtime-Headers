/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSRatingSystem : NSObject {
    NSArray * _contentRatings;
    NSString * _kind;
    NSString * _label;
    NSString * _ratingSystemID;
    NSArray * _types;
}

@property (nonatomic, readonly) NSArray *contentRatings;
@property (nonatomic, readonly) NSString *kind;
@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) NSString *ratingSystemID;
@property (nonatomic, readonly) NSArray *types;

+ (id)ratingSystemWithDictionary:(id)arg1;

- (void).cxx_destruct;
- (id)contentRatings;
- (id)description;
- (id)initWithDictionary:(id)arg1;
- (id)kind;
- (id)label;
- (id)ratingSystemID;
- (id)types;

@end
