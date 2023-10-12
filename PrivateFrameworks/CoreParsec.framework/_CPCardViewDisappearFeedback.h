/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

@interface _CPCardViewDisappearFeedback : PBCodable <NSSecureCoding, _CPCardViewDisappearFeedback, _CPProcessableFeedback> {
    _CPCardForFeedback * _card;
    int  _cardDisappearEvent;
    unsigned long long  _timestamp;
}

@property (nonatomic, retain) _CPCardForFeedback *card;
@property (nonatomic) int cardDisappearEvent;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long timestamp;

- (void).cxx_destruct;
- (id)card;
- (int)cardDisappearEvent;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCard:(id)arg1;
- (void)setCardDisappearEvent:(int)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

// _CPCardViewDisappearFeedback (SFInitializer)

- (id)initWithFacade:(id)arg1;

@end
