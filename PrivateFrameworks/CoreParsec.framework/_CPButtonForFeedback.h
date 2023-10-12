/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreParsec.framework/CoreParsec
 */

@interface _CPButtonForFeedback : PBCodable <NSSecureCoding, _CPButtonForFeedback> {
    NSString * _commandDetail;
    int  _commandType;
    unsigned long long  _uniqueId;
}

@property (nonatomic, copy) NSString *commandDetail;
@property (nonatomic) int commandType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) NSData *jsonData;
@property (readonly) Class superclass;
@property (nonatomic) unsigned long long uniqueId;

- (void).cxx_destruct;
- (id)commandDetail;
- (int)commandType;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (bool)readFrom:(id)arg1;
- (void)setCommandDetail:(id)arg1;
- (void)setCommandType:(int)arg1;
- (void)setUniqueId:(unsigned long long)arg1;
- (unsigned long long)uniqueId;
- (void)writeTo:(id)arg1;

// _CPButtonForFeedback (Handwritten)

- (id)initWithFacade:(id)arg1;

@end
