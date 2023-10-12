/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGMIMetricsInferenceAndGroundTruth : PBCodable <NSCopying> {
    bool  _estimatedGroundTruth;
    struct { 
        unsigned int missingAttachmentPredictionPerformanceInMilliSeconds : 1; 
        unsigned int missingRecipientPredictionPerformanceInMilliSeconds : 1; 
        unsigned int saliencyPredictionPerformanceInMilliSeconds : 1; 
        unsigned int predictedSaliency : 1; 
        unsigned int predictedSaliencyScore : 1; 
        unsigned int estimatedGroundTruth : 1; 
    }  _has;
    unsigned long long  _missingAttachmentPredictionPerformanceInMilliSeconds;
    NSMutableArray * _missingAttachments;
    unsigned long long  _missingRecipientPredictionPerformanceInMilliSeconds;
    NSMutableArray * _missingRecipients;
    int  _predictedSaliency;
    float  _predictedSaliencyScore;
    unsigned long long  _saliencyPredictionPerformanceInMilliSeconds;
    SGMIMetricsSubmodelsProbabilities * _submodelsProbabilities;
    SGMIMetricsTrialMetadata * _trialMetadata;
}

@property (nonatomic) bool estimatedGroundTruth;
@property (nonatomic) bool hasEstimatedGroundTruth;
@property (nonatomic) bool hasMissingAttachmentPredictionPerformanceInMilliSeconds;
@property (nonatomic) bool hasMissingRecipientPredictionPerformanceInMilliSeconds;
@property (nonatomic) bool hasPredictedSaliency;
@property (nonatomic) bool hasPredictedSaliencyScore;
@property (nonatomic) bool hasSaliencyPredictionPerformanceInMilliSeconds;
@property (nonatomic, readonly) bool hasSubmodelsProbabilities;
@property (nonatomic, readonly) bool hasTrialMetadata;
@property (nonatomic) unsigned long long missingAttachmentPredictionPerformanceInMilliSeconds;
@property (nonatomic, retain) NSMutableArray *missingAttachments;
@property (nonatomic) unsigned long long missingRecipientPredictionPerformanceInMilliSeconds;
@property (nonatomic, retain) NSMutableArray *missingRecipients;
@property (nonatomic) int predictedSaliency;
@property (nonatomic) float predictedSaliencyScore;
@property (nonatomic) unsigned long long saliencyPredictionPerformanceInMilliSeconds;
@property (nonatomic, retain) SGMIMetricsSubmodelsProbabilities *submodelsProbabilities;
@property (nonatomic, retain) SGMIMetricsTrialMetadata *trialMetadata;

+ (Class)missingAttachmentType;
+ (Class)missingRecipientType;

- (void).cxx_destruct;
- (int)StringAsPredictedSaliency:(id)arg1;
- (void)addMissingAttachment:(id)arg1;
- (void)addMissingRecipient:(id)arg1;
- (void)clearMissingAttachments;
- (void)clearMissingRecipients;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)estimatedGroundTruth;
- (bool)hasEstimatedGroundTruth;
- (bool)hasMissingAttachmentPredictionPerformanceInMilliSeconds;
- (bool)hasMissingRecipientPredictionPerformanceInMilliSeconds;
- (bool)hasPredictedSaliency;
- (bool)hasPredictedSaliencyScore;
- (bool)hasSaliencyPredictionPerformanceInMilliSeconds;
- (bool)hasSubmodelsProbabilities;
- (bool)hasTrialMetadata;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)missingAttachmentAtIndex:(unsigned long long)arg1;
- (unsigned long long)missingAttachmentPredictionPerformanceInMilliSeconds;
- (id)missingAttachments;
- (unsigned long long)missingAttachmentsCount;
- (id)missingRecipientAtIndex:(unsigned long long)arg1;
- (unsigned long long)missingRecipientPredictionPerformanceInMilliSeconds;
- (id)missingRecipients;
- (unsigned long long)missingRecipientsCount;
- (int)predictedSaliency;
- (id)predictedSaliencyAsString:(int)arg1;
- (float)predictedSaliencyScore;
- (bool)readFrom:(id)arg1;
- (unsigned long long)saliencyPredictionPerformanceInMilliSeconds;
- (void)setEstimatedGroundTruth:(bool)arg1;
- (void)setHasEstimatedGroundTruth:(bool)arg1;
- (void)setHasMissingAttachmentPredictionPerformanceInMilliSeconds:(bool)arg1;
- (void)setHasMissingRecipientPredictionPerformanceInMilliSeconds:(bool)arg1;
- (void)setHasPredictedSaliency:(bool)arg1;
- (void)setHasPredictedSaliencyScore:(bool)arg1;
- (void)setHasSaliencyPredictionPerformanceInMilliSeconds:(bool)arg1;
- (void)setMissingAttachmentPredictionPerformanceInMilliSeconds:(unsigned long long)arg1;
- (void)setMissingAttachments:(id)arg1;
- (void)setMissingRecipientPredictionPerformanceInMilliSeconds:(unsigned long long)arg1;
- (void)setMissingRecipients:(id)arg1;
- (void)setPredictedSaliency:(int)arg1;
- (void)setPredictedSaliencyScore:(float)arg1;
- (void)setSaliencyPredictionPerformanceInMilliSeconds:(unsigned long long)arg1;
- (void)setSubmodelsProbabilities:(id)arg1;
- (void)setTrialMetadata:(id)arg1;
- (id)submodelsProbabilities;
- (id)trialMetadata;
- (void)writeTo:(id)arg1;

@end
