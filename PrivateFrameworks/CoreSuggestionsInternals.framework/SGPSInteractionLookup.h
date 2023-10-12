/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
 */

@interface SGPSInteractionLookup : NSObject <NSCopying, NSSecureCoding> {
    NSString * _detail;
}

@property (nonatomic, readonly, copy) NSString *detail;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)detail;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithDetail:(id)arg1;
- (id)interactionInformation;
- (id)interactionString;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToPSInteractionLookup:(id)arg1;
- (id)resolveAppNameForBundleId:(id)arg1;
- (id)resourceBundle;

@end
