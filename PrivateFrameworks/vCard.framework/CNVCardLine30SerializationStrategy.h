/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/vCard.framework/vCard
 */

@interface CNVCardLine30SerializationStrategy : CNVCardLineSerializationStrategyImpl {
    unsigned long long  _startingLineLength;
}

- (void)_addAutomagicParametersForData:(id)arg1;
- (id)detectedTypeOfData:(id)arg1;
- (void)serializeArray:(id)arg1 withItemSeparator:(id)arg2;
- (void)serializeData:(id)arg1;
- (void)serializeGroupedLines:(id)arg1 withGroupingName:(id)arg2;
- (void)serializeGroupingName:(id)arg1;
- (void)serializeParameters:(id)arg1;
- (void)serializeString:(id)arg1;
- (void)serializeVersionPlaceholder;
- (void)willSerializeValue;

@end
