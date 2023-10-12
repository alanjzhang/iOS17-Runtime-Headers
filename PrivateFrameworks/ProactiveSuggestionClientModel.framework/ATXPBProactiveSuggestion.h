/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ProactiveSuggestionClientModel.framework/ProactiveSuggestionClientModel
 */

@interface ATXPBProactiveSuggestion : PBCodable <NSCopying> {
    ATXPBProactiveSuggestionClientModelSpecification * _clientModelSpecification;
    ATXPBProactiveSuggestionExecutableSpecification * _executableSpecification;
    ATXPBProactiveSuggestionScoreSpecification * _scoreSpecification;
    ATXPBProactiveSuggestionUISpecification * _uiSpecification;
    NSString * _uuidString;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end