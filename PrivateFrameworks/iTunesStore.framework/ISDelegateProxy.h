/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

@interface ISDelegateProxy : NSObject {
    id  _delegate;
    NSLock * _lock;
    bool  _shouldMessageMainThread;
}

- (void)dealloc;
- (void)forwardInvocation:(id)arg1;
- (id)init;
- (id)methodSignatureForSelector:(SEL)arg1;
- (bool)respondsToSelector:(SEL)arg1;
- (void)sendInvocationToDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setShouldMessageMainThread:(bool)arg1;

@end
