/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Foundation.framework/Foundation
 */

@interface NSKeyValueProperty : NSObject <NSCopying> {
    NSKeyValueContainerClass * _containerClass;
    NSString * _keyPath;
}

- (id)_initWithContainerClass:(id)arg1 keyPath:(id)arg2 propertiesBeingInitialized:(struct __CFSet { }*)arg3;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (id)dependentValueKeyOrKeysIsASet:(bool*)arg1;
- (Class)isaForAutonotifying;
- (id)keyPath;
- (id)keyPathIfAffectedByValueForKey:(id)arg1 exactMatch:(bool*)arg2;
- (id)keyPathIfAffectedByValueForMemberOfKeys:(id)arg1;
- (bool)matchesWithoutOperatorComponentsKeyPath:(id)arg1;
- (void)object:(id)arg1 didAddObservance:(id)arg2 recurse:(bool)arg3;
- (void)object:(id)arg1 didRemoveObservance:(id)arg2 recurse:(bool)arg3;
- (void)object:(id)arg1 withObservance:(id)arg2 didChangeValueForKeyOrKeys:(id)arg3 recurse:(bool)arg4 forwardingValues:(struct { id x1; id x2; })arg5;
- (bool)object:(id)arg1 withObservance:(id)arg2 willChangeValueForKeyOrKeys:(id)arg3 recurse:(bool)arg4 forwardingValues:(struct { id x1; id x2; }*)arg5;
- (id)restOfKeyPathIfContainedByValueForKeyPath:(id)arg1;

@end
