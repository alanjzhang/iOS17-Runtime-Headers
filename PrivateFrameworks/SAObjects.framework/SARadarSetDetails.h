/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SARadarSetDetails : SABaseClientBoundCommand

@property (nonatomic, copy) NSString *classification;
@property (nonatomic, copy) NSString *description;
@property (nonatomic, copy) NSString *title;

+ (id)setDetails;
+ (id)setDetailsWithDictionary:(id)arg1 context:(id)arg2;

- (id)classification;
- (id)description;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setClassification:(id)arg1;
- (void)setDescription:(id)arg1;
- (void)setTitle:(id)arg1;
- (id)title;

@end
