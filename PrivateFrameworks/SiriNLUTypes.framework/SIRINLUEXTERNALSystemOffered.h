/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SiriNLUTypes.framework/SiriNLUTypes
 */

@interface SIRINLUEXTERNALSystemOffered : PBCodable <NSCopying> {
    SIRINLUEXTERNALUserDialogAct * _offeredAct;
}

@property (nonatomic, readonly) bool hasOfferedAct;
@property (nonatomic, retain) SIRINLUEXTERNALUserDialogAct *offeredAct;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasOfferedAct;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)offeredAct;
- (bool)readFrom:(id)arg1;
- (void)setOfferedAct:(id)arg1;
- (void)writeTo:(id)arg1;

@end
