/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
 */

@interface AMSMutableSet : NSMutableSet {
    NSMutableSet * _backingSet;
    id /* block */  _hashBlock;
}

@property (nonatomic, copy) id /* block */ hashBlock;

+ (id)setWithHashBlock:(id /* block */)arg1;

- (void).cxx_destruct;
- (id)_allObjectsFromBackingSet;
- (void)addObject:(id)arg1;
- (void)addObjectsFromArray:(id)arg1;
- (id)allObjects;
- (id)anyObject;
- (bool)containsObject:(id)arg1;
- (unsigned long long)count;
- (id /* block */)hashBlock;
- (id)initWithHashBlock:(id /* block */)arg1;
- (id)member:(id)arg1;
- (id)objectEnumerator;
- (void)setHashBlock:(id /* block */)arg1;

@end
