/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
 */

@interface DDTextKitOperation : DDOperation {
    int  _editCount;
    struct _NSRange { 
        unsigned long long location; 
        unsigned long long length; 
    }  _range;
}

@property (nonatomic, retain) UITextView *container;
@property struct _NSRange { unsigned long long x1; unsigned long long x2; } range;

- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_addResultToAttributes:(id)arg1 inStorage:(id)arg2 editing:(bool)arg3;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })_addResultsToAttributesInStorage:(id)arg1;
- (struct __DDScanQuery { }*)_createScanQueryForBackend;
- (bool)_rangeValidForContainer;
- (void)_updateGenerationNumber;
- (void)cleanup;
- (void)dispatchContainerModificationBlock:(id /* block */)arg1;
- (bool)doURLificationOnDocument;
- (id)initWithContainer:(id)arg1;
- (bool)needsToStartOver;
- (id)newOperationForContinuation;
- (id)newOperationForStartingOver;
- (struct _NSRange { unsigned long long x1; unsigned long long x2; })range;
- (void)setRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)textDidChange:(id)arg1;

@end
