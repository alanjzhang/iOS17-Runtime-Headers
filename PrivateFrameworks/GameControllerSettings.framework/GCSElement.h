/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/GameControllerSettings.framework/GameControllerSettings
 */

@interface GCSElement : NSObject <GCSJSONSerializable, NSSecureCoding> {
    long long  _kind;
    NSString * _name;
    NSString * _nameLocalizationKey;
    int  _remappingKey;
    NSString * _sfSymbolsName;
}

@property (nonatomic, readonly) <GCSJSONObject> *jsonObject;
@property (nonatomic, readonly) long long kind;
@property (nonatomic, readonly) NSString *localizedName;
@property (nonatomic, readonly, copy) NSString *name;
@property (nonatomic, readonly, copy) NSString *nameLocalizationKey;
@property (nonatomic, readonly) int remappingKey;
@property (nonatomic, readonly, copy) NSString *sfSymbolsName;

- (void).cxx_destruct;
- (id)description;
- (id)initWithName:(id)arg1 nameLocalizationKey:(id)arg2 sfSymbolsName:(id)arg3 remappingKey:(int)arg4 kind:(long long)arg5;
- (long long)kind;
- (id)localizedName;
- (id)name;
- (id)nameLocalizationKey;
- (int)remappingKey;
- (id)sfSymbolsName;

// GCSElement (GCSJSONSerializable)

- (id)initWithJSONObject:(id)arg1;
- (id)jsonObject;

// GCSElement (NSSecureCoding)

+ (bool)supportsSecureCoding;

- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
