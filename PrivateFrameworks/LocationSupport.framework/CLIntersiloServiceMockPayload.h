/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/LocationSupport.framework/LocationSupport
 */

@interface CLIntersiloServiceMockPayload : NSObject {
    XCTestExpectation * _expectation;
    bool  _inUse;
    NSDictionary * _inputDictionary;
    NSDictionary * _outputDictionary;
}

@property (nonatomic, readonly) XCTestExpectation *expectation;
@property (nonatomic) bool inUse;
@property (nonatomic, readonly) NSDictionary *inputDictionary;
@property (nonatomic, readonly) NSDictionary *outputDictionary;

- (void).cxx_destruct;
- (id)expectation;
- (bool)inUse;
- (id)initWithExpectation:(id)arg1 inputDictionary:(id)arg2;
- (id)inputDictionary;
- (id)outputDictionary;
- (void)setInUse:(bool)arg1;
- (void)setOutput:(id)arg1 forKey:(id)arg2;

@end
