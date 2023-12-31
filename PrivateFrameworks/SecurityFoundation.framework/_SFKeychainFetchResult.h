/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SecurityFoundation.framework/SecurityFoundation
 */

@interface _SFKeychainFetchResult : NSObject {
    id  _keychainFetchResultInternal;
}

@property (readonly) NSError *error;
@property (readonly) long long resultType;
@property (readonly) id value;

+ (id)fetchResultWithError:(id)arg1;
+ (id)fetchResultWithValue:(id)arg1;

- (void).cxx_destruct;
- (id)error;
- (void)fetchValueWithAuthenticationContext:(id)arg1 resultHandler:(id /* block */)arg2;
- (id)initWithError:(id)arg1;
- (id)initWithValue:(id)arg1;
- (long long)resultType;
- (id)value;

@end
