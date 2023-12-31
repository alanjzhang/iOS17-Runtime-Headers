/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

@interface CHMutableNonTextCandidateStroke : CHNonTextCandidateStroke

@property (nonatomic) long long fallbackClassification;
@property (nonatomic, retain) NSDictionary *supportByStrokeIdentifier;

// CHMutableNonTextCandidateStroke (null)

- (bool)adjustSupportByAddingStroke:(id)arg1 consistingOfSubstrokes:(id)arg2 strokeClassification:(long long)arg3;
- (bool)adjustSupportByRemovingStrokeIdentifier:(id)arg1;
- (id)description;
- (void)setFallbackClassification:(long long)arg1;
- (void)setSupportByStrokeIdentifier:(id)arg1;

@end
