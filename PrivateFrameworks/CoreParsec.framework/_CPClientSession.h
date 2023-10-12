/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

@interface _CPClientSession : PBCodable <NSSecureCoding, _CPClientSession> {
    NSString * _agent;
    _CPUsageEnvelope * _cohortsFeedback;
    NSString * _countryCode;
    unsigned int  _devicePersistentD20;
    bool  _duEnabled;
    NSArray * _experimentInfos;
    NSArray * _feedbacks;
    bool  _isInternalCarry;
    NSData * _jsonFeedback;
    NSString * _locale;
    NSString * _parsecDeveloperID;
    int  _previousSessionEndReason;
    int  _privateRelayStatus;
    bool  _removeTimestamps;
    NSDictionary * _resourceVersions;
    double  _sessionStart;
    _CPUsageSinceLookback * _usageSinceLookback;
    NSString * _userGuidString;
}

@property (nonatomic, copy) NSString *agent;
@property (nonatomic, retain) _CPUsageEnvelope *cohortsFeedback;
@property (nonatomic, copy) NSString *countryCode;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) unsigned int devicePersistentD20;
@property (nonatomic) bool duEnabled;
@property (nonatomic, copy) NSArray *experimentInfos;
@property (nonatomic, copy) NSArray *feedbacks;
@property (readonly) unsigned long long hash;
@property (nonatomic) bool isInternalCarry;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSData *jsonFeedback;
@property (nonatomic, copy) NSString *locale;
@property (nonatomic, copy) NSString *parsecDeveloperID;
@property (nonatomic) int previousSessionEndReason;
@property (nonatomic) int privateRelayStatus;
@property (nonatomic) bool removeTimestamps;
@property (nonatomic, copy) NSDictionary *resourceVersions;
@property (nonatomic) double sessionStart;
@property (readonly) Class superclass;
@property (nonatomic, retain) _CPUsageSinceLookback *usageSinceLookback;
@property (nonatomic, copy) NSString *userGuidString;

- (void).cxx_destruct;
- (void)addExperimentInfo:(id)arg1;
- (void)addFeedback:(id)arg1;
- (id)agent;
- (void)clearExperimentInfo;
- (void)clearFeedback;
- (id)cohortsFeedback;
- (id)countryCode;
- (unsigned int)devicePersistentD20;
- (bool)duEnabled;
- (id)experimentInfoAtIndex:(unsigned long long)arg1;
- (unsigned long long)experimentInfoCount;
- (id)experimentInfos;
- (id)feedbackAtIndex:(unsigned long long)arg1;
- (unsigned long long)feedbackCount;
- (id)feedbacks;
- (bool)getResourceVersions:(id*)arg1 forKey:(id)arg2;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)isInternalCarry;
- (id)jsonFeedback;
- (id)locale;
- (id)parsecDeveloperID;
- (int)previousSessionEndReason;
- (int)privateRelayStatus;
- (bool)readFrom:(id)arg1;
- (bool)removeTimestamps;
- (id)resourceVersions;
- (double)sessionStart;
- (void)setAgent:(id)arg1;
- (void)setCohortsFeedback:(id)arg1;
- (void)setCountryCode:(id)arg1;
- (void)setDevicePersistentD20:(unsigned int)arg1;
- (void)setDuEnabled:(bool)arg1;
- (void)setExperimentInfo:(id)arg1;
- (void)setExperimentInfos:(id)arg1;
- (void)setFeedback:(id)arg1;
- (void)setFeedbacks:(id)arg1;
- (void)setIsInternalCarry:(bool)arg1;
- (void)setJsonFeedback:(id)arg1;
- (void)setLocale:(id)arg1;
- (void)setParsecDeveloperID:(id)arg1;
- (void)setPreviousSessionEndReason:(int)arg1;
- (void)setPrivateRelayStatus:(int)arg1;
- (void)setRemoveTimestamps:(bool)arg1;
- (void)setResourceVersions:(id)arg1;
- (void)setResourceVersions:(id)arg1 forKey:(id)arg2;
- (void)setSessionStart:(double)arg1;
- (void)setUsageSinceLookback:(id)arg1;
- (void)setUserGuidString:(id)arg1;
- (id)usageSinceLookback;
- (id)userGuidString;
- (void)writeTo:(id)arg1;

@end
