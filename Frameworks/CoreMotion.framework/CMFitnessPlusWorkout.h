/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CoreMotion.framework/CoreMotion
 */

@interface CMFitnessPlusWorkout : CMWorkout {
    NSString * fCatalogWorkoutId;
    long long  fMediaType;
}

@property (nonatomic, readonly) NSString *catalogWorkoutId;
@property (nonatomic, readonly) long long mediaType;

// CMFitnessPlusWorkout (null)

+ (id)fitnessPlusWorkoutInstance:(id)arg1;
+ (bool)isAvailable;
+ (id)mediaTypeName:(long long)arg1;
+ (bool)supportsSecureCoding;

- (id)catalogWorkoutId;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithSessionId:(id)arg1 type:(long long)arg2 catalogWorkoutId:(id)arg3 mediaType:(long long)arg4;
- (id)initWithSessionId:(id)arg1 type:(long long)arg2 catalogWorkoutId:(id)arg3 mediaType:(long long)arg4 error:(id*)arg5;
- (id)initWithSessionId:(id)arg1 type:(long long)arg2 catalogWorkoutId:(id)arg3 mediaType:(long long)arg4 locationType:(long long)arg5 error:(id*)arg6;
- (long long)mediaType;

@end
