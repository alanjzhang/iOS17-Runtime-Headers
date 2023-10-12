/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
 */

@interface DDWebKitOperation : DDOperation {
    DOMNode * _endNode;
    int  _endOffset;
    DOMNode * _startNode;
    int  _startOffset;
}

@property (nonatomic, retain) WebFrame *container;
@property (nonatomic, retain) DOMNode *endNode;
@property int endOffset;
@property (nonatomic, retain) DOMNode *startNode;
@property int startOffset;

- (void).cxx_destruct;
- (void)_applyContainerRestrictionsToTypes;
- (bool)_containerReadyForDetection;
- (struct __DDScanQuery { }*)_createScanQueryForBackend;
- (bool)_rangeValidForContainer;
- (void)_updateGenerationNumber;
- (void)cleanup;
- (bool)containerIsReady;
- (void)dispatchContainerModificationBlock:(id /* block */)arg1;
- (bool)doURLificationOnDocument;
- (id)endNode;
- (int)endOffset;
- (bool)needsToStartOver;
- (id)newOperationForContinuation;
- (id)newOperationForStartingOver;
- (void)setEndNode:(id)arg1;
- (void)setEndOffset:(int)arg1;
- (void)setStartNode:(id)arg1;
- (void)setStartOffset:(int)arg1;
- (id)startNode;
- (int)startOffset;

@end
