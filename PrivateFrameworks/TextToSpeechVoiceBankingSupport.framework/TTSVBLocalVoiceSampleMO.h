/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/TextToSpeechVoiceBankingSupport.framework/TextToSpeechVoiceBankingSupport
 */

@interface TTSVBLocalVoiceSampleMO : NSManagedObject

@property (nonatomic) short apiVersion;
@property (nonatomic, copy) NSString *bookTitle;
@property (nonatomic) double estimatedDuration;
@property (nonatomic) int flags_;
@property (nonatomic, copy) NSString *locale;
@property (nonatomic) int paragraphIndex;
@property (nonatomic, copy) NSString *phonemes;
@property (nonatomic, copy) NSString *phrase;
@property (nonatomic, copy) NSDate *recordingDate;
@property (nonatomic) double recordingDuration;
@property (nonatomic, copy) NSString *sampleID;
@property (nonatomic) int sentenceIndex;
@property (nonatomic) float snr;
@property (nonatomic) float snrThreshold;
@property (nonatomic) float spl;
@property (nonatomic) float splThreshold;
@property (nonatomic, copy) NSString *transcript;
@property (nonatomic, copy) NSString *userPhrase;
@property (nonatomic) short userScore;
@property (nonatomic, retain) TTSVBLocalVoiceMO *voice;

- (id)initWithEntity:(id)arg1 insertIntoManagedObjectContext:(id)arg2;

@end
