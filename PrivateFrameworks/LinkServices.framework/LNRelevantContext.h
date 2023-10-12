/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/LinkServices.framework/LinkServices
 */

@interface LNRelevantContext : NSObject <NSCopying, NSSecureCoding>

@property (readonly) NSString *analyticsDescription;
@property (nonatomic, readonly, copy) NSArray *conditions;

+ (bool)supportsSecureCoding;

- (id)_init;
- (id)analyticsDescription;
- (id)asCondition;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;

// LNRelevantContext (Deprecated)

- (id)asCondition;
- (id)conditions;

@end
