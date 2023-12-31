/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CFNetwork.framework/CFNetwork
 */

@interface NSHTTPURLResponse : NSURLResponse {
    NSHTTPURLResponseInternal * _httpInternal;
}

@property (readonly) id HTTPPropertyList;
@property (readonly, copy) NSDictionary *allHeaderFields;
@property (nonatomic, readonly) NSData *ams_actionData;
@property (nonatomic, readonly) NSData *ams_actionDataV1;
@property (nonatomic, readonly) NSData *ams_actionDataV1_5;
@property (nonatomic, readonly) NSString *ams_actionName;
@property (nonatomic, readonly) NSString *ams_actionNameV1;
@property (nonatomic, readonly) NSString *ams_actionNameV1_5;
@property (readonly) NSString *ams_fsrAnonymousID;
@property (readonly) NSString *ams_fsrCallbackUrl;
@property (readonly) NSString *ams_fsrData;
@property (readonly) NSString *ams_fsrKeyID;
@property (readonly) NSString *ams_fsrNameSpace;
@property (readonly) NSString *ams_fsrTransactionID;
@property (nonatomic, readonly) bool isFailure;
@property (nonatomic, readonly) bool isSuccess;
@property (nonatomic, readonly) NSString *msv_protocolVersion;
@property (readonly) long long statusCode;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CFNetwork.framework/CFNetwork

// NSHTTPURLResponse (null)

+ (bool)isErrorStatusCode:(long long)arg1;
+ (id)localizedStringForStatusCode:(long long)arg1;
+ (bool)supportsSecureCoding;

- (id)HTTPPropertyList;
- (id)_allHTTPHeaderFieldsAsArrays;
- (id)_initWithCFURLResponse:(struct _CFURLResponse { }*)arg1;
- (id)_peerCertificateChain;
- (id)allHeaderFields;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithHTTPPropertyList:(id)arg1 URL:(id)arg2;
- (id)initWithURL:(id)arg1 statusCode:(long long)arg2 HTTPVersion:(id)arg3 headerFields:(id)arg4;
- (id)initWithURL:(id)arg1 statusCode:(long long)arg2 headerFields:(id)arg3 requestTime:(double)arg4;
- (long long)statusCode;
- (id)valueForHTTPHeaderField:(id)arg1;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices

// NSHTTPURLResponse (AMSAnisette)

- (long long)_anisetteType;
- (id)ams_actionData;
- (id)ams_actionDataV1;
- (id)ams_actionDataV1_5;
- (id)ams_actionName;
- (id)ams_actionNameV1;
- (id)ams_actionNameV1_5;

// NSHTTPURLResponse (FraudReport)

- (id)ams_fsrAnonymousID;
- (id)ams_fsrCallbackUrl;
- (id)ams_fsrData;
- (id)ams_fsrKeyID;
- (id)ams_fsrNameSpace;
- (id)ams_fsrTransactionID;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AuthKit.framework/AuthKit

// NSHTTPURLResponse (AuthKit)

- (id)_ak_dataForEncodedHeaderWithKey:(id)arg1;
- (id)ak_acceptedTermsInfo;
- (id)ak_stringForEncodedHeaderWithKey:(id)arg1;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/DistributedEvaluation.framework/DistributedEvaluation

// NSHTTPURLResponse (DESDodMLServer)

- (bool)_fides_statusIsHTTPOK;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/MediaServices.framework/MediaServices

// NSHTTPURLResponse (MSVAdditions)

- (id)msv_protocolVersion;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore

// NSHTTPURLResponse (PKAdditions)

- (id)pk_valueForHTTPHeaderField:(id)arg1;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/RemoteConfiguration.framework/RemoteConfiguration

// NSHTTPURLResponse (RCAdditions)

- (bool)isFailure;
- (bool)isSuccess;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/iTunesCloud.framework/iTunesCloud

// NSHTTPURLResponse (ICAdditions)

- (id)_cacheControlParameters;
- (double)cacheControlMaxAge;
- (bool)hasCacheControl;
- (id)ic_valueForHTTPHeaderField:(id)arg1;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore

// NSHTTPURLResponse (ISAdditions)

- (id)_dateFromExpires;
- (bool)_getCacheControlMaxAge:(double*)arg1;
- (id)_iTunesStore_valueForHTTPHeader:(id)arg1;
- (double)expirationInterval;
- (id)itunes_expirationDate;
- (double)itunes_expirationInterval;
- (long long)itunes_maxExpectedContentLength;

@end
