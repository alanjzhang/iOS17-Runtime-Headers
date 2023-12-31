/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ProactiveML.framework/ProactiveML
 */

@interface PMLModelWeights : NSObject <PMLPlistAndChunksSerializableProtocol> {
    PMLMutableDenseVector * _data;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) int length;
@property (readonly) Class superclass;

+ (id)constWeightsOfLength:(int)arg1 value:(float)arg2;
+ (id)modelWeightsFromFloats:(id)arg1;
+ (id)modelWeightsOfLength:(int)arg1;
+ (id)modelWeightsOfLength:(int)arg1 rng:(id)arg2;
+ (id)modelWeightsOfLength:(int)arg1 rngSeed:(unsigned long long)arg2;
+ (id)weightsFromNumbers:(id)arg1;
+ (id)zeroWeightsOfLength:(int)arg1;

- (void).cxx_destruct;
- (id)asMutableDenseVector;
- (id)copy;
- (id)initModelWeightsFromFloats:(id)arg1;
- (id)initWithCount:(int)arg1;
- (int)length;
- (void)processValuesInPlaceWithBlock:(id /* block */)arg1;
- (id)sliceFrom:(int)arg1 to:(int)arg2;
- (float*)values;
- (id)weightsByAppendingWeights:(id)arg1;

// PMLModelWeights (PMLMobileAssetParameterGetStrategy)

- (id)initFromDictionary:(id)arg1;
- (id)toDictionary;

// PMLModelWeights (PMLPlistAndChunksSerialization)

- (id)initWithPlist:(id)arg1 chunks:(id)arg2 context:(id)arg3;
- (id)migrateDenseDoubleVectorToDenseFloatVector:(id)arg1;
- (id)toPlistWithChunks:(id)arg1;

@end
