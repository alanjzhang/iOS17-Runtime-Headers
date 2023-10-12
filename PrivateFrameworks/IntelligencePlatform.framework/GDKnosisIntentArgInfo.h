/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/IntelligencePlatform.framework/IntelligencePlatform
 */

@interface GDKnosisIntentArgInfo : NSObject <NSSecureCoding> {
    NSSet * _args;
    NSString * _intent;
    NSNumber * _score;
}

@property (nonatomic, readonly, copy) NSSet *args;
@property (nonatomic, readonly, copy) NSString *intent;
@property (nonatomic, readonly, copy) NSNumber *score;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)args;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithIntent:(id)arg1 args:(id)arg2 score:(id)arg3;
- (id)intent;
- (id)score;

@end
