/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
 */

@interface RBPersonaManager : NSObject <RBPersonaManaging> {
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _lock;
    bool  _personasSupported;
}

- (id)init;
- (bool)isConcretePersona:(id)arg1;
- (bool)personaForIdentity:(id)arg1 context:(id)arg2 personaUID:(out unsigned int*)arg3 personaUniqueString:(out id*)arg4;
- (bool)personaRequiredForExtensionContext:(id)arg1 serviceDict:(id)arg2;
- (id)personalPersonaUniqueString;
- (bool)personasAreSupported;

@end
