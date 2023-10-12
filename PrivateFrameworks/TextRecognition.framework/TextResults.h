/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/TextRecognition.framework/TextRecognition
 */

@interface TextResults : NSObject {
    NSArray * _cols;
    NSMutableArray * _mutableCols;
}

@property (readonly) unsigned long long colCount;
@property (nonatomic, retain) NSArray *cols;
@property (nonatomic, retain) NSMutableArray *mutableCols;

- (void).cxx_destruct;
- (void)addColumn:(id)arg1;
- (unsigned long long)colCount;
- (id)cols;
- (id)init;
- (id)mutableCols;
- (void)setCols:(id)arg1;
- (void)setMutableCols:(id)arg1;
- (void)sortCols;
- (id)transcriptionOfPath:(id)arg1 tokenProcessingBlock:(id /* block */)arg2;

@end
