/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNMultiValueDiff : NSObject {
    NSArray * _updates;
}

@property (nonatomic, readonly, copy) NSArray *updates;

+ (id)diffMultiValue:(id)arg1 toMultiValue:(id)arg2;
+ (id)emptyDiff;

- (void).cxx_destruct;
- (id)description;
- (id)initWithUpdates:(id)arg1;
- (bool)isEmpty;
- (id)multiValueByApplyToMultiValue:(id)arg1 withIdentifierMap:(id)arg2;
- (id)updates;

// CNMultiValueDiff (iOSAB)

- (bool)applyToABPerson:(void*)arg1 propertyDescription:(id)arg2 isUnified:(bool)arg3 logger:(id)arg4 error:(id*)arg5;

@end