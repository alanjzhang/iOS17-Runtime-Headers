/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/NetworkServiceProxy.framework/NetworkServiceProxy
 */

@interface NSPPrivacyProxyTokenInfo : NSObject <NSCopying> {
    NSData * _data;
    NSString * _proxyURL;
    NSData * _tokenKeyID;
    NSMutableArray * _unactivatedTokenLists;
    NSString * _vendor;
}

@property (nonatomic, readonly) NSData *data;
@property (nonatomic, readonly) bool hasVendor;
@property (nonatomic, retain) NSString *proxyURL;
@property (nonatomic, retain) NSData *tokenKeyID;
@property (nonatomic, retain) NSMutableArray *unactivatedTokenLists;
@property (nonatomic, retain) NSString *vendor;

+ (Class)unactivatedTokenListType;

- (void).cxx_destruct;
- (void)addUnactivatedTokenList:(id)arg1;
- (void)clearUnactivatedTokenLists;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)data;
- (id)description;
- (id)dictionaryRepresentation;
- (bool)hasVendor;
- (unsigned long long)hash;
- (bool)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)proxyURL;
- (void)setProxyURL:(id)arg1;
- (void)setTokenKeyID:(id)arg1;
- (void)setUnactivatedTokenLists:(id)arg1;
- (void)setVendor:(id)arg1;
- (id)tokenKeyID;
- (id)unactivatedTokenListAtIndex:(unsigned long long)arg1;
- (id)unactivatedTokenLists;
- (unsigned long long)unactivatedTokenListsCount;
- (id)vendor;

@end
