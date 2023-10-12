/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

@interface CHStrokeGroupQuery : CHQuery {
    NSArray * _strokeGroupItems;
    NSDictionary * _strokeGroupItemsByID;
}

@property (nonatomic, readonly, copy) NSArray *strokeGroupItems;

// CHStrokeGroupQuery (null)

- (void).cxx_destruct;
- (id)debugName;
- (id)q_strokeGroupItemsFromSessionResult:(id)arg1;
- (void)q_updateQueryResult;
- (id)strokeGroupItems;
- (id)tokenizedStrokeResultForInitialStrokes:(id)arg1 point:(struct CGPoint { double x1; double x2; })arg2 tokenizationLevel:(long long)arg3;
- (id)tokenizedStrokeResultForInitialStrokes:(id)arg1 point:(struct CGPoint { double x1; double x2; })arg2 tokenizationLevel:(long long)arg3 completion:(id /* block */)arg4 shouldCancel:(id /* block */)arg5;

@end
