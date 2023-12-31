/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/AXMediaUtilities.framework/AXMediaUtilities
 */

@interface AXMOutputRequest : NSObject {
    id /* block */  _completionBlock;
    AXMOutputRequestHandle * _handle;
    bool  _interruptsAndClearsQueue;
    NSObject<OS_dispatch_queue> * _queue;
    NSMutableArray * _queue_actions;
}

@property (nonatomic, readonly) NSArray *actions;
@property (nonatomic, readonly) NSArray *activeSoundActions;
@property (nonatomic, copy) id /* block */ completionBlock;
@property (nonatomic, readonly) AXMOutputRequestHandle *handle;
@property (nonatomic) bool interruptsAndClearsQueue;
@property (nonatomic, readonly) NSArray *oneShotSoundActions;
@property (nonatomic, readonly) NSArray *speechActions;

+ (id)speechItemSeparator;

- (void).cxx_destruct;
- (void)_addAction:(id)arg1;
- (id)actions;
- (id)activeSoundActions;
- (void)addActiveSoundItemWithID:(id)arg1;
- (void)addActiveSoundItemWithURL:(id)arg1;
- (void)addSoundItemWithID:(id)arg1;
- (void)addSoundItemWithURL:(id)arg1;
- (void)addSpeechItem:(id)arg1;
- (id /* block */)completionBlock;
- (id)handle;
- (id)init;
- (bool)interruptsAndClearsQueue;
- (id)oneShotSoundActions;
- (void)setCompletionBlock:(id /* block */)arg1;
- (void)setInterruptsAndClearsQueue:(bool)arg1;
- (id)speechActions;

@end
