/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
 */

@interface SCRCMathTableCellExpression : SCRCMathRowExpression {
    unsigned long long  _columnIndex;
    bool  _didGetTablePosition;
    unsigned long long  _rowIndex;
    unsigned long long  _tableColumnCount;
    unsigned long long  _tableRowCount;
}

- (void)_getTableDataIfNecessary;
- (id)_prefixForCell;
- (id)_suffixForCell;
- (id)mathMLTag;
- (id)prefixForChildAtIndex:(unsigned long long)arg1;
- (id)speakableDescriptionWithSpeakingStyle:(long long)arg1 arePausesAllowed:(bool)arg2;
- (id)speakableSegmentsWithSpeakingStyle:(long long)arg1 upToDepth:(unsigned long long)arg2 treePosition:(id)arg3;
- (id)suffixForChildAtIndex:(unsigned long long)arg1;

@end
