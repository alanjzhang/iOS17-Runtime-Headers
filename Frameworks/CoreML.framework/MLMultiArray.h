/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CoreML.framework/CoreML
 */

@interface MLMultiArray : NSObject <NSSecureCoding> {
    NSArray * _shape;
    struct unique_ptr<StorageManager, std::default_delete<StorageManager>> { 
        struct __compressed_pair<StorageManager *, std::default_delete<StorageManager>> { 
            struct StorageManager {} *__value_; 
        } __ptr_; 
    }  _storageManager;
}

@property (nonatomic, readonly) bool backingPixelBufferWasLocked;
@property (nonatomic, readonly) const void*bytes;
@property (getter=isContiguous, nonatomic, readonly) bool contiguous;
@property (nonatomic, readonly) long long count;
@property (nonatomic, readonly) void*dataPointer;
@property (nonatomic, readonly) long long dataType;
@property (nonatomic, readonly) void*mutableBytes;
@property (nonatomic, readonly) unsigned long long numberOfBytesPerElement;
@property (nonatomic, readonly) struct __CVBuffer { }*pixelBuffer;
@property (nonatomic, readonly) NSArray *shape;
@property (nonatomic, readonly) NSArray *strides;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/CoreML.framework/CoreML

+ (id)stringForDataType:(long long)arg1;
+ (bool)supportsSecureCoding;

- (id).cxx_construct;
- (void).cxx_destruct;
- (bool)backingPixelBufferWasLocked;
- (long long)count;
- (void*)dataPointer;
- (long long)dataType;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithBytesNoCopy:(void*)arg1 shape:(id)arg2 dataType:(long long)arg3 strides:(id)arg4 deallocator:(id /* block */)arg5 mutableShapedBufferProvider:(id /* block */)arg6 error:(id*)arg7;
- (id)initWithCoder:(id)arg1;
- (id)initWithDataPointer:(void*)arg1 shape:(id)arg2 dataType:(long long)arg3 strides:(id)arg4 deallocator:(id /* block */)arg5 error:(id*)arg6;
- (id)initWithMultiArrayBuffer:(struct shared_ptr<CoreML::MultiArrayBuffer> { struct MultiArrayBuffer {} *x1; struct __shared_weak_count {} *x2; })arg1;
- (id)initWithPixelBuffer:(struct __CVBuffer { }*)arg1 shape:(id)arg2;
- (id)initWithShape:(id)arg1 dataType:(long long)arg2 error:(id*)arg3;
- (id)numberAtOffset:(unsigned long long)arg1;
- (id)objectAtIndexedSubscript:(long long)arg1;
- (id)objectForKeyedSubscript:(id)arg1;
- (unsigned long long)offsetForKeyedSubscript:(id)arg1;
- (struct __CVBuffer { }*)pixelBuffer;
- (void)setNumber:(id)arg1 atOffset:(unsigned long long)arg2;
- (void)setObject:(id)arg1 atIndexedSubscript:(long long)arg2;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (id)shape;
- (id)strides;

// MLMultiArray (Attributes)

+ (int)cppStorageOrder:(long long)arg1;

- (const void*)bytes;
- (double*)doublePointer;
- (float*)float32Pointer;
- (bool)isContiguous;
- (bool)isContiguousInOrder:(long long)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isEqualToMultiArray:(id)arg1;
- (void*)mutableBytes;
- (unsigned long long)numberOfBytesPerElement;

// MLMultiArray (Concatenating)

+ (id)_multiArrayByConcatenatingMultiArrays:(id)arg1 alongAxis:(long long)arg2 dataType:(long long)arg3;
+ (id)multiArrayByConcatenatingMultiArrays:(id)arg1 alongAxis:(long long)arg2 dataType:(long long)arg3;
+ (bool)validateMultiArrays:(id)arg1 forConcatenatingAlongAxis:(long long)arg2 normalizedAxis:(unsigned long long*)arg3 reason:(id*)arg4;

// MLMultiArray (ConvenientConstruction)

+ (id)doubleMatrixWithValues:(id)arg1 error:(id*)arg2;
+ (id)doubleMultiArrayWithCopyOfMultiArray:(id)arg1;
+ (id)doubleMultiArrayWithShape:(id)arg1 valueArray:(id)arg2 error:(id*)arg3;
+ (id)doubleVectorWithValues:(id)arg1;
+ (id)float32MatrixWithValues:(id)arg1 error:(id*)arg2;
+ (bool)getShapeOfArrayOfSameLengthArrays:(id)arg1 numberOfRows:(unsigned long long*)arg2 numberOfColumns:(unsigned long long*)arg3 error:(id*)arg4;

