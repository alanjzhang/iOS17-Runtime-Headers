/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UserManagement.framework/UserManagement
 */

@interface UMUser : NSObject <NSCopying, NSMutableCopying> {
    id  __photo;
    NSString * _alternateDSID;
    NSDate * _creationDate;
    unsigned long long  _dataQuota;
    unsigned long long  _dataUsed;
    NSError * _debugErrorCausingLogout;
    NSString * _displayName;
    NSError * _errorCausingLogout;
    NSString * _familyName;
    NSDate * _firstLoginEndDate;
    NSDate * _firstLoginStartDate;
    unsigned int  _gid;
    NSString * _givenName;
    bool  _hasDataToSync;
    bool  _hasManagedCredentials;
    NSURL * _homeDirectoryURL;
    bool  _isAdminUser;
    bool  _isAuditor;
    bool  _isDisabled;
    bool  _isLoginUser;
    bool  _isPrimaryUser;
    bool  _isTransientUser;
    NSArray * _languages;
    NSDate * _lastCachedLoginEndDate;
    NSDate * _lastCachedLoginStartDate;
    NSDate * _lastLoginDate;
    NSDate * _lastLogoutEndDate;
    NSDate * _lastLogoutStartDate;
    NSDate * _lastRemoteAuthDate;
    unsigned long long  _passcodeLockGracePeriod;
    unsigned long long  _passcodeType;
    NSURL * _photoURL;
    bool  _shouldFetchAttributes;
    unsigned int  _uid;
    NSString * _userAuxiliaryString;
    NSString * _username;
}

@property (nonatomic, copy) id _photo;
@property (nonatomic, readonly) NSArray *allUserPersonas;
@property (nonatomic, copy) NSString *alternateDSID;
@property (nonatomic, copy) NSDate *creationDate;
@property (nonatomic) unsigned long long dataQuota;
@property (nonatomic) unsigned long long dataUsed;
@property (nonatomic, copy) NSError *debugErrorCausingLogout;
@property (nonatomic, copy) NSString *displayName;
@property (nonatomic, retain) NSError *errorCausingLogout;
@property (nonatomic, copy) NSString *familyName;
@property (nonatomic, copy) NSDate *firstLoginEndDate;
@property (nonatomic, copy) NSDate *firstLoginStartDate;
@property (nonatomic) unsigned int gid;
@property (nonatomic, copy) NSString *givenName;
@property (nonatomic) bool hasDataToSync;
@property (nonatomic) bool hasManagedCredentials;
@property (nonatomic, copy) NSURL *homeDirectoryURL;
@property (nonatomic) bool isAdminUser;
@property (nonatomic) bool isAuditor;
@property (nonatomic) bool isDisabled;
@property (nonatomic) bool isLoginUser;
@property (nonatomic) bool isPrimaryUser;
@property (nonatomic) bool isTransientUser;
@property (nonatomic, copy) NSArray *languages;
@property (nonatomic, copy) NSDate *lastCachedLoginEndDate;
@property (nonatomic, copy) NSDate *lastCachedLoginStartDate;
@property (nonatomic, copy) NSDate *lastLoginDate;
@property (nonatomic, copy) NSDate *lastLogoutEndDate;
@property (nonatomic, copy) NSDate *lastLogoutStartDate;
@property (nonatomic, copy) NSDate *lastRemoteAuthDate;
@property (nonatomic, readonly) double passcodeBackOffInterval;
@property (nonatomic) unsigned long long passcodeLockGracePeriod;
@property (nonatomic) unsigned long long passcodeType;
@property (nonatomic, copy) NSURL *photoURL;
@property (nonatomic) bool shouldFetchAttributes;
@property (nonatomic) unsigned int uid;
@property (nonatomic, copy) NSString *userAuxiliaryString;
@property (nonatomic, readonly) unsigned long long userType;
@property (nonatomic, copy) NSString *username;

- (void).cxx_destruct;
- (id)_photo;
- (id)allUserPersonas;
- (id)alternateDSID;
- (bool)commitChanges;
- (bool)commitChangesWithError:(id*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)creationDate;
- (unsigned long long)dataQuota;
- (unsigned long long)dataUsed;
- (id)debugErrorCausingLogout;
- (id)description;
- (id)displayName;
- (id)errorCausingLogout;
- (id)familyName;
- (id)firstLoginEndDate;
- (id)firstLoginStartDate;
- (unsigned int)gid;
- (id)givenName;
- (bool)hasDataToSync;
- (bool)hasManagedCredentials;
- (id)homeDirectoryURL;
- (bool)inFirstLoginSession;
- (id)init;
- (bool)isAdminUser;
- (bool)isAuditor;
- (bool)isDisabled;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToUser:(id)arg1;
- (bool)isLoginUser;
- (bool)isPrimaryUser;
- (bool)isTransientUser;
- (id)languages;
- (id)lastCachedLoginEndDate;
- (id)lastCachedLoginStartDate;
- (id)lastLoginDate;
- (id)lastLogoutEndDate;
- (id)lastLogoutStartDate;
- (id)lastRemoteAuthDate;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (double)passcodeBackOffInterval;
- (unsigned long long)passcodeLockGracePeriod;
- (unsigned long long)passcodeType;
- (id)photoURL;
- (void)setAlternateDSID:(id)arg1;
- (void)setCreationDate:(id)arg1;
- (void)setDataQuota:(unsigned long long)arg1;
- (void)setDataUsed:(unsigned long long)arg1;
- (void)setDebugErrorCausingLogout:(id)arg1;
- (void)setDisplayName:(id)arg1;
- (void)setErrorCausingLogout:(id)arg1;
- (void)setFamilyName:(id)arg1;
- (void)setFirstLoginEndDate:(id)arg1;
- (void)setFirstLoginStartDate:(id)arg1;
- (void)setGid:(unsigned int)arg1;
- (void)setGivenName:(id)arg1;
- (void)setHasDataToSync:(bool)arg1;
- (void)setHasManagedCredentials:(bool)arg1;
- (void)setHomeDirectoryURL:(id)arg1;
- (void)setIsAdminUser:(bool)arg1;
- (void)setIsAuditor:(bool)arg1;
- (void)setIsDisabled:(bool)arg1;
- (void)setIsLoginUser:(bool)arg1;
- (void)setIsPrimaryUser:(bool)arg1;
- (void)setIsTransientUser:(bool)arg1;
- (void)setLanguages:(id)arg1;
- (void)setLastCachedLoginEndDate:(id)arg1;
- (void)setLastCachedLoginStartDate:(id)arg1;
- (void)setLastLoginDate:(id)arg1;
- (void)setLastLogoutEndDate:(id)arg1;
- (void)setLastLogoutStartDate:(id)arg1;
- (void)setLastRemoteAuthDate:(id)arg1;
- (void)setPasscodeLockGracePeriod:(unsigned long long)arg1;
- (void)setPasscodeType:(unsigned long long)arg1;
- (void)setPhotoURL:(id)arg1;
- (void)setShouldFetchAttributes:(bool)arg1;
- (void)setUid:(unsigned int)arg1;
- (void)setUserAuxiliaryString:(id)arg1;
- (void)setUsername:(id)arg1;
- (void)set_photo:(id)arg1;
- (bool)shouldFetchAttributes;
- (unsigned int)uid;
- (id)userAuxiliaryString;
- (id)userPersonaFromIdentityString:(id)arg1;
- (unsigned long long)userType;
- (id)username;

@end
