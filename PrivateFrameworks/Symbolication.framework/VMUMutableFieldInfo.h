/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/Symbolication.framework/Symbolication
 */

@interface VMUMutableFieldInfo : VMUFieldInfo

@property (nonatomic) unsigned int flags;
@property (nonatomic) bool isByref;
@property (nonatomic) bool isCapture;
@property (nonatomic, copy) NSString *ivarName;
@property (nonatomic) unsigned int scanType;
@property (nonatomic) unsigned int scannableSize;
@property (nonatomic) unsigned int stride;
@property (nonatomic, copy) NSString *typeName;

- (void)addSubField:(id)arg1;
- (void)mutateTypeFieldsRecursivelyWithBlock:(id /* block */)arg1 parentOffset:(unsigned int)arg2;
- (bool)replaceFieldRecursively:(id)arg1 withField:(id)arg2;
- (void)setFlags:(unsigned int)arg1;
- (void)setIsByref:(bool)arg1;
- (void)setIsCapture:(bool)arg1;
- (void)setIvarName:(id)arg1;
- (void)setKind:(unsigned int)arg1;
- (void)setOffset:(unsigned int)arg1;
- (void)setScanType:(unsigned int)arg1;
- (void)setScannableSize:(unsigned int)arg1;
- (void)setSize:(unsigned int)arg1;
- (void)setStride:(unsigned int)arg1;

@end
