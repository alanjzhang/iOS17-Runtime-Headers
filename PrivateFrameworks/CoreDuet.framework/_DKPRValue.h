/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreDuet.framework/CoreDuet
 */

@interface _DKPRValue : PBCodable <NSCopying> {
    NSData * _blobValue;
    double  _dateValue;
    double  _doubleValue;
    struct { 
        unsigned int dateValue : 1; 
        unsigned int doubleValue : 1; 
        unsigned int integerValue : 1; 
    }  _has;
    long long  _integerValue;
    NSString * _stringValue;
    _DKPRValueType * _type;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
