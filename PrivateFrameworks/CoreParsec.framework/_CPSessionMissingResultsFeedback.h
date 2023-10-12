/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

@interface _CPSessionMissingResultsFeedback : PBCodable <NSSecureCoding, _CPProcessableFeedback, _CPSessionMissingResultsFeedback> {
    NSArray * _results;
    unsigned long long  _timestamp;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (nonatomic, copy) NSArray *results;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long timestamp;

- (void).cxx_destruct;
- (void)addResults:(id)arg1;
- (void)clearResults;
- (unsigned long long)hash;
- (id)init;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (id)results;
- (id)resultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)resultsCount;
- (void)setResults:(id)arg1;
- (void)setTimestamp:(unsigned long long)arg1;
- (unsigned long long)timestamp;
- (void)writeTo:(id)arg1;

@end
