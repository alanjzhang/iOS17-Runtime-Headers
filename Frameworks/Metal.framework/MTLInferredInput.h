/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Metal.framework/Metal
 */

@interface MTLInferredInput : NSObject {
    unsigned long long  _aluType;
    bool  _baseInstanceUnused;
    unsigned long long  _bufferIndex;
    unsigned long long  _dataType;
    unsigned long long  _offset;
    unsigned long long  _pixelFormat;
    unsigned long long  _stepFunction;
    unsigned long long  _stepRate;
    unsigned long long  _stride;
}

@property (readonly) unsigned long long aluType;
@property (readonly) bool baseInstanceUnused;
@property (readonly) unsigned long long bufferIndex;
@property (readonly) unsigned long long dataType;
@property (readonly) unsigned long long offset;
@property (readonly) unsigned long long pixelFormat;
@property (readonly) unsigned long long stepFunction;
@property (readonly) unsigned long long stepRate;
@property (readonly) unsigned long long stride;

- (unsigned long long)aluType;
- (bool)baseInstanceUnused;
- (unsigned long long)bufferIndex;
- (unsigned long long)dataType;
- (id)description;
- (id)formattedDescription:(unsigned long long)arg1;
- (id)initWithDataType:(unsigned long long)arg1 pixelFormat:(unsigned long long)arg2 aluType:(unsigned long long)arg3 offset:(unsigned long long)arg4 bufferIndex:(unsigned long long)arg5 stride:(unsigned long long)arg6 stepFunction:(unsigned long long)arg7 stepRate:(unsigned long long)arg8 baseInstanceUnused:(bool)arg9;
- (unsigned long long)offset;
- (unsigned long long)pixelFormat;
- (unsigned long long)stepFunction;
- (unsigned long long)stepRate;
- (unsigned long long)stride;

@end
