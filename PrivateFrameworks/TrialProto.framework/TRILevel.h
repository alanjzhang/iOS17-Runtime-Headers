/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/TrialProto.framework/TrialProto
 */

@interface TRILevel : TRIPBMessage

@property (nonatomic, copy) NSData *binaryValue;
@property (nonatomic) bool booleanValue;
@property (nonatomic, retain) TRIFile *directoryValue;
@property (nonatomic) double doubleValue;
@property (nonatomic, retain) TRIFile *fileValue;
@property (nonatomic) float floatValue;
@property (nonatomic) int intValue;
@property (nonatomic, readonly) int levelOneOfCase;
@property (nonatomic) long long longValue;
@property (nonatomic, retain) NSMutableDictionary *metadata;
@property (nonatomic, readonly) unsigned long long metadata_Count;
@property (nonatomic, retain) TRIMobileAssetReference *mobileAssetReferenceValue;
@property (nonatomic, copy) NSString *stringValue;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/TrialProto.framework/TrialProto

+ (id)descriptor;

// TRILevel (TRIUtilInternal)

- (id)fileOrDirectoryLevelWithIsDir:(bool*)arg1;
- (bool)isFactorOnDemand;

// TRILevel (Util)

- (id)object;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Speech.framework/Speech

// TRILevel (SFAdditions)

- (bool)_cesr_isPreinstalled;
- (bool)_cesr_preferOverServer;

@end
