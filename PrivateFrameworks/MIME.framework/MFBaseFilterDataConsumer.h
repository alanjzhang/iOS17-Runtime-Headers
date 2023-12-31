/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/MIME.framework/MIME
 */

@interface MFBaseFilterDataConsumer : NSObject <MFDataConsumer> {
    NSMutableArray * _consumers;
    bool  _serialAppend;
}

@property (nonatomic, readonly) NSArray *consumers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (getter=isSerialAppend, nonatomic) bool serialAppend;
@property (readonly) Class superclass;

+ (id)filterWithConsumer:(id)arg1;
+ (id)filterWithConsumers:(id)arg1;

- (void).cxx_destruct;
- (long long)appendData:(id)arg1;
- (id)consumers;
- (void)done;
- (id)initWithConsumer:(id)arg1;
- (id)initWithConsumers:(id)arg1;
- (bool)isSerialAppend;
- (void)setSerialAppend:(bool)arg1;

@end
