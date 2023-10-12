/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SiriInstrumentation.framework/SiriInstrumentation
 */

@interface PEGASUSSchemaPEGASUSWebAnswerExecution : SISchemaInstrumentationMessage {
    unsigned int  _allowListType;
    unsigned int  _answerClass;
    unsigned int  _answerType;
    unsigned int  _fuzzyMatchType;
    struct { 
        unsigned int answerType : 1; 
        unsigned int allowListType : 1; 
        unsigned int fuzzyMatchType : 1; 
        unsigned int subDomain : 1; 
        unsigned int quality : 1; 
        unsigned int answerClass : 1; 
        unsigned int numHighlights : 1; 
        unsigned int numCallouts : 1; 
        unsigned int numLinkedCallouts : 1; 
    }  _has;
    unsigned int  _numCallouts;
    unsigned int  _numHighlights;
    unsigned int  _numLinkedCallouts;
    unsigned int  _quality;
    unsigned int  _subDomain;
}

@property (nonatomic) unsigned int allowListType;
@property (nonatomic) unsigned int answerClass;
@property (nonatomic) unsigned int answerType;
@property (nonatomic) unsigned int fuzzyMatchType;
@property (nonatomic) bool hasAllowListType;
@property (nonatomic) bool hasAnswerClass;
@property (nonatomic) bool hasAnswerType;
@property (nonatomic) bool hasFuzzyMatchType;
@property (nonatomic) bool hasNumCallouts;
@property (nonatomic) bool hasNumHighlights;
@property (nonatomic) bool hasNumLinkedCallouts;
@property (nonatomic) bool hasQuality;
@property (nonatomic) bool hasSubDomain;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic) unsigned int numCallouts;
@property (nonatomic) unsigned int numHighlights;
@property (nonatomic) unsigned int numLinkedCallouts;
@property (nonatomic) unsigned int quality;
@property (nonatomic) unsigned int subDomain;

- (unsigned int)allowListType;
- (unsigned int)answerClass;
- (unsigned int)answerType;
- (void)deleteAllowListType;
- (void)deleteAnswerClass;
- (void)deleteAnswerType;
- (void)deleteFuzzyMatchType;
- (void)deleteNumCallouts;
- (void)deleteNumHighlights;
- (void)deleteNumLinkedCallouts;
- (void)deleteQuality;
- (void)deleteSubDomain;
- (id)dictionaryRepresentation;
- (unsigned int)fuzzyMatchType;
- (bool)hasAllowListType;
- (bool)hasAnswerClass;
- (bool)hasAnswerType;
- (bool)hasFuzzyMatchType;
- (bool)hasNumCallouts;
- (bool)hasNumHighlights;
- (bool)hasNumLinkedCallouts;
- (bool)hasQuality;
- (bool)hasSubDomain;
- (unsigned long long)hash;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (bool)isEqual:(id)arg1;
- (id)jsonData;
- (unsigned int)numCallouts;
- (unsigned int)numHighlights;
- (unsigned int)numLinkedCallouts;
- (unsigned int)quality;
- (bool)readFrom:(id)arg1;
- (void)setAllowListType:(unsigned int)arg1;
- (void)setAnswerClass:(unsigned int)arg1;
- (void)setAnswerType:(unsigned int)arg1;
- (void)setFuzzyMatchType:(unsigned int)arg1;
- (void)setHasAllowListType:(bool)arg1;
- (void)setHasAnswerClass:(bool)arg1;
- (void)setHasAnswerType:(bool)arg1;
- (void)setHasFuzzyMatchType:(bool)arg1;
- (void)setHasNumCallouts:(bool)arg1;
- (void)setHasNumHighlights:(bool)arg1;
- (void)setHasNumLinkedCallouts:(bool)arg1;
- (void)setHasQuality:(bool)arg1;
- (void)setHasSubDomain:(bool)arg1;
- (void)setNumCallouts:(unsigned int)arg1;
- (void)setNumHighlights:(unsigned int)arg1;
- (void)setNumLinkedCallouts:(unsigned int)arg1;
- (void)setQuality:(unsigned int)arg1;
- (void)setSubDomain:(unsigned int)arg1;
- (unsigned int)subDomain;
- (void)writeTo:(id)arg1;

// PEGASUSSchemaPEGASUSWebAnswerExecution (SensitiveConditions)

- (id)suppressMessageUnderConditions;

@end
