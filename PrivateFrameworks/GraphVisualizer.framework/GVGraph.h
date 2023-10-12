/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/GraphVisualizer.framework/GraphVisualizer
 */

@interface GVGraph : NSObject {
    NSMutableOrderedSet * edges;
    NSMutableOrderedSet * nodes;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; } bounds;
@property (nonatomic, retain) NSMutableOrderedSet *edges;
@property (nonatomic, retain) NSMutableOrderedSet *nodes;

- (void)addEdgeFrom:(id)arg1 to:(id)arg2;
- (void)addEdgeFrom:(id)arg1 to:(id)arg2 reversed:(bool)arg3;
- (void)addNode:(id)arg1;
- (id)allEdges;
- (id)allNodes;
- (struct CGRect { struct CGPoint { double x_1_1_1; double x_1_1_2; } x1; struct CGSize { double x_2_1_1; double x_2_1_2; } x2; })bounds;
- (id)connectedSubgraphs;
- (void)dealloc;
- (id)description;
- (id)edgeFrom:(id)arg1 to:(id)arg2;
- (id)edges;
- (bool)hasEdgeFrom:(id)arg1 to:(id)arg2;
- (bool)hasNode:(id)arg1;
- (id)init;
- (void)iterateOverAllEdges:(id /* block */)arg1;
- (void)iterateOverAllNodes:(id /* block */)arg1;
- (id)nodes;
- (void)removeEdgeFrom:(id)arg1 to:(id)arg2;
- (void)removeNode:(id)arg1;
- (bool)render:(id)arg1;
- (void)reverseEdge:(id)arg1;
- (void)setEdges:(id)arg1;
- (void)setNodes:(id)arg1;
- (void)undoReverseEdge:(id)arg1;

@end