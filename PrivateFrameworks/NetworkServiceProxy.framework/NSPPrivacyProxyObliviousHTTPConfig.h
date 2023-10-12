/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

@interface NSPPrivacyProxyObliviousHTTPConfig : NSObject <NSCopying> {
    NSData * _obliviousHTTPConfig;
    NSMutableArray * _obliviousTargets;
}

@property (nonatomic, retain) NSData *obliviousHTTPConfig;
@property (nonatomic, retain) NSMutableArray *obliviousTargets;

+ (Class)obliviousTargetsType;

- (void).cxx_destruct;
- (void)addObliviousTargets:(id)arg1;
- (void)clearObliviousTargets;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)obliviousHTTPConfig;
- (id)obliviousTargets;
- (id)obliviousTargetsAtIndex:(unsigned long long)arg1;
- (unsigned long long)obliviousTargetsCount;
- (void)setObliviousHTTPConfig:(id)arg1;
- (void)setObliviousTargets:(id)arg1;

@end
