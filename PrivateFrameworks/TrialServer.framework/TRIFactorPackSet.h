/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
 */

@interface TRIFactorPackSet : NSObject <NSCopying> {
    NSString<TRIFactorPackSetId> * _ident;
    NSArray * _packs;
}

@property (nonatomic, readonly) NSString<TRIFactorPackSetId> *ident;
@property (nonatomic, readonly) NSArray *packs;

+ (id)setWithIdent:(id)arg1 packs:(id)arg2;

- (void).cxx_destruct;
- (id)copyWithReplacementIdent:(id)arg1;
- (id)copyWithReplacementPacks:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)ident;
- (id)init;
- (id)initWithIdent:(id)arg1 packs:(id)arg2;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToSet:(id)arg1;
- (id)packs;

// TRIFactorPackSet (CloudKit)

+ (bool)_signatures:(id)arg1 onItems:(id)arg2 areValidUsingPublicCertificate:(id)arg3;
+ (id)allReferencedCKRecordKeys;
+ (id)artifactFromCKRecord:(id)arg1;

// TRIFactorPackSet (Utils)

- (bool)isStructurallyValid;

@end
