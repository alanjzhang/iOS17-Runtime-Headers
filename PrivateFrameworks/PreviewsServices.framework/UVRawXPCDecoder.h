/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PreviewsServices.framework/PreviewsServices
 */

@interface UVRawXPCDecoder : NSObject <AnySecureDecoder> {
    NSObject<OS_xpc_object> * _dictionary;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) NSObject<OS_xpc_object> *dictionary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)decodeObjectOfClass:(Class)arg1 forKey:(id)arg2;
- (id)dictionary;
- (id)initWithXpcDictionary:(id)arg1;

@end
