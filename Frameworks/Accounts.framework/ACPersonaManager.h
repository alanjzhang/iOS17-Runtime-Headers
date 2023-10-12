/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Accounts.framework/Accounts
 */

@interface ACPersonaManager : NSObject {
    NSArray * _dataSeparatedPersonasUIDs;
    NSString * _enterprisePersonaUID;
    NSSet * _guestPersonasUID;
    unsigned long long  _personaGenerationID;
    struct os_unfair_lock_s { 
        unsigned int _os_unfair_lock_opaque; 
    }  _personaStorageLock;
    NSString * _personalPersonaUID;
    ACAccountStore * _store;
}

+ (bool)performWithinPersona:(id)arg1 withBlock:(id /* block */)arg2;
+ (void)performWithinPersonaForAccount:(id)arg1 withBlock:(id /* block */)arg2;
+ (void)performWithinPersonaForAccountIdentifier:(id)arg1 withBlock:(id /* block */)arg2;

- (void).cxx_destruct;

@end
