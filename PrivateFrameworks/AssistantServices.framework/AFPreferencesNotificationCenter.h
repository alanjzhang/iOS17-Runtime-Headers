/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
 */

@interface AFPreferencesNotificationCenter : NSNotificationCenter {
    NSMutableDictionary * darwinRegistrationsByName;
    NSMutableDictionary * darwinRegistrationsByObserver;
    NSLock * instanceLock;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)addObserverForDarwinName:(struct __CFString { }*)arg1 usingBlock:(id /* block */)arg2;
- (void)dealloc;
- (id)init;
- (void)removeObserver:(id)arg1;

@end