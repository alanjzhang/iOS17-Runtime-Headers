/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
 */

@interface GEOConfigAddChangeListenerRequest : GEOXPCRequest <GEOXPCRequest> {
    NSDictionary * _keysAndSources;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, retain) NSDictionary *keysAndSources;
@property (readonly) Class superclass;

+ (Class)replyClass;

- (void).cxx_destruct;
- (void)encodeToXPCDictionary:(id)arg1;
- (id)initWithTraits:(id)arg1 auditToken:(id)arg2 throttleToken:(id)arg3;
- (id)initWithXPCDictionary:(id)arg1 error:(id*)arg2;
- (bool)isValid;
- (id)keysAndSources;
- (unsigned long long)reply;
- (void)setKeysAndSources:(id)arg1;

@end
