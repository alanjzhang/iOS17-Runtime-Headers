/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/C2.framework/C2
 */

@interface C2MPCloudKitInfo : PBCodable <NSCopying> {
    bool  _anonymous;
    NSString * _applicationBundleIdentifierOverrideForContainerAccess;
    NSString * _applicationBundleIdentifierOverrideForNetworkAttribution;
    NSString * _clientBundleId;
    NSMutableArray * _clientOperations;
    NSString * _clientProcessVersion;
    NSString * _container;
    NSString * _containerScopedDeviceIdentifier;
    NSString * _containerScopedUserIdentifier;
    NSString * _databaseScope;
    NSString * _environment;
    struct { 
        unsigned int reportClientOperationFrequency : 1; 
        unsigned int reportClientOperationFrequencyBase : 1; 
        unsigned int reportOperationGroupFrequency : 1; 
        unsigned int reportOperationGroupFrequencyBase : 1; 
        unsigned int anonymous : 1; 
    }  _has;
    NSMutableArray * _operationGroups;
    unsigned long long  _reportClientOperationFrequency;
    unsigned long long  _reportClientOperationFrequencyBase;
    unsigned long long  _reportOperationGroupFrequency;
    unsigned long long  _reportOperationGroupFrequencyBase;
}

@property (nonatomic) bool anonymous;
@property (nonatomic, retain) NSString *applicationBundleIdentifierOverrideForContainerAccess;
@property (nonatomic, retain) NSString *applicationBundleIdentifierOverrideForNetworkAttribution;
@property (nonatomic, retain) NSString *clientBundleId;
@property (nonatomic, retain) NSMutableArray *clientOperations;
@property (nonatomic, retain) NSString *clientProcessVersion;
@property (nonatomic, retain) NSString *container;
@property (nonatomic, retain) NSString *containerScopedDeviceIdentifier;
@property (nonatomic, retain) NSString *containerScopedUserIdentifier;
@property (nonatomic, retain) NSString *databaseScope;
@property (nonatomic, retain) NSString *environment;
@property (nonatomic) bool hasAnonymous;
@property (nonatomic, readonly) bool hasApplicationBundleIdentifierOverrideForContainerAccess;
@property (nonatomic, readonly) bool hasApplicationBundleIdentifierOverrideForNetworkAttribution;
@property (nonatomic, readonly) bool hasClientBundleId;
@property (nonatomic, readonly) bool hasClientProcessVersion;
@property (nonatomic, readonly) bool hasContainer;
@property (nonatomic, readonly) bool hasContainerScopedDeviceIdentifier;
@property (nonatomic, readonly) bool hasContainerScopedUserIdentifier;
@property (nonatomic, readonly) bool hasDatabaseScope;
@property (nonatomic, readonly) bool hasEnvironment;
@property (nonatomic) bool hasReportClientOperationFrequency;
@property (nonatomic) bool hasReportClientOperationFrequencyBase;
@property (nonatomic) bool hasReportOperationGroupFrequency;
@property (nonatomic) bool hasReportOperationGroupFrequencyBase;
@property (nonatomic, retain) NSMutableArray *operationGroups;
@property (nonatomic) unsigned long long reportClientOperationFrequency;
@property (nonatomic) unsigned long long reportClientOperationFrequencyBase;
@property (nonatomic) unsigned long long reportOperationGroupFrequency;
@property (nonatomic) unsigned long long reportOperationGroupFrequencyBase;

+ (Class)clientOperationType;
+ (Class)operationGroupType;

- (void).cxx_destruct;
- (void)addClientOperation:(id)arg1;
- (void)addOperationGroup:(id)arg1;
- (bool)anonymous;
- (id)applicationBundleIdentifierOverrideForContainerAccess;
- (id)applicationBundleIdentifierOverrideForNetworkAttribution;
- (void)clearClientOperations;
- (void)clearOperationGroups;
- (id)clientBundleId;
- (id)clientOperationAtIndex:(unsigned long long)arg1;
- (id)clientOperations;
- (unsigned long long)clientOperationsCount;
- (id)clientProcessVersion;
- (id)container;
- (id)containerScopedDeviceIdentifier;
- (id)containerScopedUserIdentifier;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)databaseScope;
- (id)description;
- (id)dictionaryRepresentation;
- (id)environment;
- (bool)hasAnonymous;
- (bool)hasApplicationBundleIdentifierOverrideForContainerAccess;
- (bool)hasApplicationBundleIdentifierOverrideForNetworkAttribution;
- (bool)hasClientBundleId;
- (bool)hasClientProcessVersion;
- (bool)hasContainer;
- (bool)hasContainerScopedDeviceIdentifier;
- (bool)hasContainerScopedUserIdentifier;
- (bool)hasDatabaseScope;
- (bool)hasEnvironment;
- (bool)hasReportClientOperationFrequency;
- (bool)hasReportClientOperationFrequencyBase;
- (bool)hasReportOperationGroupFrequency;
- (bool)hasReportOperationGroupFrequencyBase;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)operationGroupAtIndex:(unsigned long long)arg1;
- (id)operationGroups;
- (unsigned long long)operationGroupsCount;
- (bool)readFrom:(id)arg1;
- (unsigned long long)reportClientOperationFrequency;
- (unsigned long long)reportClientOperationFrequencyBase;
- (unsigned long long)reportOperationGroupFrequency;
- (unsigned long long)reportOperationGroupFrequencyBase;
- (void)setAnonymous:(bool)arg1;
- (void)setApplicationBundleIdentifierOverrideForContainerAccess:(id)arg1;
- (void)setApplicationBundleIdentifierOverrideForNetworkAttribution:(id)arg1;
- (void)setClientBundleId:(id)arg1;
- (void)setClientOperations:(id)arg1;
- (void)setClientProcessVersion:(id)arg1;
- (void)setContainer:(id)arg1;
- (void)setContainerScopedDeviceIdentifier:(id)arg1;
- (void)setContainerScopedUserIdentifier:(id)arg1;
- (void)setDatabaseScope:(id)arg1;
- (void)setEnvironment:(id)arg1;
- (void)setHasAnonymous:(bool)arg1;
- (void)setHasReportClientOperationFrequency:(bool)arg1;
- (void)setHasReportClientOperationFrequencyBase:(bool)arg1;
- (void)setHasReportOperationGroupFrequency:(bool)arg1;
- (void)setHasReportOperationGroupFrequencyBase:(bool)arg1;
- (void)setOperationGroups:(id)arg1;
- (void)setReportClientOperationFrequency:(unsigned long long)arg1;
- (void)setReportClientOperationFrequencyBase:(unsigned long long)arg1;
- (void)setReportOperationGroupFrequency:(unsigned long long)arg1;
- (void)setReportOperationGroupFrequencyBase:(unsigned long long)arg1;
- (void)writeTo:(id)arg1;

@end
