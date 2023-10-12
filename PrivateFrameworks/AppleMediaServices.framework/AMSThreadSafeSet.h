/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSThreadSafeSet : NSObject {
    AMSThreadSafeObject * _backingSet;
}

@property (nonatomic, readonly, copy) NSArray *allObjects;
@property (nonatomic, retain) AMSThreadSafeObject *backingSet;
@property (nonatomic, readonly) unsigned long long count;

- (void).cxx_destruct;
- (void)addObject:(id)arg1;
- (id)allObjects;
- (id)backingSet;
- (bool)containsObject:(id)arg1;
- (unsigned long long)count;
- (id)init;
- (void)removeObject:(id)arg1;
- (void)setBackingSet:(id)arg1;

@end
