/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSContentRating : NSObject {
    NSString * _contentRatingID;
    NSURL * _imageURL;
    NSString * _kind;
    NSString * _label;
    NSString * _name;
    NSString * _ratingDescription;
    NSNumber * _value;
}

@property (nonatomic, readonly) NSString *contentRatingID;
@property (nonatomic, readonly) NSURL *imageURL;
@property (nonatomic, readonly) NSString *kind;
@property (nonatomic, readonly) NSString *label;
@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSString *ratingDescription;
@property (nonatomic, readonly) NSNumber *value;

+ (id)contentRatingWithDictionary:(id)arg1;

- (void).cxx_destruct;
- (id)contentRatingID;
- (id)description;
- (id)imageURL;
- (id)initWithDictionary:(id)arg1;
- (id)kind;
- (id)label;
- (id)name;
- (id)ratingDescription;
- (id)value;

@end
