/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/MusicKitInternal.framework/MusicKitInternal
 */

@interface MusicKit_SoftLinking_MPContentTasteController : NSObject {
    MPContentTasteController * _underlyingContentTasteController;
}

+ (id)contentTasteControllerDidChangeNotificationName;
+ (id)sharedContentTasteController;

- (void).cxx_destruct;
- (long long)_contentTasteTypeFromUnderlyingTasteType:(long long)arg1;
- (void)_handleContentTasteControllerDidChangeNotification:(id)arg1;
- (id)_initWithUnderlyingContentTasteController:(id)arg1;
- (long long)_underlyingTasteTypeFromContentTasteType:(long long)arg1;
- (void)dealloc;
- (void)setTasteType:(long long)arg1 forModelObject:(id)arg2 completionHandler:(id /* block */)arg3;
- (long long)tasteTypeForModelObject:(id)arg1;

@end