// MLMultiArray (CopyingAndVectorization)

- (bool)copyIntoMultiArray:(id)arg1 error:(id*)arg2;
- (bool)vectorizeIntoMultiArray:(id)arg1 storageOrder:(long long)arg2 error:(id*)arg3;

// MLMultiArray (Filling)

- (bool)fillWithNumber:(id)arg1;
- (id)numberArray;
- (bool)setRangeWithRawData:(id)arg1 destIndex:(unsigned long long)arg2 error:(id*)arg3;

// MLMultiArray (ImageUtils)

+ (struct __CVBuffer { }*)pixelBufferBGRA8FromMultiArrayCHW:(id)arg1 channelOrderIsBGR:(bool)arg2 error:(id*)arg3;
+ (struct __CVBuffer { }*)pixelBufferGray16HalfFromMultiArrayHW:(id)arg1 error:(id*)arg2;
+ (struct __CVBuffer { }*)pixelBufferGray8FromMultiArrayHW:(id)arg1 error:(id*)arg2;

- (void)getContiguousFirstMajorFloat32BufferWithHandler:(id /* block */)arg1;
- (bool)renderTo32BGRAPixelBuffer:(struct __CVBuffer { }*)arg1 channelOrderIsBGR:(bool)arg2 error:(id*)arg3;
- (bool)renderToCVPixelBuffer:(struct __CVBuffer { }*)arg1 channelOrderIsBGR:(bool)arg2 error:(id*)arg3;
- (bool)renderToOneComponent16HalfPixelBuffer:(struct __CVBuffer { }*)arg1 error:(id*)arg2;
- (bool)renderToOneComponent8PixelBuffer:(struct __CVBuffer { }*)arg1 error:(id*)arg2;

// MLMultiArray (MLE5Utils)

+ (id)multiArrayOwningBufferObjectOfPort:(struct e5rt_io_port { }*)arg1 error:(id*)arg2;

// MLMultiArray (PrivateConstruction)

+ (id)_shapeOfNestedArray:(id)arg1 error:(id*)arg2;
+ (bool)validateNestedArray:(id)arg1 error:(id*)arg2;

- (id)initWithArray:(id)arg1 dataType:(long long)arg2;
- (id)initWithBytesNoCopy:(void*)arg1 shape:(id)arg2 dataType:(long long)arg3 strides:(id)arg4 mutableShapedBufferProvider:(id /* block */)arg5;
- (id)initWithScalars:(id)arg1 shape:(id)arg2 dataType:(long long)arg3;
- (id)initWithShape:(id)arg1 dataType:(long long)arg2 storageOrder:(long long)arg3 bufferAlignment:(unsigned long long)arg4;
- (id)initWithShape:(id)arg1 dataType:(long long)arg2 storageOrder:(long long)arg3 error:(id*)arg4;

// MLMultiArray (QuickLook)

- (id)debugQuickLookObject;

// MLMultiArray (RawAccess)

- (void*)multiArrayBuffer;

// MLMultiArray (ScopedBufferAccess)

- (void)getBytesWithHandler:(id /* block */)arg1;
- (void)getMutableBytesWithHandler:(id /* block */)arg1;

// MLMultiArray (Views)

- (id)multiArrayViewExpandingDimensionsAtAxis:(long long)arg1;
- (id)sliceAtOrigin:(id)arg1 shape:(id)arg2 squeeze:(bool)arg3 error:(id*)arg4;
- (id)squeeze;
- (id)squeezeDimensions:(id)arg1 error:(id*)arg2;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech

// MLMultiArray (ConvertToNSArray)

- (id)convert1dMLMultiArrayToNSArray;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PromotedContentPrediction.framework/PromotedContentPrediction

// MLMultiArray (null)

+ (id)multiarrayFromArray:(id)arg1;
+ (id)multiarrayFromFeature:(id)arg1;
+ (id)multiarrayFromFloatArray:(float*)arg1 withLength:(id)arg2;
+ (id)twoDimensionalMultiarrayFromArray:(id)arg1;
+ (id)twoDimensionalMultiarrayFromFeature:(id)arg1;
+ (id)twoDimensionalMultiarrayFromFloatArray:(float*)arg1 withLength:(id)arg2;

- (id)arrayFromMultiarray;

// Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/SiriLiminal.framework/SiriLiminal

// MLMultiArray (ConvertToNSArray)

- (id)convert1dMLMultiArrayToNSArray;

@end
