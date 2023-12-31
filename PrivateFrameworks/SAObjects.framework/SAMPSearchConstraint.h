/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAMPSearchConstraint : AceObject <SAAceSerializable>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSArray *mediaPlayerOrderingTerms;
@property (nonatomic, copy) NSString *query;
@property (nonatomic, copy) NSArray *searchProperties;
@property (readonly) Class superclass;

+ (id)searchConstraint;
+ (id)searchConstraintWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (id)mediaPlayerOrderingTerms;
- (id)query;
- (id)searchProperties;
- (void)setMediaPlayerOrderingTerms:(id)arg1;
- (void)setQuery:(id)arg1;
- (void)setSearchProperties:(id)arg1;

@end
