/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Contacts.framework/Contacts
 */

@interface CNBirthdayDescription : CNPropertyDescription <CNAbstractPropertyDescription>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Contacts.framework/Contacts

- (id)CNValueForContact:(id)arg1;
- (bool)canUnifyValue:(id)arg1 withValue:(id)arg2;
- (void)decodeUsingCoder:(id)arg1 contact:(id)arg2;
- (void)encodeUsingCoder:(id)arg1 contact:(id)arg2;
- (id /* block */)fromPlistTransform;
- (id)init;
- (bool)isEqualForContact:(id)arg1 other:(id)arg2;
- (bool)isValidValue:(id)arg1 error:(id*)arg2;
- (bool)isValue:(id)arg1 preferredToUnifiedValue:(id)arg2;
- (void)setCNValue:(id)arg1 onContact:(id)arg2;
- (Class)valueClass;

// CNBirthdayDescription (iOSAB)

- (void*)ABValueFromCNValue:(id)arg1;
- (id)CNValueFromABValue:(void*)arg1;
- (bool)abPropertyID:(int*)arg1;

// CNBirthdayDescription (iOSBuffers)

- (id)CNValueFromABBytes:(char *)arg1 length:(unsigned long long)arg2;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/AddressBook.framework/AddressBook

// CNBirthdayDescription (ABSExtentions)

- (void*)ABSValueFromCNValue:(id)arg1;
- (id)CNValueFromABSValue:(void*)arg1;
- (bool)absPropertyID:(int*)arg1;
- (unsigned int)absPropertyType;

@end
