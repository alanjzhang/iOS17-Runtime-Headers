/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLPhotoAnalysisPersonSuggestion : NSObject {
    bool  _confirmed;
    long long  _keyFaceClusterSequenceNumber;
    NSString * _keyFaceLocalIdentifier;
    long long  _personFaceCount;
    NSString * _personLocalIdentifier;
    double  _similarityScore;
}

@property (nonatomic, readonly) bool confirmed;
@property (nonatomic, readonly) long long keyFaceClusterSequenceNumber;
@property (nonatomic, readonly, copy) NSString *keyFaceLocalIdentifier;
@property (nonatomic, readonly) long long personFaceCount;
@property (nonatomic, readonly, copy) NSString *personLocalIdentifier;
@property (nonatomic, readonly) double similarityScore;

- (void).cxx_destruct;
- (bool)confirmed;
- (id)description;
- (id)initWithSuggestionDictionary:(id)arg1;
- (long long)keyFaceClusterSequenceNumber;
- (id)keyFaceLocalIdentifier;
- (long long)personFaceCount;
- (id)personLocalIdentifier;
- (double)similarityScore;
- (id)suggestionDictionaryRepresentation;

@end
