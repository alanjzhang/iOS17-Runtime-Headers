/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CoreData.framework/CoreData
 */

@interface NSSQLBlockRequestContext : NSSQLStoreRequestContext {
    id /* block */  _workBlock;
}

- (void)dealloc;
- (bool)executeRequestCore:(id*)arg1;
- (id)initWithBlock:(id /* block */)arg1 context:(id)arg2 sqlCore:(id)arg3;
- (bool)isWritingRequest;

@end
