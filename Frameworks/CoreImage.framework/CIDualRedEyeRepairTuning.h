/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CoreImage.framework/CoreImage
 */

@interface CIDualRedEyeRepairTuning : NSObject {
    NSDictionary * repairTuning;
    NSDictionary * sessionTuning;
}

@property (nonatomic, retain) NSDictionary *repairTuning;
@property (nonatomic, retain) NSDictionary *sessionTuning;

+ (id)defaultRepairParameters;
+ (id)defaultSessionParameters;
+ (id)repairParametersForTuning:(unsigned long long)arg1;
+ (id)sessionParametersForTuning:(unsigned long long)arg1;

- (void)dealloc;
- (id)initWithTuning:(unsigned long long)arg1;
- (id)repairTuning;
- (id)sessionTuning;
- (void)setRepairTuning:(id)arg1;
- (void)setSessionTuning:(id)arg1;
- (void)setTuningParametersByPortType:(id)arg1 withCameraMetadata:(id)arg2;
- (unsigned long long)tuningFromCameraModel:(id)arg1 portType:(id)arg2;
- (void)updateWithCaptureSetup:(id)arg1 portType:(id)arg2;

@end