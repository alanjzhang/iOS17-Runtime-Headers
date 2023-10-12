/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/KeyboardServices.framework/KeyboardServices
 */

@interface _KSTextReplacementEntry : NSObject <NSCopying, NSSecureCoding> {
    NSData * _cloudData;
    NSString * _cloudID;
    bool  _needsSaveToCloud;
    NSString * _phrase;
    _KSTextReplacementEntry * _priorValue;
    NSString * _shortcut;
    NSDate * _timestamp;
    bool  _wasDeleted;
}

@property (nonatomic, retain) NSData *cloudData;
@property (nonatomic, copy) NSString *cloudID;
@property bool needsSaveToCloud;
@property (nonatomic, copy) NSString *phrase;
@property (nonatomic, retain) _KSTextReplacementEntry *priorValue;
@property (nonatomic, copy) NSString *shortcut;
@property (nonatomic, copy) NSDate *timestamp;
@property bool wasDeleted;

+ (id)localEntryFromCloudEntry:(id)arg1;
+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)cloudData;
- (id)cloudID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)encryptedFields;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (bool)isEquivalentTo:(id)arg1;
- (bool)needsSaveToCloud;
- (id)phrase;
- (id)priorValue;
- (void)setCloudData:(id)arg1;
- (void)setCloudID:(id)arg1;
- (void)setNeedsSaveToCloud:(bool)arg1;
- (void)setPhrase:(id)arg1;
- (void)setPriorValue:(id)arg1;
- (void)setShortcut:(id)arg1;
- (void)setTimestamp:(id)arg1;
- (void)setWasDeleted:(bool)arg1;
- (id)shortcut;
- (id)timestamp;
- (id)unEncryptedFields;
- (id)uniqueID;
- (id)uniqueRecordName;
- (id)uniqueRecordNameVer0;
- (bool)wasDeleted;

@end
