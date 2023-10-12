/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
 */

@interface _UICollectionCompositionalLayoutSolverResolveResult : NSObject {
    struct CGPoint { 
        double x; 
        double y; 
    }  _contentOffsetAdjustment;
    NSMutableDictionary * _deletedDecorationElementKindIndexPathsDict;
    NSMutableDictionary * _deletedSupplementaryElementKindIndexPathsDict;
    NSMutableDictionary * _insertedDecorationElementKindIndexPathsDict;
    NSMutableDictionary * _insertedSupplementaryElementKindIndexPathsDict;
    bool  _sectionsWereRequeried;
}

@property (nonatomic) struct CGPoint { double x1; double x2; } contentOffsetAdjustment;
@property (nonatomic) bool sectionsWereRequeried;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (void)setContentOffsetAdjustment:(struct CGPoint { double x1; double x2; })arg1;
- (void)setSectionsWereRequeried:(bool)arg1;

@end
