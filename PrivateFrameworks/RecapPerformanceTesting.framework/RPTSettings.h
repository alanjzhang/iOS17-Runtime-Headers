/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/RecapPerformanceTesting.framework/RecapPerformanceTesting
 */

@interface RPTSettings : NSObject {
    long long  _activationIterationCount;
    NSURL * _recapOverrideFileURL;
}

@property (nonatomic) long long activationIterationCount;
@property (nonatomic, retain) NSURL *recapOverrideFileURL;

+ (id)processEnvironment;

- (void).cxx_destruct;
- (long long)activationIterationCount;
- (id)init;
- (id)initFromDictionary:(id)arg1;
- (id)recapOverrideFileURL;
- (void)setActivationIterationCount:(long long)arg1;
- (void)setRecapOverrideFileURL:(id)arg1;

@end
