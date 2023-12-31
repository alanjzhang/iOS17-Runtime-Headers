/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/MediaServices.framework/MediaServices
 */

@interface MSVMessageParser : NSObject {
    <MSVMessageParserDelegate> * _delegate;
    long long  _unhandledObjectDataExpectedLength;
    NSMutableData * _unhandledPartialData;
    NSMutableData * _unhandledPartialObjectData;
}

@property (nonatomic) <MSVMessageParserDelegate> *delegate;
@property (nonatomic) long long unhandledObjectDataExpectedLength;
@property (nonatomic, retain) NSMutableData *unhandledPartialData;
@property (nonatomic, retain) NSMutableData *unhandledPartialObjectData;

+ (id)createHeader:(unsigned long long)arg1;

- (void).cxx_destruct;
- (void)_notifyDelegate:(id)arg1;
- (id)delegate;
- (void)processData:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setUnhandledObjectDataExpectedLength:(long long)arg1;
- (void)setUnhandledPartialData:(id)arg1;
- (void)setUnhandledPartialObjectData:(id)arg1;
- (long long)unhandledObjectDataExpectedLength;
- (id)unhandledPartialData;
- (id)unhandledPartialObjectData;

@end
