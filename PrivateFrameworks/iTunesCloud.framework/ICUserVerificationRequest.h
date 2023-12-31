/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud
 */

@interface ICUserVerificationRequest : NSObject <NSCopying> {
    long long  _qualityOfService;
    ICStoreRequestContext * _storeRequestContext;
    ICUserVerificationContext * _verificationContext;
}

@property (nonatomic) long long qualityOfService;
@property (nonatomic, copy) ICStoreRequestContext *storeRequestContext;
@property (nonatomic, readonly, copy) ICUserVerificationContext *verificationContext;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)initWithVerificationContext:(id)arg1;
- (void)performWithResponseHandler:(id /* block */)arg1;
- (long long)qualityOfService;
- (void)setQualityOfService:(long long)arg1;
- (void)setStoreRequestContext:(id)arg1;
- (id)storeRequestContext;
- (id)verificationContext;

@end
