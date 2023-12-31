/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKExperiment : NSObject {
    bool  _isExposed;
}

@property (nonatomic, readonly) bool isExposed;

- (bool)booleanForFactor:(id)arg1;
- (id)description;
- (id)experimentDetails;
- (id)filePathForFactor:(id)arg1;
- (id)init;
- (bool)isExposed;
- (bool)isTaggedForFactor:(id)arg1;
- (id)metadataForFactor:(id)arg1;
- (id)namespaceName;
- (void)refresh;
- (id)stringForFactor:(id)arg1;
- (void)trackExperimentExposure;

@end
