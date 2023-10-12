/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CoreSpotlight.framework/CoreSpotlight
 */

@interface CSCustomAttributeKey : NSObject <NSCopying, NSSecureCoding> {
    NSString * _keyName;
    bool  _multiValued;
    bool  _searchable;
    bool  _searchableByDefault;
    bool  _unique;
}

@property (retain) NSString *keyName;
@property (getter=isMultiValued) bool multiValued;
@property (getter=isSearchable) bool searchable;
@property (getter=isSearchableByDefault) bool searchableByDefault;
@property (getter=isUnique) bool unique;

+ (bool)_keyNameIsValid:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithKeyName:(id)arg1;
- (id)initWithKeyName:(id)arg1 searchable:(bool)arg2 searchableByDefault:(bool)arg3 unique:(bool)arg4 multiValued:(bool)arg5;
- (bool)isEqual:(id)arg1;
- (bool)isMultiValued;
- (bool)isSearchable;
- (bool)isSearchableByDefault;
- (bool)isUnique;
- (id)keyName;
- (void)setKeyName:(id)arg1;
- (void)setMultiValued:(bool)arg1;
- (void)setSearchable:(bool)arg1;
- (void)setSearchableByDefault:(bool)arg1;
- (void)setUnique:(bool)arg1;

@end
