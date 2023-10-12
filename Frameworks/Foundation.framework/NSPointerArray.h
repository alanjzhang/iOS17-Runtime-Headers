/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSPointerArray : NSObject <NSCopying, NSFastEnumeration, NSSecureCoding>

@property unsigned long long count;
@property (readonly, copy) NSPointerFunctions *pointerFunctions;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Foundation.framework/Foundation

+ (bool)_subclassesMustBeExplicitlyMentionedWhenDecoded;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (id)pointerArrayWithOptions:(unsigned long long)arg1;
+ (id)pointerArrayWithPointerFunctions:(id)arg1;
+ (bool)supportsSecureCoding;

- (void)addPointer:(void*)arg1;
- (Class)classForCoder;
- (void)compact;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (unsigned long long)countByEnumeratingWithState:(struct { unsigned long long x1; id *x2; unsigned long long *x3; unsigned long long x4[5]; }*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithOptions:(unsigned long long)arg1;
- (id)initWithPointerFunctions:(id)arg1;
- (void)insertPointer:(void*)arg1 atIndex:(unsigned long long)arg2;
- (void*)pointerAtIndex:(unsigned long long)arg1;
- (id)pointerFunctions;
- (void)removePointerAtIndex:(unsigned long long)arg1;
- (void)replacePointerAtIndex:(unsigned long long)arg1 withPointer:(void*)arg2;
- (void)setCount:(unsigned long long)arg1;

// NSPointerArray (NSArrayConveniences)

+ (id)pointerArrayWithStrongObjects;
+ (id)pointerArrayWithWeakObjects;
+ (id)strongObjectsPointerArray;
+ (id)weakObjectsPointerArray;

- (id)allObjects;
- (id)mutableArray;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation

// NSPointerArray (ContactsFoundation)

- (void)_cn_setAllObjects:(id)arg1;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/DebugHierarchyFoundation.framework/DebugHierarchyFoundation

// NSPointerArray (DBGAdditions)

- (void)dbg_addObject:(id)arg1;
- (unsigned long long)dbg_indexOfObjectIdenticalTo:(id)arg1;
- (void)dbg_insertObject:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)dbg_objectAtIndex:(unsigned long long)arg1;
- (void)dbg_removeObject:(id)arg1;
- (void)dbg_replaceObjectAtIndex:(unsigned long long)arg1 withObject:(id)arg2;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/DocumentManager.framework/DocumentManager

// NSPointerArray (DOCExtensions)

- (bool)doc_containsPointer:(void*)arg1;
- (long long)doc_indexOfPointer:(void*)arg1;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/HMFoundation.framework/HMFoundation

// NSPointerArray (HMFoundation)

- (void)hmf_addObject:(id)arg1;
- (bool)hmf_removeObject:(id)arg1;
- (bool)hmf_removePointer:(void*)arg1;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/RemoteConfiguration.framework/RemoteConfiguration

// NSPointerArray (RCAdditions)

- (bool)rc_containsObject:(id)arg1;
- (unsigned long long)rc_firstIndexOfObject:(id)arg1;

@end
