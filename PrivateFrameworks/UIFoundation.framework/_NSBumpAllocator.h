/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
 */

@interface _NSBumpAllocator : NSObject {
    struct Slab { unsigned long long x1; struct Slab {} *x2; BOOL x3[1]; } * _curSlab;
    char * _endPtr;
    struct Slab { unsigned long long x1; struct Slab {} *x2; BOOL x3[1]; } * _firstSlab;
    char * _ptr;
}

- (struct Slab { unsigned long long x1; struct Slab {} *x2; BOOL x3[1]; }*)_allocateSlabWithSize:(unsigned long long)arg1;
- (void*)allocate:(unsigned long long)arg1;
- (void)dealloc;
- (void)reset;

@end
