/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreThemeDefinition.framework/CoreThemeDefinition
 */

@interface CoreThemeConstantEnumerator : NSObject {
    void * _globalListPointer;
    long long  _indexOfLastEntry;
    bool  _isPastLastEntry;
    long long  _listIndex;
}

+ (id)enumeratorForGlobalListAtAddress:(void*)arg1;

- (void)_moveToIndexOfLastEntry;
- (long long)constantCount;
- (id)currentConstantHelper;
- (id)firstConstantHelper;
- (id)initWithGlobalListAtAddress:(void*)arg1;
- (id)lastConstantHelper;
- (id)nextConstantHelper;
- (id)previousConstantHelper;

@end
