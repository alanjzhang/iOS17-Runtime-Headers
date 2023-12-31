/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
 */

@interface AVMetadataEnumerator : NSEnumerator {
    NSEnumerator * _arrayEnumerator;
    long long  _count;
    long long  _index;
    id  _key;
    NSString * _keySpace;
    NSLocale * _locale;
    struct OpaqueFigMetadataReader { } * _reader;
}

+ (id)metadataEnumeratorWithArray:(id)arg1 key:(id)arg2 keySpace:(id)arg3 locale:(id)arg4;
+ (id)metadataEnumeratorWithMetadataReader:(struct OpaqueFigMetadataReader { }*)arg1;

- (void)_setArrayEnumerator:(id)arg1;
- (void)_setKey:(id)arg1;
- (void)_setKeySpace:(id)arg1;
- (void)_setLocale:(id)arg1;
- (void)_setMetadataReader:(struct OpaqueFigMetadataReader { }*)arg1;
- (void)dealloc;
- (id)initWithArray:(id)arg1 key:(id)arg2 keySpace:(id)arg3 locale:(id)arg4;
- (id)initWithMetadataReader:(struct OpaqueFigMetadataReader { }*)arg1;
- (id)initWithMetadataReader:(struct OpaqueFigMetadataReader { }*)arg1 array:(id)arg2 key:(id)arg3 keySpace:(id)arg4 locale:(id)arg5;
- (id)nextObject;

@end
