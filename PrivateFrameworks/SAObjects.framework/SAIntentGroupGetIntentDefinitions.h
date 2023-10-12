/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAIntentGroupGetIntentDefinitions : SABaseClientBoundCommand

@property (nonatomic, copy) NSArray *queries;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects

+ (id)getIntentDefinitions;
+ (id)getIntentDefinitionsWithDictionary:(id)arg1 context:(id)arg2;

- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)mutatingCommand;
- (id)queries;
- (bool)requiresResponse;
- (void)setQueries:(id)arg1;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/IntentsServices.framework/IntentsServices

// SAIntentGroupGetIntentDefinitions (INSExtensionService)

- (bool)_matchesIntentDefinition:(id)arg1;
- (void)ins_getIntentDefinitionsWithCompletionHandler:(id /* block */)arg1;

@end