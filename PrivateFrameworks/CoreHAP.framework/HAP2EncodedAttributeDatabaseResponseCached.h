/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreHAP.framework/CoreHAP
 */

@interface HAP2EncodedAttributeDatabaseResponseCached : HAP2LoggingObject <HAP2EncodedAttributeDatabaseResponse> {
    NSDictionary * _attributeDatabase;
}

@property (nonatomic, readonly) NSDictionary *attributeDatabase;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isEncrypted, nonatomic, readonly) bool encrypted;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)attributeDatabase;
- (id)initWithAttributeDatabase:(id)arg1;
- (bool)isEncrypted;

@end
