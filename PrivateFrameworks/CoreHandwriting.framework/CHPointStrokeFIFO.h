/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreHandwriting.framework/CoreHandwriting
 */

@interface CHPointStrokeFIFO : CHPointFIFO {
    CHDrawing * _drawing;
    CHDrawing * _strokes;
}

@property (nonatomic, retain) CHDrawing *drawing;
@property (nonatomic, retain) CHDrawing *strokes;

// CHPointStrokeFIFO (null)

- (void).cxx_destruct;
- (void)addPoint;
- (void)clear;
- (id)drawing;
- (void)flush;
- (id)initWithFIFO:(id)arg1;
- (void)setDrawing:(id)arg1;
- (void)setStrokes:(id)arg1;
- (id)strokes;

@end
