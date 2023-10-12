/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

@interface CHStrokeGroupQueryItem : NSObject {
    NSDictionary * __errorsByLocale;
    NSDictionary * __tokenizedTextResultsByLocale;
    NSLocale * _preferredLocale;
    NSNumber * _strokeGroupIdentifier;
    NSNumber * _strokeGroupStableIdentifier;
    long long  _strokeGroupType;
    NSArray * _strokeIdentifiers;
}

@property (nonatomic, readonly, copy) NSLocale *preferredLocale;
@property (nonatomic, readonly) NSNumber *strokeGroupIdentifier;
@property (nonatomic, readonly) NSNumber *strokeGroupStableIdentifier;
@property (nonatomic, readonly) long long strokeGroupType;
@property (nonatomic, readonly, copy) NSArray *strokeIdentifiers;

// CHStrokeGroupQueryItem (null)

+ (id)descriptionForStrokeGroupQueryItemType:(long long)arg1;

- (void).cxx_destruct;
- (id)description;
- (id)preferredLocale;
- (id)strokeGroupIdentifier;
- (id)strokeGroupStableIdentifier;
- (long long)strokeGroupType;
- (id)strokeIdentifiers;
- (id)textRecognitionResultForLocale:(id)arg1 error:(id*)arg2;

@end
