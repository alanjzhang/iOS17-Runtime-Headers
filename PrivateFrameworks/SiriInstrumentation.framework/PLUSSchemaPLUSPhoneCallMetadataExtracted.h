/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface PLUSSchemaPLUSPhoneCallMetadataExtracted : SISchemaInstrumentationMessage {
    int  _followupNameSimilarity;
    struct { 
        unsigned int hasSiriResolvedContact : 1; 
        unsigned int hasSiriInitiatedCall : 1; 
        unsigned int hasUserMadeFollowupCallWithinDetectionWindow : 1; 
        unsigned int hasUserMadeFollowupCallWithinEvaluationWindow : 1; 
        unsigned int siriAndFollowupContactComparison : 1; 
        unsigned int siriCallDuration : 1; 
        unsigned int siriCallTimeToHangup : 1; 
        unsigned int userTimeToFollowup : 1; 
        unsigned int isSameCallRouteForSiriAndFollowup : 1; 
        unsigned int isSameCallCapabilityForFollowup : 1; 
        unsigned int followupNameSimilarity : 1; 
    }  _has;
    bool  _hasOriginalPlusId;
    bool  _hasSiriInitiatedCall;
    bool  _hasSiriResolvedContact;
    bool  _hasUserMadeFollowupCallWithinDetectionWindow;
    bool  _hasUserMadeFollowupCallWithinEvaluationWindow;
    bool  _isSameCallCapabilityForFollowup;
    bool  _isSameCallRouteForSiriAndFollowup;
    SISchemaUUID * _originalPlusId;
    int  _siriAndFollowupContactComparison;
    int  _siriCallDuration;
    int  _siriCallTimeToHangup;
    int  _userTimeToFollowup;
}

@property (nonatomic) int followupNameSimilarity;
@property (nonatomic) bool hasFollowupNameSimilarity;
@property (nonatomic) bool hasHasSiriInitiatedCall;
@property (nonatomic) bool hasHasSiriResolvedContact;
@property (nonatomic) bool hasHasUserMadeFollowupCallWithinDetectionWindow;
@property (nonatomic) bool hasHasUserMadeFollowupCallWithinEvaluationWindow;
@property (nonatomic) bool hasIsSameCallCapabilityForFollowup;
@property (nonatomic) bool hasIsSameCallRouteForSiriAndFollowup;
@property (nonatomic) bool hasOriginalPlusId;
@property (nonatomic) bool hasSiriAndFollowupContactComparison;
@property (nonatomic) bool hasSiriCallDuration;
@property (nonatomic) bool hasSiriCallTimeToHangup;
@property (nonatomic) bool hasSiriInitiatedCall;
@property (nonatomic) bool hasSiriResolvedContact;
@property (nonatomic) bool hasUserMadeFollowupCallWithinDetectionWindow;
@property (nonatomic) bool hasUserMadeFollowupCallWithinEvaluationWindow;
@property (nonatomic) bool hasUserTimeToFollowup;
@property (nonatomic) bool isSameCallCapabilityForFollowup;
@property (nonatomic) bool isSameCallRouteForSiriAndFollowup;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, retain) SISchemaUUID *originalPlusId;
@property (nonatomic) int siriAndFollowupContactComparison;
@property (nonatomic) int siriCallDuration;
@property (nonatomic) int siriCallTimeToHangup;
@property (nonatomic) int userTimeToFollowup;

- (void).cxx_destruct;
- (void)deleteFollowupNameSimilarity;
- (void)deleteHasSiriInitiatedCall;
- (void)deleteHasSiriResolvedContact;
- (void)deleteHasUserMadeFollowupCallWithinDetectionWindow;
- (void)deleteHasUserMadeFollowupCallWithinEvaluationWindow;
- (void)deleteIsSameCallCapabilityForFollowup;
- (void)deleteIsSameCallRouteForSiriAndFollowup;
- (void)deleteOriginalPlusId;
- (void)deleteSiriAndFollowupContactComparison;
- (void)deleteSiriCallDuration;
- (void)deleteSiriCallTimeToHangup;
- (void)deleteUserTimeToFollowup;
- (id)dictionaryRepresentation;
- (int)followupNameSimilarity;
- (bool)hasFollowupNameSimilarity;
- (bool)hasHasSiriInitiatedCall;
- (bool)hasHasSiriResolvedContact;
- (bool)hasHasUserMadeFollowupCallWithinDetectionWindow;
- (bool)hasHasUserMadeFollowupCallWithinEvaluationWindow;
- (bool)hasIsSameCallCapabilityForFollowup;
- (bool)hasIsSameCallRouteForSiriAndFollowup;
- (bool)hasOriginalPlusId;
- (bool)hasSiriAndFollowupContactComparison;
- (bool)hasSiriCallDuration;
- (bool)hasSiriCallTimeToHangup;
- (bool)hasSiriInitiatedCall;
- (bool)hasSiriResolvedContact;
- (bool)hasUserMadeFollowupCallWithinDetectionWindow;
- (bool)hasUserMadeFollowupCallWithinEvaluationWindow;
- (bool)hasUserTimeToFollowup;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isSameCallCapabilityForFollowup;
- (bool)isSameCallRouteForSiriAndFollowup;
- (id)jsonData;
- (id)originalPlusId;
- (bool)readFrom:(id)arg1;
- (void)setFollowupNameSimilarity:(int)arg1;
- (void)setHasFollowupNameSimilarity:(bool)arg1;
- (void)setHasHasSiriInitiatedCall:(bool)arg1;
- (void)setHasHasSiriResolvedContact:(bool)arg1;
- (void)setHasHasUserMadeFollowupCallWithinDetectionWindow:(bool)arg1;
- (void)setHasHasUserMadeFollowupCallWithinEvaluationWindow:(bool)arg1;
- (void)setHasIsSameCallCapabilityForFollowup:(bool)arg1;
- (void)setHasIsSameCallRouteForSiriAndFollowup:(bool)arg1;
- (void)setHasOriginalPlusId:(bool)arg1;
- (void)setHasSiriAndFollowupContactComparison:(bool)arg1;
- (void)setHasSiriCallDuration:(bool)arg1;
- (void)setHasSiriCallTimeToHangup:(bool)arg1;
- (void)setHasSiriInitiatedCall:(bool)arg1;
- (void)setHasSiriResolvedContact:(bool)arg1;
- (void)setHasUserMadeFollowupCallWithinDetectionWindow:(bool)arg1;
- (void)setHasUserMadeFollowupCallWithinEvaluationWindow:(bool)arg1;
- (void)setHasUserTimeToFollowup:(bool)arg1;
- (void)setIsSameCallCapabilityForFollowup:(bool)arg1;
- (void)setIsSameCallRouteForSiriAndFollowup:(bool)arg1;
- (void)setOriginalPlusId:(id)arg1;
- (void)setSiriAndFollowupContactComparison:(int)arg1;
- (void)setSiriCallDuration:(int)arg1;
- (void)setSiriCallTimeToHangup:(int)arg1;
- (void)setUserTimeToFollowup:(int)arg1;
- (int)siriAndFollowupContactComparison;
- (int)siriCallDuration;
- (int)siriCallTimeToHangup;
- (int)userTimeToFollowup;
- (void)writeTo:(id)arg1;

// PLUSSchemaPLUSPhoneCallMetadataExtracted (SensitiveConditions)

- (id)applySensitiveConditionsPolicy:(id)arg1;
- (id)suppressMessageUnderConditions;

@end
