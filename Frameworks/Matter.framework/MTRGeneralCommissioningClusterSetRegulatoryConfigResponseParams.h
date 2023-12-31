/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/Frameworks/Matter.framework/Matter
 */

@interface MTRGeneralCommissioningClusterSetRegulatoryConfigResponseParams : NSObject <NSCopying> {
    NSString * _debugText;
    NSNumber * _errorCode;
    NSNumber * _timedInvokeTimeoutMs;
}

@property (nonatomic, copy) NSString *debugText;
@property (nonatomic, copy) NSNumber *errorCode;
@property (nonatomic, copy) NSNumber *timedInvokeTimeoutMs;

// MTRGeneralCommissioningClusterSetRegulatoryConfigResponseParams (null)

- (void).cxx_destruct;
- (struct ChipError { unsigned int x1; char *x2; unsigned int x3; })_setFieldsFromDecodableStruct:(const void*)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)debugText;
- (id)description;
- (id)errorCode;
- (id)init;
- (id)initWithResponseValue:(id)arg1 error:(id*)arg2;
- (void)setDebugText:(id)arg1;
- (void)setErrorCode:(id)arg1;
- (void)setTimedInvokeTimeoutMs:(id)arg1;
- (id)timedInvokeTimeoutMs;

@end
