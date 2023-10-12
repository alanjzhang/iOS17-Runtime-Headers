/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CloudKit.framework/CloudKit
 */

@interface CKThrottle : NSObject <NSSecureCoding> {
    NSNumber * _allowedRequestCount;
    NSString * _bundleID;
    NSString * _containerIdentifier;
    NSNumber * _currentRequestWindowIndex;
    NSNumber * _databaseScope;
    NSNumber * _errorCode;
    NSDate * _expirationDate;
    NSString * _functionName;
    NSNumber * _intervalLengthSeconds;
    NSNumber * _isServerThrottle;
    NSString * _label;
    NSString * _operationGroupNamePrefix;
    NSNumber * _operationType;
    NSNumber * _repeatEverySeconds;
    NSNumber * _sentRequestCount;
    NSString * _serviceName;
    NSNumber * _throttleID;
    NSDate * _throttleStartDate;
    NSString * _zoneName;
}

@property (nonatomic, retain) NSNumber *allowedRequestCount;
@property (nonatomic, copy) NSString *bundleID;
@property (nonatomic, copy) NSString *containerIdentifier;
@property (retain) NSNumber *currentRequestWindowIndex;
@property (nonatomic, retain) NSNumber *databaseScope;
@property (nonatomic, retain) NSNumber *errorCode;
@property (nonatomic, retain) NSDate *expirationDate;
@property (nonatomic, copy) NSString *functionName;
@property (nonatomic, retain) NSNumber *intervalLengthSeconds;
@property (nonatomic, retain) NSNumber *isServerThrottle;
@property (nonatomic, copy) NSString *label;
@property (nonatomic, copy) NSString *operationGroupNamePrefix;
@property (nonatomic, retain) NSNumber *operationType;
@property (nonatomic, retain) NSNumber *repeatEverySeconds;
@property (retain) NSNumber *sentRequestCount;
@property (nonatomic, copy) NSString *serviceName;
@property (copy) NSNumber *throttleID;
@property (nonatomic, retain) NSDate *throttleStartDate;
@property (nonatomic, copy) NSString *zoneName;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)allowedRequestCount;
- (bool)appliesToCriteria:(id)arg1;
- (id)bundleID;
- (bool)canTestInClientProcess;
- (id)containerIdentifier;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)currentRequestWindowIndex;
- (id)databaseScope;
- (double)delayUntilNextOperationAllowed;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)errorCode;
- (id)expirationDate;
- (id)functionName;
- (unsigned long long)hash;
- (void)incrementSentRequestCount;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)intervalLengthSeconds;
- (bool)isEqual:(id)arg1;
- (bool)isExpired;
- (id)isServerThrottle;
- (id)label;
- (id)operationGroupNamePrefix;
- (id)operationType;
- (id)repeatEverySeconds;
- (id)sentRequestCount;
- (id)serviceName;
- (void)setAllowedRequestCount:(id)arg1;
- (void)setBundleID:(id)arg1;
- (void)setContainerIdentifier:(id)arg1;
- (void)setCurrentRequestWindowIndex:(id)arg1;
- (void)setDatabaseScope:(id)arg1;
- (void)setErrorCode:(id)arg1;
- (void)setExpirationDate:(id)arg1;
- (void)setFunctionName:(id)arg1;
- (void)setIntervalLengthSeconds:(id)arg1;
- (void)setIsServerThrottle:(id)arg1;
- (void)setLabel:(id)arg1;
- (void)setOperationGroupNamePrefix:(id)arg1;
- (void)setOperationType:(id)arg1;
- (void)setRepeatEverySeconds:(id)arg1;
- (void)setSentRequestCount:(id)arg1;
- (void)setServiceName:(id)arg1;
- (void)setThrottleID:(id)arg1;
- (void)setThrottleStartDate:(id)arg1;
- (void)setZoneName:(id)arg1;
- (id)throttleBlockingUntilNextRequestWindow;
- (id)throttleID;
- (id)throttleStartDate;
- (id)zoneName;

@end
