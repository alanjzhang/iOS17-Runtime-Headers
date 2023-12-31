/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

@interface CHStrokeGroupBasedVisualization : CHVisualization {
    NSSet * _activeStrokeGroupAncestorIdentifiers;
    bool  _newGroupsDefaultToActive;
    CHRecognitionSessionResult * _resultDrawn;
}

@property (nonatomic, readonly, copy) NSSet *activeStrokeGroupAncestorIdentifiers;
@property (nonatomic) <CHStrokeGroupBasedVisualizationDelegate> *delegate;
@property (nonatomic, readonly) bool newGroupsDefaultToActive;
@property (nonatomic, readonly) CHRecognitionSessionResult *resultDrawn;

// CHStrokeGroupBasedVisualization (null)

- (void).cxx_destruct;
- (id)activeStrokeGroupAncestorIdentifiers;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })dirtyRectForStrokeGroup:(id)arg1;
- (void)drawVisualizationInRect:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg1 context:(struct CGContext { }*)arg2 viewBounds:(struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })arg3;
- (bool)newGroupsDefaultToActive;
- (void)recognitionSessionDidUpdateRecognitionResult;
- (id)resultDrawn;
- (void)toggleVisualizationRegionAtPoint:(struct CGPoint { double x1; double x2; })arg1;

@end
