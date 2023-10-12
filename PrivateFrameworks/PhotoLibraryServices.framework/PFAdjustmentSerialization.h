/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PFAdjustmentSerialization : NSObject

+ (id)deserializeAdjustmentsFromData:(id)arg1 error:(id*)arg2;
+ (id)deserializeDictionaryFromData:(id)arg1 error:(id*)arg2;
+ (id)serializeAdjustments:(id)arg1 error:(id*)arg2;
+ (id)serializeDictionary:(id)arg1 error:(id*)arg2;

// PFAdjustmentSerialization (Utility)

+ (bool)validateArchive:(id)arg1 containsEntryWithKey:(id)arg2 ofType:(Class)arg3 errors:(id)arg4;
+ (bool)validateValue:(id)arg1 isOfType:(Class)arg2 errors:(id)arg3;

@end
