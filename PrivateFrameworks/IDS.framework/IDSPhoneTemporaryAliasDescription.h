/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/IDS.framework/IDS
 */

@interface IDSPhoneTemporaryAliasDescription : NSObject <NSCopying, NSSecureCoding> {
    IDSURI * _URI;
    NSDate * _expirationDate;
    bool  _selected;
}

@property (nonatomic, readonly) IDSURI *URI;
@property (nonatomic, readonly) NSDate *expirationDate;
@property (nonatomic, readonly) bool selected;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)URI;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)expirationDate;
- (id)initWithCoder:(id)arg1;
- (id)initWithURI:(id)arg1 expirationDate:(id)arg2 selected:(bool)arg3;
- (bool)selected;

@end
