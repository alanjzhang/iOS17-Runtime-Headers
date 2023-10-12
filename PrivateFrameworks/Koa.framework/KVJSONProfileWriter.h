/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/Koa.framework/Koa
 */

@interface KVJSONProfileWriter : NSObject <KVProfileWriter> {
    unsigned int  _datasetIdx;
    unsigned int  _itemIdx;
    NSOutputStream * _stream;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (bool)addItem:(id)arg1 error:(id*)arg2;
- (bool)finishDataset:(id*)arg1;
- (bool)finishProfile:(id*)arg1;
- (id)initWithOutputStream:(id)arg1;
- (bool)startDataset:(id)arg1 error:(id*)arg2;
- (bool)startProfile:(id)arg1 error:(id*)arg2;

@end
