/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
 */

@interface CUMFiWriteRequest : NSObject {
    id /* block */  _completion;
    NSData * _data;
    CUMFiWriteRequest * next;
}

@property (nonatomic, copy) id /* block */ completion;
@property (nonatomic, retain) NSData *data;

- (void).cxx_destruct;
- (id /* block */)completion;
- (id)data;
- (void)setCompletion:(id /* block */)arg1;
- (void)setData:(id)arg1;

@end
