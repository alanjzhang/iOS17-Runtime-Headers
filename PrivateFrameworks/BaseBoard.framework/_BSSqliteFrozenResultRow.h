/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface _BSSqliteFrozenResultRow : BSSqliteResultRow {
    unsigned long long  _count;
    NSArray * _frozenColumnNames;
    NSArray * _frozenDatas;
    NSArray * _frozenDoubles;
    NSArray * _frozenIntegers;
    NSArray * _frozenObjects;
    NSArray * _frozenStrings;
}

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (unsigned long long)count;
- (id)dataAtIndex:(unsigned long long)arg1;
- (double)doubleAtIndex:(unsigned long long)arg1;
- (long long)integerAtIndex:(unsigned long long)arg1;
- (bool)isValid;
- (id)keyAtIndex:(unsigned long long)arg1;
- (id)objectAtIndex:(unsigned long long)arg1;
- (id)stringAtIndex:(unsigned long long)arg1;

@end
