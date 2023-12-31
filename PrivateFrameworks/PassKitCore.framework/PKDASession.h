/* Generated by RuntimeBrowser
   Image: /Library/Developer/CoreSimulator/Volumes/iOS_21A328/Library/Developer/CoreSimulator/Profiles/Runtimes/iOS 17.0.simruntime/Contents/Resources/RuntimeRoot/System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
 */

@interface PKDASession : NSObject <PKSession> {
    <PKSessionDelegate> * _delegate;
    _Atomic unsigned int  _sessionState;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) <PKSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic, readonly) unsigned long long state;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)dealloc;
- (id)delegate;
- (id)description;
- (void)endSession;
- (id)initWithDelegate:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setState:(unsigned long long)arg1;
- (bool)startSession;
- (unsigned long long)state;

@end
