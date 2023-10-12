/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AACCore.framework/AACCore
 */

@interface AEAssessmentModeGestalt : NSObject {
    NSObject<AEAssessmentStateReading> * _assessmentStateReader;
}

@property (getter=isActive, nonatomic, readonly) bool active;
@property (nonatomic, readonly) NSObject<AEAssessmentStateReading> *assessmentStateReader;

+ (id)keyPathsForValuesAffectingActive;
+ (id)makeAssessmentStateReaderWithQueue:(id)arg1;

- (void).cxx_destruct;
- (id)assessmentStateReader;
- (id)init;
- (id)initWithQueue:(id)arg1;
- (bool)isActive;

@end
