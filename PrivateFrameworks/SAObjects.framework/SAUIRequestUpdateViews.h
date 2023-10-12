/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@interface SAUIRequestUpdateViews : SABaseClientBoundCommand

@property (nonatomic, copy) NSArray *commands;
@property (nonatomic, copy) NSNumber *timeInSeconds;
@property (nonatomic, copy) NSArray *viewIds;

+ (id)requestUpdateViews;
+ (id)requestUpdateViewsWithDictionary:(id)arg1 context:(id)arg2;

- (id)commands;
- (id)encodedClassName;
- (id)groupIdentifier;
- (bool)requiresResponse;
- (void)setCommands:(id)arg1;
- (void)setTimeInSeconds:(id)arg1;
- (void)setViewIds:(id)arg1;
- (id)timeInSeconds;
- (id)viewIds;

@end
