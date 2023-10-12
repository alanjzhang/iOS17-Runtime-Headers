/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/Trial.framework/Trial
 */

@interface TRIMASpecVer : NSObject <NSCopying> {
    NSString * _specifier;
    NSString * _version;
}

@property (nonatomic, readonly) NSString *specifier;
@property (nonatomic, readonly) NSString *version;

+ (id)specVerWithSpecifier:(id)arg1 version:(id)arg2;

- (void).cxx_destruct;
- (id)copyWithReplacementSpecifier:(id)arg1;
- (id)copyWithReplacementVersion:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (id)initWithSpecifier:(id)arg1 version:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSpecVer:(id)arg1;
- (id)specifier;
- (id)version;

@end