/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/FeatureStore.framework/FeatureStore
 */

@interface FSFBMStringData : NSObject <BMStoreData> {
    NSString * _content;
    unsigned int  _dataVersion;
}

@property (nonatomic, readonly) unsigned int dataVersion;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)eventWithData:(id)arg1 dataVersion:(unsigned int)arg2;

- (void).cxx_destruct;
- (id)content;
- (unsigned int)dataVersion;
- (id)initWithContent:(id)arg1 dataVersion:(unsigned int)arg2;
- (id)initWithData:(id)arg1 dataVersion:(unsigned int)arg2;
- (id)serialize;

@end
