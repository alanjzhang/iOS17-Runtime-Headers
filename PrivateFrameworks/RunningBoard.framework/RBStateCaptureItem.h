/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/RunningBoard.framework/RunningBoard
 */

@interface RBStateCaptureItem : NSObject {
    id /* block */  _block;
    NSString * _identifier;
    <RBSInvalidatable> * _invalidatable;
    NSString * _title;
}

@property (nonatomic, readonly, copy) id /* block */ block;
@property (nonatomic, readonly, copy) NSString *identifier;
@property (nonatomic, readonly, copy) NSString *title;

- (void).cxx_destruct;
- (id /* block */)block;
- (void)dealloc;
- (id)identifier;
- (id)initWithTitle:(id)arg1 identifier:(id)arg2 block:(id /* block */)arg3;
- (id)title;

@end
