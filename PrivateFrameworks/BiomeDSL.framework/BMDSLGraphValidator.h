/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/BiomeDSL.framework/BiomeDSL
 */

@interface BMDSLGraphValidator : NSObject {
    NSSet * _allowedOperations;
    NSSet * _allowedStreamTypes;
    NSDictionary * _eventStreamClassMapping;
    bool  _passthrough;
    NSSet * _validKeyPaths;
}

@property (nonatomic, readonly, copy) NSSet *allowedOperations;
@property (nonatomic, readonly, copy) NSSet *allowedStreamTypes;
@property (nonatomic, readonly, copy) NSDictionary *eventStreamClassMapping;
@property (nonatomic, readonly) bool passthrough;
@property (nonatomic, readonly, copy) NSSet *validKeyPaths;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/BiomeDSL.framework/BiomeDSL

+ (id)currentProcessValidator;
+ (id)genericValidKeyPaths;
+ (id)legacyValidKeyPaths;
+ (id)passthroughValidator;
+ (void)setCurrentProcessValidator:(id)arg1;

- (void).cxx_destruct;
- (id)allowedOperations;
- (id)allowedStreamTypes;
- (Class)eventClassForString:(id)arg1;
- (id)eventStreamClassMapping;
- (id)init;
- (id)initWithValidKeyPaths:(id)arg1 allowedOperations:(id)arg2 allowedStreamTypes:(id)arg3 eventStreamClassMapping:(id)arg4;
- (bool)isExecutionAllowedForGraph:(id)arg1;
- (bool)isStreamTypeAllowed:(unsigned long long)arg1;
- (bool)passthrough;
- (id)validKeyPaths;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/BiomeStreams.framework/BiomeStreams

// BMDSLGraphValidator (EventClassMapping)

+ (id)legacyStreamClassMapping;

@end