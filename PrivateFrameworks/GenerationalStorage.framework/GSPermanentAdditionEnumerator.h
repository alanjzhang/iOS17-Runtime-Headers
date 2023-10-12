/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/GenerationalStorage.framework/GenerationalStorage
 */

@interface GSPermanentAdditionEnumerator : NSEnumerator <GSAdditionEnumerating> {
    NSArray * _array;
    NSError * _error;
    NSString * _nameSpace;
    unsigned long long  _pos;
    GSDaemonProxySync * _proxy;
    GSPermanentStorage * _storage;
    id  _token;
    unsigned long long  _withOptions;
    unsigned long long  _withoutOptions;
}

@property (nonatomic, readonly) NSError *error;

- (void).cxx_destruct;
- (void)_fetchNextBatch;
- (void)dealloc;
- (id)error;
- (id)initWithStorage:(id)arg1 nameSpace:(id)arg2 withOptions:(unsigned long long)arg3 withoutOptions:(unsigned long long)arg4 ordering:(int)arg5;
- (id)nextObject;

@end
