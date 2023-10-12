/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/StoreServices.framework/StoreServices
 */

@interface SSVMediaContentTasteItem : NSObject <NSCopying, NSMutableCopying, NSSecureCoding, SSXPCCoding> {
    unsigned long long  _contentType;
    NSString * _playlistGlobalID;
    long long  _storeAdamID;
    unsigned long long  _tasteType;
}

@property (nonatomic, readonly) unsigned long long contentType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly, copy) NSString *playlistGlobalID;
@property (nonatomic, readonly) long long storeAdamID;
@property (readonly) Class superclass;
@property (nonatomic, readonly) unsigned long long tasteType;

+ (bool)supportsSecureCoding;

- (void).cxx_destruct;
- (id)_copyWithMediaContentTasteItemClass:(Class)arg1;
- (unsigned long long)contentType;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)copyXPCEncoding;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCEncoding:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)playlistGlobalID;
- (long long)storeAdamID;
- (unsigned long long)tasteType;

@end
