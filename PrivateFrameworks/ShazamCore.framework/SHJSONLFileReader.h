/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/ShazamCore.framework/ShazamCore
 */

@interface SHJSONLFileReader : NSObject {
    <SHJSONLDataDetokenizerDelegate> * _delegate;
}

@property (nonatomic) <SHJSONLDataDetokenizerDelegate> *delegate;

- (void).cxx_destruct;
- (id)delegate;
- (id)inputForAlgorithm:(int)arg1 error:(id*)arg2;
- (bool)loadData:(id)arg1 withCompression:(int)arg2 error:(id*)arg3;
- (bool)loadDataFromURL:(id)arg1 error:(id*)arg2;
- (bool)loadDataFromURL:(id)arg1 withCompression:(int)arg2 error:(id*)arg3;
- (void)setDelegate:(id)arg1;

@end
