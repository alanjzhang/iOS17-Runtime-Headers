/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/IntentsServices.framework/IntentsServices
 */

@interface INSDeviceInfo : NSObject <INSDeviceInfoMutating> {
    NSString * _aceVersion;
    NSString * _mutableAceVersion;
}

@property (nonatomic, readonly) NSString *aceVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, copy) NSString *mutableAceVersion;
@property (readonly) Class superclass;

+ (id)newWithBuilder:(id /* block */)arg1;

- (void).cxx_destruct;
- (id)aceVersion;
- (id)initWithAceVersion:(id)arg1;
- (id)mutableAceVersion;
- (void)setAceVersion:(id)arg1;
- (void)setMutableAceVersion:(id)arg1;

@end
