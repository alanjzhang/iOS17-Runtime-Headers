/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/InstalledContentLibrary.framework/InstalledContentLibrary
 */

@interface ICLSinfInfo : NSObject <NSCopying, NSSecureCoding> {
    NSNumber * _applicationDSID;
    NSNumber * _downloaderDSID;
    NSNumber * _familyID;
    bool  _hasMIDBasedSINF;
    bool  _isMissingRequiredSINF;
}

@property (nonatomic, copy) NSNumber *applicationDSID;
@property (nonatomic, copy) NSNumber *downloaderDSID;
@property (nonatomic, copy) NSNumber *familyID;
@property (nonatomic) bool hasMIDBasedSINF;
@property (nonatomic) bool isMissingRequiredSINF;
@property (nonatomic, readonly, copy) NSDictionary *legacySinfInfoDictionary;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)applicationDSID;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)downloaderDSID;
- (void)encodeWithCoder:(id)arg1;
- (id)familyID;
- (bool)hasMIDBasedSINF;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithLegacySinfInfoDictionary:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isMissingRequiredSINF;
- (id)legacySinfInfoDictionary;
- (void)setApplicationDSID:(id)arg1;
- (void)setDownloaderDSID:(id)arg1;
- (void)setFamilyID:(id)arg1;
- (void)setHasMIDBasedSINF:(bool)arg1;
- (void)setIsMissingRequiredSINF:(bool)arg1;

@end
