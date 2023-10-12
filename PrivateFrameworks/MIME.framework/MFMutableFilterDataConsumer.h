/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFMutableFilterDataConsumer : MFBaseFilterDataConsumer <MFGuaranteedCollectingDataConsumer> {
    MFLock * _consumerLock;
    bool  _isDone;
    <MFGuaranteedCollectingDataConsumer> * _mainConsumer;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)addDataConsumer:(id)arg1;
- (long long)appendData:(id)arg1;
- (id)data;
- (void)done;
- (id)initWithMainConsumer:(id)arg1;

@end
