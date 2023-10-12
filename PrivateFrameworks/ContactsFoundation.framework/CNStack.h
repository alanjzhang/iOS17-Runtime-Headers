/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
 */

@interface CNStack : NSObject {
    NSMutableArray * _objects;
}

@property (nonatomic, readonly) unsigned long long count;
@property (nonatomic, readonly) id peek;

- (void).cxx_destruct;
- (unsigned long long)count;
- (id)init;
- (id)peek;
- (id)pop;
- (id)popAll;
- (void)popAllWithHandler:(id /* block */)arg1;
- (void)popWithHandler:(id /* block */)arg1;
- (void)push:(id)arg1;
- (void)removeObject:(id)arg1;

@end
