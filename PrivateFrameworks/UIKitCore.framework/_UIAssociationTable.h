/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UIAssociationTable : NSObject {
    NSMapTable * _leftToRightHashTables;
    NSMapTable * _rightToLeftHashTables;
}

- (void).cxx_destruct;
- (id)description;
- (bool)hasLeftValuesForRightValue:(id)arg1;
- (bool)hasRightValuesForLeftValue:(id)arg1;
- (id)initWithLeftValueOptions:(unsigned long long)arg1 rightValueOptions:(unsigned long long)arg2;
- (bool)isEmpty;
- (id)leftValueEnumerable;
- (id)leftValueEnumerableForRightValue:(id)arg1;
- (id)leftValues;
- (id)leftValuesForRightValue:(id)arg1;
- (void)registerAssociationWithLeftValue:(id)arg1 rightValue:(id)arg2;
- (id)rightValueEnumerable;
- (id)rightValueEnumerableForLeftValue:(id)arg1;
- (id)rightValues;
- (id)rightValuesForLeftValue:(id)arg1;
- (void)unregisterAssociationWithLeftValue:(id)arg1 rightValue:(id)arg2;

@end
