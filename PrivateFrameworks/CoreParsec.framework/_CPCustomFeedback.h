/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

@interface _CPCustomFeedback : PBCodable <NSSecureCoding, _CPCustomFeedback, _CPProcessableFeedback> {
    int  _feedbackType;
    NSData * _jsonFeedback;
    unsigned long long  _timestamp;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) int feedbackType;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSData *jsonFeedback;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long timestamp;

- (void).cxx_destruct;
- (int)feedbackType;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (id)jsonFeedback;
- (bool)readFrom:(id)arg1;
- (void)setFeedbackType:(int)arg1;
- (void)setJsonFeedback:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

// _CPCustomFeedback (SFInitializer)

- (id)initWithFacade:(id)arg1;

@end
