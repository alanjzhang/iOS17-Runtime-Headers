/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PromotedContentPrediction.framework/PromotedContentPrediction
 */

@interface Feature : NSManagedObject

@property (nonatomic, copy) NSDate *createdAt;
@property (nonatomic) int deploymentID;
@property (nonatomic, copy) NSString *experimentID;
@property (nonatomic, copy) NSString *featureType;
@property (nonatomic, copy) NSString *treatmentID;
@property (nonatomic, retain) APOdmlVector *value;

+ (id)fetchRequest;

@end
