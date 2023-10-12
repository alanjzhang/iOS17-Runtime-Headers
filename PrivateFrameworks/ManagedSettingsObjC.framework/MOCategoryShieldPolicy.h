/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ManagedSettingsObjC.framework/ManagedSettingsObjC
 */

@interface MOCategoryShieldPolicy : NSObject {
    NSArray * _excludedContent;
    long long  _policy;
    NSArray * _specificCategories;
}

@property (readonly) NSArray *excludedContent;
@property (readonly) long long policy;
@property (readonly) NSArray *specificCategories;

+ (id)allPolicyWithExcludedContent:(id)arg1;
+ (id)nonePolicy;
+ (id)specificPolicyWithCategories:(id)arg1 excludedContent:(id)arg2;

- (void).cxx_destruct;
- (id)excludedContent;
- (id)initWithPolicy:(long long)arg1 specificCategories:(id)arg2 excludedContent:(id)arg3;
- (long long)policy;
- (id)specificCategories;

@end
