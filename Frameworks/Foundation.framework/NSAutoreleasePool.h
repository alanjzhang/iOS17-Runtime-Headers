/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSAutoreleasePool : NSObject {
    void * _reserved;
    void * _reserved2;
    void * _reserved3;
    void * _token;
}

+ (void)addObject:(id)arg1;
+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (bool)autoreleasePoolExists;
+ (unsigned long long)autoreleasedObjectCount;
+ (void)enableFreedObjectCheck:(bool)arg1;
+ (void)enableRelease:(bool)arg1;
+ (unsigned long long)poolCountHighWaterMark;
+ (unsigned long long)poolCountHighWaterResolution;
+ (void)releaseAllPools;
+ (void)resetTotalAutoreleasedObjects;
+ (void)setPoolCountHighWaterMark:(unsigned long long)arg1;
+ (void)setPoolCountHighWaterResolution:(unsigned long long)arg1;
+ (void)showPools;
+ (unsigned long long)topAutoreleasePoolCount;
+ (unsigned long long)totalAutoreleasedObjects;

- (void)addObject:(id)arg1;
- (id)autorelease;
- (void)dealloc;
- (void)drain;
- (id)init;
- (id)initWithCapacity:(unsigned long long)arg1;
- (oneway void)release;
- (id)retain;
- (unsigned long long)retainCount;

@end